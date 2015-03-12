/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 23:12:24 by nperrin           #+#    #+#             */
/*   Updated: 2014/12/17 23:14:37 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tablen(void **tab)
{
	int		len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}