/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftriquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:08:55 by ftriquet          #+#    #+#             */
/*   Updated: 2015/12/04 16:45:39 by ftriquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strreplace(char *str, char old, char new)
{
	if (str)
		while (*str)
		{
			if (*str == old)
				*str = new;
			str++;
		}
}