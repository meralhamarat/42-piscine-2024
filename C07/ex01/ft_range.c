/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehamara <mehamara@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:01:53 by mehamara          #+#    #+#             */
/*   Updated: 2024/09/03 12:42:01 by mehamara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	range = max - min;
	array = malloc(range * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
