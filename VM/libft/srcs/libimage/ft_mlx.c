/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 15:23:05 by nperrin           #+#    #+#             */
/*   Updated: 2015/02/08 15:23:08 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	**mlx_ptr_singelton__(void)
{
	static void		*mlx_ptr;

	return (&mlx_ptr);
}
