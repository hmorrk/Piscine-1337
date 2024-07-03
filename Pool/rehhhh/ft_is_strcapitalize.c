/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_strcapitalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:22:39 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/01 15:54:48 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	begin_word;

	i = 0;
	begin_word = 1;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			if (begin_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!begin_word &&(str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			begin_word = 0; 
		}
		else
		{
			begin_word = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "houSSam NADI w db 13code37 ?";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
