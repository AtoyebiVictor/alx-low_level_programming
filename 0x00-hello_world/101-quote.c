#include <stdio.h>
/**
 * main - main block
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\";
write(2, str1, 70);
return (1);
}
