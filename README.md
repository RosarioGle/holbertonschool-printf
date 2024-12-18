# _printf

## Description
This project implements a custom version of the `_printf` function in C, simulating the behavior of the standard `printf` function.

## Features
- Supports format specifiers such as `%c`, `%s`, `%i`, `%d`.
- Returns the total number of characters printed.
- Handles errors.

## Requirements
- A C compiler (e.g., `gcc`).
- Standard C library.

## Installation
1. Clone the repository:
git clone https://github.com/RosarioGle/holbertonschool-printf.git

2. Navigate to the project folder with:
cd holbertonschool-printf

3. Compile the project folder with:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Examples
A simple usage of `_printf`:
```c
#include "main.h"

int main(void)
{
    _printf("Hello, %c! Welcome to %s.\n", 'B', "School");
    return (0);
}
```
Output:
Hello, B! Welcome to School.

Another usage of `_printf`:
```c
#include "main.h"

int main(void)
{
    int nombre = 125;

    _printf("Decimal: %d\nInteger: %i\n", nombre, nombre);
    return (0);
}
```
Output:
Decimal: 125
Integer: 125

## Man page
Please visit this page:
https://github.com/RosarioGle/holbertonschool-printf/blob/rosario/man_3_printf

## Testing
1. Compile the files with the tests included:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c tests/*.c -o test_function

2. Run the test:
./test_function

## Flowchart

![Flowchart (2)](https://github.com/user-attachments/assets/8a8646d3-83e6-49e9-86e1-8c93e8746a8f)

## Authors
- Rosario Glé
- Nicolas Lassouane
