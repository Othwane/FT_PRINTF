/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 04:04:56 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:15:11 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pptr(unsigned long num)
{
	int	retu;

	retu = 0;
	if (num < 16)
	{
		if (num < 10)
			retu += ft_pchar(num + 48);
		else
			retu += ft_pchar(num + 87);
	}
	if (num >= 16)
	{
		retu += ft_pptr(num / 16);
		retu += ft_pptr(num % 16);
	}
	return (retu);
}
