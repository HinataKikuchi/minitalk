/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: HINATA <HINATA@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:35:03 by HINATA            #+#    #+#             */
/*   Updated: 2021/10/01 11:03:30 by HINATA           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	pid_print(void)
{
	ft_putstr_fd("\e[32mSERVER PID_(:3 <)_ : \e[m", 1);
	ft_putnbr_fd(getpid(), 1);
}

static void	sig_handler(int a)
{
	static unsigned char	ch;
	static unsigned int		bit_n;

	if (!(a == SIGUSR1 || a == SIGUSR2))
		write(1, "\e[31mBAD SIGNAL( !_!)\e[m", 16);
	if (a == SIGUSR2)
		ch |= (1 << bit_n);
	if (bit_n == 7)
	{
		ft_putchar_fd(ch, 1);
		bit_n = 0;
		ch = 0;
	}
	else
		bit_n++;
}

int	main(void)
{
	struct sigaction	sig;

	pid_print();
	while (1)
	{
		sig.sa_handler = &sig_handler;
		sigaction(SIGUSR1, &sig, NULL);
		sigaction(SIGUSR2, &sig, NULL);
		pause();
	}
	return (0);
}
