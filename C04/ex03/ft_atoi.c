/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:28:04 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/06 21:56:59 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\f' || c == '\r'
		|| c == '\v' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

int	ft_convert(char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	min;

	i = 0;
	result = 0;
	min = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min ++;
		i++;
	}
	if (min % 2)
		sign = -1;
	result = ft_convert(str, i);
	return (result * sign);
}
