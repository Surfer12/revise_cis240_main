#!/bin/bash

# Setup Script for Project

# Clone the repository
# Usage: ./setup.sh <repository-url>

if [ -z "$1" ]; then
  echo "Usage: ./setup.sh <repository-url>"
  exit 1
fi

REPO_URL=$1

# Clone the repository
git clone $REPO_URL

# Extract the repository name from the URL
REPO_NAME=$(basename $REPO_URL .git)

# Navigate to the project directory
cd $REPO_NAME || exit

# Install dependencies if requirements.txt exists
if [ -f "requirements.txt" ]; then
  echo "Installing dependencies..."
  pip install -r requirements.txt
else
  echo "No requirements.txt found, skipping dependency installation."
fi

# Print completion message
echo "Setup complete. Navigate to the project directory with 'cd $REPO_NAME'"