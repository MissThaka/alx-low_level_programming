#include <stdio.h>
/**
 * main - entry block
 * Description Write a program that prints the alphabet lowercase
 */

int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{ putchar(c);
c++; }
} putchar('\n');
return (0);
}
