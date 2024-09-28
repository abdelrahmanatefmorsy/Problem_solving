#!/bin/bash

# اسم ملف C++ اللي عايز تعمل له build و run
CPP_FILE="solve.cpp"  # غير اسم الملف هنا لو مختلف

# اسم البرنامج الناتج بعد الـ build
OUTPUT_FILE="program"

# ملف الإدخال وملف الإخراج
INPUT_FILE="input.txt"
OUTPUT_FILE_RESULT="output.txt"

# Compile the C++ code
g++ -o $OUTPUT_FILE $CPP_FILE

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    
    # Run the program with input and output redirection
    ./$OUTPUT_FILE < $INPUT_FILE > $OUTPUT_FILE_RESULT
    
    echo "Program output saved to $OUTPUT_FILE_RESULT"
else
    echo "Compilation failed. Please check your C++ code for errors."
fi
