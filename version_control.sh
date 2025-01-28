#!/bin/bash

# Version Control Script

# Check for untracked files
echo "Checking for untracked files..."
git ls-files --others --exclude-standard

# Check for changes in .gitignore
echo "Checking for changes in .gitignore..."
git diff -- .gitignore

# Provide a summary of the current git status
echo "Current git status:"
git status

# Print completion message
echo "Version control check complete."