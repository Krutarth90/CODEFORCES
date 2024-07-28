#!/bin/bash

# Copy the demo.cpp to a temporary file for compilation
cp /workspaces/CODEFORCES/codeforces/demo.cpp /workspaces/CODEFORCES/codeforces/jspwTest.cpp

# Navigate to the directory
cd /workspaces/CODEFORCES/codeforces

# Compile the C++ file
g++ jspwTest.cpp -o jspwTest.exe

# Run the executable with input from input.txt and output to output.txt
./jspwTest.exe < input.txt > output.txt

# Clean up the temporary files
rm jspwTest.exe
rm jspwTest.cpp
