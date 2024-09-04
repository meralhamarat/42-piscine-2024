/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehamara <mehamara@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:59:35 by mehamara          #+#    #+#             */
/*   Updated: 2024/09/03 12:41:06 by mehamara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(size * sizeof(int));
	if (!array)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
