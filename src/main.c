/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:35:10 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/22 21:16:09 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
/* will be removed */
#include <string.h>


static void	init_private(t_args *args, t_shared *s, int i);
static int	init_args(t_args **args, t_shared *s);
int	simul(t_shared *s);

void print_glstrarr(int errnum)
{
	write(2, g_msg[errnum], ft_strlen(g_msg[errnum]));
	return (errnum);
}

int	main(int argc, char *argv[])
{
	t_shared	s;

	return (simulate(parse(&s, argc, argv)));
}