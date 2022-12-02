/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 02:57:48 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:16:37 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *specif, ...)
{
	int		i;
	int		retu;
	va_list	args;

	va_start(args, specif);
	i = 0;
	retu = 0;
	while (specif[i])
	{
		if (specif[i] == 37)
		{
			i++;
			if (ft_strchr("cspdiuxX%", specif[i]))
			{
				retu += ft_which_type(args, specif[i]);
			}
		}	
		else
			retu += ft_pchar(specif[i]);
		i++;
	}
	return (retu);
}
