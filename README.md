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
```bash
git clone https://github.com/RosarioGle/holbertonschool-printf.git
```

2. Navigate to the project folder with:
```bash
cd holbertonschool-printf
```

3. Compile the project folder with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

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
STDOUT:
```makefile
Hello, B! Welcome to School.
```

Another usage of `_printf`:
```c
#include "main.h"

int main(void)
{
    int nombre = 125;

    _printf("Decimal: %d\nInteger: %i\n", nombre, nombre);
    return (0);esting
}
```
STDOUT
```makefile
Decimal: 125
Integer: 125
```

## Man page
Please visit this page:
https://github.com/RosarioGle/holbertonschool-printf/blob/rosario/man_3_printf

## Testing
1. Compile the files with the tests included:
```bash
gcc -Wall -Wextra -Werror -pedantic _printf.c functions.c test.c -o test
```

2. Run the test:
```bash
./test
```

3. Example of test:
```c
#include "main.h"

int main(void)
{
    int result;

	printf("-----------------------------\n");

    result = _printf("Character: %c\n", 'A');
    printf("Expected output: Character: A\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

    result = _printf("String: %s\n", "Hell, world!");
    printf("Expected output: String: Hell, world!\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");
```
STDOUT:
```makefile
-----------------------------
Character: A
Expected output: Character: A
Characters printed by _printf: 13
-----------------------------
String: Hell, world!
Expected output: String: Hell, world!
Characters printed by _printf: 22
-----------------------------
```
## Memory testing with valgrind
You can use valgrind to check for potential memory leaks in your _printf program. Below is an example to perform memory tests.

Compile the files:
```bash
gcc -Wall -Wextra -Werror -pedantic _printf.c functions.c test.c -o my_printf
```

To test printing a character:
```bash
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./my_printf 'Character: A'
```
Expected Output:
```yaml
Character: A
==12345== 
==12345== HEAP SUMMARY:
==12345==     in use at exit: 0 bytes in 0 blocks
==12345==   total heap usage: X allocs, X frees, Y bytes allocated
==12345== 
==12345== All heap blocks were freed -- no leaks are possible
```
To test printing a string:
```bash
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./my_printf 'String: Hell, world!'
```
Expected Output:
```yaml
String: Hell, world!
==12345== 
==12345== HEAP SUMMARY:
==12345==     in use at exit: 0 bytes in 0 blocks
==12345==   total heap usage: X allocs, X frees, Y bytes allocated
==12345== 
==12345== All heap blocks were freed -- no leaks are possible
```

## Flowchart


## Authors
- Rosario GLÉ
- Nicolas LASSOUANE
