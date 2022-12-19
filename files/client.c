/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:02:51 by anlima            #+#    #+#             */
/*   Updated: 2022/12/19 11:39:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	long	nb;
	int		len;
	int		i;

	len = 0;
	while (str && str[len])
		len++;
	i = 0;
	nb = 0;
	while (i < len)
		nb = (nb * 10) + (str[i++] - 48);
	return (nb);
}

void	ft_send_signal(int pid, char c)
{
	unsigned int	nb[8];
	int				n;
	int				i;

	n = c;
	i = 8;
	while (n > 0 && i > 0)
	{
		nb[--i] = n % 2;
		n /= 2;
	}
	while (i > 0)
		nb[--i] = 0;
	while (i < 8)
	{
		if (nb[i] == 0)
			kill(pid, SIGUSR1);
		else if (nb[i] == 1)
			kill(pid, SIGUSR2);
		usleep(50);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
		write(1, "Args error", 10);
	else
	{
		pid = ft_atoi(argv[1]);
		while (argv[2] && *argv[2])
			ft_send_signal(pid, *argv[2]++);
		ft_send_signal(pid, '\n');
	}
	return (0);
}
