/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:54:31 by houarrak          #+#    #+#             */
/*   Updated: 2024/07/13 19:58:38 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len ++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strflength(char **strings, int size, int sep_length)
{
    int final_length;
    int i;

	final_length = 0;
	i = 0;
    while (i < size)
    {
        final_length += ft_strlen(strings[i]);
        final_length += sep_length;
        i++;
    }
    final_length -= sep_length;
    return (final_length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int	i;
	int full_length;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_strflength(strs, size, ft_strlen(sep));
	dest = (char *)malloc((full_length + 1) * sizeof(char));
	if(!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
	return (dest - full_length);

}
