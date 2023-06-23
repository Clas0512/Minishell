/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:04:24 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/06/23 15:17:56 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	(void)env;
	t_line	tl;
	int	rv = 0;
	char *str = readline("minishell$ ");
	int len = ms_strlen(str);
	printf("- input : %s\n- length : %d\n", str, len);
	tl.line = str;
	ms_prepare_input(&tl);
	rv = ms_exec(&tl);
	printf("return value: %d\n",rv);
	return (0);
}
