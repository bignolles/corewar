/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_reg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 13:44:00 by marene            #+#    #+#             */
/*   Updated: 2016/02/19 16:12:48 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <asm.h>
#include <error.h>
#include <op.h>

int				gen_register(t_token *flow, t_env *env)
{
	char		*cont;
	int			value;
	t_token		*new;

	cont = NULL;
	if (env->begin < env->end
			&& (cont = ft_strsub(env->line, env->begin, env->end - env->begin)))
	{
		if ((value = ft_atoi(cont)) > 0 && value <= REG_NUMBER)
		{
			if ((new = token_create(cont, value, T_REGISTER, BYTE)))
			{
				free(cont);
				return (add_to_flow(env, flow, new));
			}
			else
				set_serror(env, UNKNOWN_SERROR);
		}
		else
			set_serror(env, W_REG_NB);
	}
	else
		set_serror(env, UNKNOWN_SERROR);
	free(cont);
	return (ASM_KO);
}
