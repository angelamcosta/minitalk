/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:02:54 by anlima            #+#    #+#             */
/*   Updated: 2022/11/29 16:39:39 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handle(int signal)
{
	ft_putstr("The handler was called\n");
}

int	main(void)
{
	int			pid;

	pid = getpid();
	signal(SIGINT, sig_handle);
	ft_putstr("The server is up and running. It's PID is: ");
	ft_putnbr(pid);
	ft_putstr("\n");
	while (1)
	{
		ft_putstr("Inside the main function\n");
		sleep(1);
	}
	return (0);
}