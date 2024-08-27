/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehamara <mehamara@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:27:04 by mehamara          #+#    #+#             */
/*   Updated: 2024/08/27 10:55:38 by mehamara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_base(char *base)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	while (base[length] != '\0')
		length++;
	if (length < 2)
		return (0);
	i = 0;
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	find_index_in_base(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	skip_whitespace_and_signs(char **str)
{
	int	sign;

	sign = 1;
	while (**str <= 32)
		(*str)++;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -sign;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_length;
	int	index;

	result = 0;
	if (!validate_base(base))
		return (0);
	base_length = 0;
	while (base[base_length] != '\0')
		base_length++;
	sign = skip_whitespace_and_signs(&str);
	index = find_index_in_base(*str, base);
	while (index != -1)
	{
		result = result * base_length + index;
		str++;
		index = find_index_in_base(*str, base);
	}
	return (result * sign);
}
