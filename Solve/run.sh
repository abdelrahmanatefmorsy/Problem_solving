#!/bin/bash

# اسم ملف C++ اللي عايز تعمل له build و run
CPP_FILE="solve.cpp"  # غير اسم الملف هنا لو مختلف

# اسم البرنامج الناتج بعد الـ build
EXECUTABLE="program"

# ملف الإدخال وملف الإخراج
INPUT_FILE="input.txt"
OUTPUT_FILE="output.txt"

# Compile the C++ code
g++ -o $EXECUTABLE $CPP_FILE

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    
    # Run the program with input and output redirection
    ./$EXECUTABLE < $INPUT_FILE > $OUTPUT_FILE
    
    echo "Program output saved to $OUTPUT_FILE"
else
    echo "Compilation failed. Please check your C++ code for errors."
fi
