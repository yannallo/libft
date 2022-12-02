#include "libft.h"

int	count_nbr_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (s[i + 1] == c || s[i + 1] == '\0')
				count++;
		i++;
	}
	return (count);
}

int	get_len_word(const char *s, char c, int start)
{
	int	i;
    int j;

    i = start;
    while (s[i] && s[i] == c)
    {
        i++;
        start++;
    }
	while (s[i] && s[i] != c)
		i++;
    j = start;
    start = i;
	return (i - j);
}

int	get_start_index(char const *s, char c, int index)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] && word < index)
	{
		while (s[i] != c)
			i++;
		if (s[i] != c && s[i])
			if (s[i + 1] != c)
				word++;
		i++;
	}
	return (i);
}

int	nbr_delimiter(char const *s, char c, int index)
{
	int i;

	i = index;
	while (s[i] == c)
		i++;
	return (i);
}

int main(void)
{
    int i = 0;
    char *s = "Bonjour    les    bro";
    char c = ' ';
    int start = get_start_index(s, c, i);
    int len = get_len_word(s, c, start);

}