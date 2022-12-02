/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 02:58:16 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/03 00:26:58 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *specif, ...);
int		ft_pchar(int c);
int		ft_pstr(char *str);
int		ft_pptr(unsigned long num);
int		ft_pdecimal(int num);
int		ft_punsigned(unsigned int num);
int		ft_phexa_l(unsigned int num);
int		ft_phexa_u(unsigned int num);
char	*ft_strchr(const char *str, int c);
int		ft_which_type(va_list args, char x);

#endif
