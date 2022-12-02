/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:29:59 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:30:28 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_which_type(va_list args, char x)
{
	int	retu;

	retu = 0;
	if (x == 99)
		retu += ft_pchar(va_arg(args, int));
	else if (x == 115)
		retu += ft_pstr(va_arg(args, char *));
	else if (x == 112)
	{
		retu += ft_pstr("0x");
		retu += ft_pptr(va_arg(args, unsigned long int));
	}
	else if (x == 100 || x == 105)
		retu += ft_pdecimal(va_arg(args, int));
	else if (x == 117)
		retu += ft_punsigned(va_arg(args, unsigned int));
	else if (x == 120)
		retu += ft_phexa_l(va_arg(args, unsigned int));
	else if (x == 88)
		retu += ft_phexa_u(va_arg(args, unsigned int));
	else
		retu += ft_pchar('%');
	return (retu);
}
