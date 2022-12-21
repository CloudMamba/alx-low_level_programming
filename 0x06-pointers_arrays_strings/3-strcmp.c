/**
 * _strcmp - function to compare character
 * @s1: first variable to compsre
 * @s2: second value for comparison
 * Return: The difference between the first charcater that are not the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
