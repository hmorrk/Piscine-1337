/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:23:45 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/10 17:33:11 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);

	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);

	i = 0;
	while (min < max)
	{
		range[i] = min;
		min ++;
		i++;
	}
	return (range);
}
