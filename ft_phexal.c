/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:59:48 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:14:38 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_phexa_l(unsigned int num)
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
		retu += ft_phexa_l(num / 16);
		retu += ft_phexa_l(num % 16);
	}
	return (retu);
}
