/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:14:32 by houarrak          #+#    #+#             */
/*   Updated: 2024/06/26 22:04:20 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}
