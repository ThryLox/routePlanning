#!/bin/bash

# Compile the C++ files
g++ -std=c++11 -o agent main.cpp Edge.cpp Node.cpp Graph.cpp Agent.cpp

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "*************Compilation successfull**************"
    echo "**************Running agent***********************"
    # Execute the compiled program
    ./agent
else
    echo "Compilation failed."
fi
