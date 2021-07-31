/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sale <dde-sale@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:49:56 by dde-sale          #+#    #+#             */
/*   Updated: 2021/07/29 23:39:45 by dde-sale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	index;

	index = 0;
	size = ft_strlen(dest);
	while (index < nb && src[index] != '\0')
	{
		dest[size + index] = src[index];
		index++;
	}
	dest[size + index] = '\0';
	return (dest);
}
