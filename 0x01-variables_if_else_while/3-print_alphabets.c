#include <stdio.h>
/**
 * main - entry block
 * Description - 3-print_alphabets.c
 * return (0)
 */

int main(void)
{char c = 'a';
while (c <= 'z')
{putchar(c);
c++;
} c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
} putchar('\n');
return (0);
}
