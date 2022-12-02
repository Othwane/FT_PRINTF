/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:40:13 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:28:03 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pstr(char *str)
{
	int	retu;

	retu = 0;
	if (!str)
	{
		retu += write(1, "(null)", 6);
	}
	else
	{
		while (str[retu])
			write(1, &str[retu++], 1);
	}
	return (retu);
}
