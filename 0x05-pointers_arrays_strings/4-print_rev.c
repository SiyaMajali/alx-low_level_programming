#include "main.h"
/**
 *print_rev - prints reverse
 *@s: char
 *Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Priv
