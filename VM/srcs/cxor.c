/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cxor.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 10:23:29 by nperrin           #+#    #+#             */
/*   Updated: 2015/03/03 10:23:30 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int		cxor(t_process *p)
{
	int		result;

	(void)p;
	result = cget_arg(1) ^ cget_arg(2);
	cset_arg(3, result);
	p->reg.carry = result == 0;
	return (0);
}
