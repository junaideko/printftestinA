#include "main.h"
/**
 * _strlen - print out length of a string
 * @s: char pointer of string
 *
 * Return: int;
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}