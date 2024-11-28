#include "main.h"
#include <stdio.h>

int main(void)
{
    int result;

	printf("-----------------------------\n");

	result = _printf("Percent: %%\n");
    printf("Expected output: Percent: %%\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

    result = _printf("Character: %c\n", 'A');
    printf("Expected output: Character: A\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

    result = _printf("String: %s\n", "Hello, world!");
    printf("Expected output: String: Hello, world!\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

    result = _printf("Integer: %d\n", -13);
    printf("Expected output: Integer: -13\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

	result = _printf("Integer: %i\n", 2);
    printf("Expected output: Integer: 2\n");
    printf("Characters printed by _printf: %d\n", result);
	printf("-----------------------------\n");

    return (0);
}
