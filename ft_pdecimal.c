/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pdecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 04:31:41 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:13:59 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pdecimal(int num)
{
	int			retu;
	long long	n;

	retu = 0;
	n = num;
	if (n < 0)
	{
		retu += write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
		retu += ft_pchar(n + 48);
	if (n >= 10)
	{
		retu += ft_pdecimal(n / 10);
		retu += ft_pdecimal(n % 10);
	}
	return (retu);
}
