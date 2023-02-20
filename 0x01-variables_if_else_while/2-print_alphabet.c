#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description random 2-print_alphabet.c
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
puchar(c);
c++;
}
putchar('\n');
return (0);
}
