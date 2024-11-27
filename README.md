# _printf

## Description
This project implements a custom version of the `_printf` function in C, simulating the behavior of the standard `printf` function.

## Features
- Supports format specifiers such as `%c`, `%s`, `%i`, `%d`.
- Returns the total number of characters printed.

## Requirements
- A C compiler (e.g., `gcc`).
- Standard C library.

## Installation
1. Clone the repository:
git clone https://github.com/username/project_printf.git

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

## Testing


## Flowchart


## Authors
- Rosario Glé
- Nicolas Lassouane
