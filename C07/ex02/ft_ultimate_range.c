/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:33:48 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/10 20:36:30 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*tmp;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tmp = malloc(sizeof(int) * (max - min));
	if (!tmp)
	{
		*range = NULL;
		return (-1);
	}

	i = 0;
	while (min < max)
	{
		tmp[i] = min;
		min ++;
		i ++;
	}
	*range = tmp;
	return (i);
}
