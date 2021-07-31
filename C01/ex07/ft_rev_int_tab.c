/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sale <dde-sale@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:13:06 by dde-sale          #+#    #+#             */
/*   Updated: 2021/07/25 04:00:54 by dde-sale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*begin;
	int	*end;
	int	change;

	begin = tab;
	change = 0;
	end = tab + size - 1;
	while (begin < end)
	{
		change = *begin;
		*begin = *end;
		*end = change;
		begin++;
		end--;
	}
}
