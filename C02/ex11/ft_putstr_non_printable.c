/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 01:03:55 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/03 01:40:44 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(unsigned char a)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[a / 16], 1);
	write(1, &"0123456789abcdef"[a % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
			ft_convert((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
