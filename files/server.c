/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:02:54 by anlima            #+#    #+#             */
/*   Updated: 2022/12/06 15:46:27 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
	write(1, "The handler was called by the signal: ", 38);
	ft_putnbr(signal);
}

int	main(void)
{
	struct sigaction	sigact;

	sigact.sa_handler = &sig_handle;
	sigact.sa_flags = SA_RESTART;
	sigaction(SIGINT, &sigact, 0);
	write(1, "The server is up and running. It's PID is: ", 43);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
		sleep(1);
	return (0);
}
