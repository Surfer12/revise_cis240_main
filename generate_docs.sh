#!/bin/bash

# Documentation Generation Script

# Function to generate a table of contents for a Markdown file
function generate_toc() {
  local file=$1
  echo "Generating table of contents for $file..."
  # Use a tool like markdown-toc to generate the TOC
  # Install it via npm: npm install -g markdown-toc
  markdown-toc -i "$file"
}

# Find all Markdown files in the docs directory
find docs -name "*.md" | while read -r file; do
  generate_toc "$file"
done

# Print completion message
echo "Documentation generation complete."