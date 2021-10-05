/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:49:30 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/10/05 20:56:05 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*
** In 42school, ternary operator is not allowed.
*/
void	ft_iternary(int d, int a, int b)
{
	if (d != 0)
		return (b);
	return (a);
}

void	*ft_pternary(int d, void *a, void *b)
{
	if (d != 0)
		return (b);
	return (a);
}