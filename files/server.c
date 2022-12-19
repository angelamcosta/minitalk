/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:02:54 by anlima            #+#    #+#             */
/*   Updated: 2022/12/19 10:57:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static unsigned int	g_i;

void	ft_putnbr(long nbr)
{
	char	temp;

	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	temp = nbr % 10 + '0';
	write(1, &temp, 1);
}

void	sig_handle(int signal)
{
	unsigned int	nb[8];
	unsigned int	n;
	int				i;

	if (signal == SIGUSR1)
		nb[g_i] = 0;
	else if (signal == SIGUSR2)
		nb[g_i] = 1;
	if (g_i == 7)
	{
		n = 0;
		i = 0;
		while (i < 8)
			n = n * 2 + (nb[i++]);
		write(1, &n, 1);
		g_i = 0;
	}
	else
		g_i++;
}

int	main(void)
{
	struct sigaction	sigact;

	sigact.sa_handler = &sig_handle;
	sigact.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sigact, 0);
	sigaction(SIGUSR2, &sigact, 0);
	write(1, "\e[4:3mWelcome to anlima's minitalk project!\e[4:0m\n", 51);
	write(1, "The server is up and running. It's PID is: ", 43);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
		usleep(100);
	return (0);
}
