
#include "utils.h"

/**
 * Checks if a character is a white space character.
 *
 * @param c The character to check.
 * @return 1 if the character is a white space character, 0 otherwise.
 */
static
int	ft_is_white_space(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}

/**
 * Converts a string to an integer.
 *
 * @param nptr The string to convert.
 *
 * @return The integer representation of the string.
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	signe;

	i = 0;
	n = 0;
	signe = 1;
	while (ft_is_white_space(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + nptr[i] - 48;
		i++;
	}
	return (signe * n);
}

long	ft_atol(const char *nptr)
{
	int		i;
	long	n;
	int		signe;

	i = 0;
	n = 0;
	signe = 1;
	while (ft_is_white_space(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + nptr[i] - 48;
		i++;
	}
	return (signe * n);
}
