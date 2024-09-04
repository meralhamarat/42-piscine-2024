/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehamara <mehamara@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:38:48 by mehamara          #+#    #+#             */
/*   Updated: 2024/09/03 12:23:28 by mehamara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	compute_total(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		total += j;
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	return (total + (size - 1) * j);
}

char	*collect_strings(int size, char **strs, char *str, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total = compute_total(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (total + 1));
	if (!str)
		return (NULL);
	return (collect_strings(size, strs, str, sep));
}
