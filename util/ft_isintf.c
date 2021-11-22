/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:33:43 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/22 20:22:43 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilx.h"

/*
 * ft_isintf(): 'is' it 'int' 'f'ormat?
 * ----------------------------------------------------------------------------
 * @param	(const char)str	: "[-,+][n zeros][int_min ~ int_max]"
 * @return	(int)			: if true, returns 1 else 0
 */
int	ft_isintf(const char *s)
{
	unsigned long long	num;

	if (!s)
		return (0);
	s += ft_issign(*s);
	s += ft_strspn(s, "0");
	if (ft_strlen(s) > 10)
		return (0);
	num = ft_atoll(s);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}