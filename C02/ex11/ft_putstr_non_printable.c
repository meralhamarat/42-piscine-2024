/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehamara <mehamara@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:33:37 by mehamara          #+#    #+#             */
/*   Updated: 2024/08/22 15:41:52 by mehamara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)str[i] / 16]);
			ft_putchar(hex[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}
