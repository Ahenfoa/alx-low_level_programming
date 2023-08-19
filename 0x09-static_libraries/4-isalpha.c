#include "main.h"
/**
* _isalpha - looks for an alphabet
* @c: the character to be checked
* Return: return 1 if c is a letter and 0 if not
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
