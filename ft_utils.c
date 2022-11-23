/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:12:44 by anlima            #+#    #+#             */
/*   Updated: 2022/11/23 11:14:52 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int fd, long nb)
{
	if (nb / 10 > 0)
		ft_putnbr_fd(fd, nb / 10);
	ft_putstr_fd(fd, nb % 10);
}

void	ft_putstr_fd(int fd, char *str)
{
	while(str && *str)
		write(fd, &str++, 1);
}
