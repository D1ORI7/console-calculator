Console Calculator



A simple console-based calculator written in C++.  

The program reads an expression in the format `number operator number` and prints the result.



Features

\- Addition (`+`)

\- Subtraction (`-`)

\- Multiplication (`\*`)

\- Division (`/`) with division-by-zero protection

\- Supports decimal numbers (`double`)



How to Run



Compile

g++ main.cpp -o calculator



Run (Windows)

calculator.exe



Run (Linux/macOS)

./calculator



Usage Example



Input:

3 + 6



Output:

Result: 9



Input:

10 / 0



Output:

Error: division by zero



Code Overview

\- Reads input as: `<double> <char> <double>`

\- Uses a `switch` statement to handle operations

\- Validates operator and division by zero

\- Prints the result or an error message



Requirements

\- C++ compiler (g++, clang++, MSVC)

\- C++11 or newer



