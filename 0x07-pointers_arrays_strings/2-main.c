#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char * _strchr(char *s, char c, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
                s[i] = c;
        return (s);
}
