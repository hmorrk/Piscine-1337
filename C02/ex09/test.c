/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:14 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/03 00:28:05 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int	i;
	int begin_word;

	i = 0;
	begin_word = 1;
	while (str[i])
	{
		if(ft_str_isalpha(str[i]))
		{
			if(begin_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!begin_word && (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str[] = "HELLO";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
