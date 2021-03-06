/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 18:06:46 by marene            #+#    #+#             */
/*   Updated: 2015/03/12 09:03:53 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_array_len(char **array)
{
	int		len;

	len = 0;
	if (array)
	{
		while (array[len] != NULL)
			len++;
	}
	return (len);
}
