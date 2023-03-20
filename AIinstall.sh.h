#!/bin/bash

echo "------------------------------------------------"
echo "|          ChatGPT Installation Script         |"
echo "|             A.I. language assistant           |"
echo "|                    (Sci-Fi edition)            |"
echo "------------------------------------------------"

echo -e "\nWelcome, human! This script will install ChatGPT on your system.\n"

read -p "Do you want to install ChatGPT with Python libraries? (Y/N): " python_libraries

if [[ $python_libraries =~ ^[Yy]$ ]]; then
    echo -e "\nInstalling ChatGPT with Python libraries...\n"
    
    # Install Python libraries
    sudo apt-get update
    sudo apt-get install -y python3-pip
    pip3 install openai
    
    # Run the ChatGPT installation script
    bash <(curl -s https://raw.githubusercontent.com/openai/openai-python/main/examples/chat.py)
else
    echo -e "\nInstalling ChatGPT without Python libraries...\n"
    
    # Download the ChatGPT script using curl
    curl -s https://raw.githubusercontent.com/openai/openai-python/main/examples/chat.py --output chat.py
    
    # Run the ChatGPT script using Python
    python3 chat.py
fi

# Make the script executable
chmod +x chatgpt-install.sh

echo -e "\nInstallation complete. Thank you for choosing ChatGPT as your language assistant.\n"
echo "------------------------------------------------"
echo "|                    Goodbye!                  |"
echo "------------------------------------------------"
