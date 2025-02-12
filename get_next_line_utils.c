/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:37:26 by patferna          #+#    #+#             */
/*   Updated: 2024/12/05 14:30:56 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(char *s, int character)
{
	char	*str;

	str = (char *)s;
	while (*str != character && *str != 0)
		str++;
	if (*str == character)
		return (str);
	else
		return (NULL);
}

void	ft_bzero(void *str, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t c, size_t size)
{
	char	*result;

	result = malloc(c * size);
	if (!result)
		return (NULL);
	ft_bzero(result, (c * size));
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (size +1));
	if (!str || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[size] = 0;
	return (str);
}
