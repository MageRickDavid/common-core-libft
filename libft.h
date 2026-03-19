/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:24:00 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/19 10:05:49 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			*ft_memset(void *s, int c, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			ft_putstr(char const *str);
void			ft_putnbr(int n);
void			ft_bzero(void *s, unsigned int n);
void			ft_putchar(char c);
void			ft_strclr(char *s);
void            *ft_memccpy(void *dest, const void *src, int c, unsigned int n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
unsigned long	ft_strlen(const char *str);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, int n);

#endif