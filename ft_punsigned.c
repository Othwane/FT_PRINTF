/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 04:43:41 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:28:36 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_punsigned(unsigned int num)
{
	int	retu;

	retu = 0;
	if (num < 10)
		retu += ft_pchar(num + 48);
	if (num >= 10)
	{
		retu += ft_punsigned(num / 10);
		retu += ft_punsigned(num % 10);
	}
	return (retu);
}
