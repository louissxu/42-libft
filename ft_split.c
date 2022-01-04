#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	number_of_words;
	size_t	word_i;
	size_t	i;
	size_t	j;
	char	**words;

	word_count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word_count++;
		}
		i++;
	}
	words = malloc(sizeof *words * (number_of_words + 1));
	if (!words)
	{
		return (words);
	}
	i = 0;
	j = i;
	word_i = 0;
	while (s[i])
	{
		while (s[j] && s[j] != c)
		{

