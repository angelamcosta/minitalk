/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:02:51 by anlima            #+#    #+#             */
/*   Updated: 2022/12/06 16:16:17 by anlima           ###   ########.fr       */
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
	if (str[i] == '-')
		i++;
	while (i < len)
		nb = (nb * 10) + (str[i++] - 48);
	if (str[0] == '-')
		nb *= -1;
	return (nb);
}

void	ft_send_signal(char *pid, char *str)
{
	(void)(pid);
	(void)(str);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "Args error", 10);
	else
		ft_send_signal(argv[1], argv[2]);
	return (0);
}
