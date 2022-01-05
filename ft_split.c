#include "libft.h"
#include <stdlib.h>

static char	*priv_strdup_partial(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof *word * (end - start + 1));
	if (!word)
	{
		return (word)
	}
	i = 0;
	while (s[start + i] && start + i < end)
	{
		word[i] = s[start + i];
		i++;
	}
	s[start + i] = '\0';
	return (word);
}

void	priv_destroy(char **words, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return ();
}

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
		return (NULL);
	}
	i = 0;
	word_i = 0;
	while (s[i])
	{
		j = i;;
		while (s[j] && s[j] != c)
		{
			j++;
		}
		words[word_i] = priv_strdup_partial(s, i, j);
		if (!words[word_i])
		{
			priv_destroy(words, word_i);
			return (NULL);
		}
		words_i++;
		i = j;
		i++;
	}
	words[word_i] = NULL;
	return (words);
}
