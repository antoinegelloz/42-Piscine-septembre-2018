/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:27:14 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/04 11:29:43 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int pos;
	int integer;
	int sign;

	pos = 0;
	integer = 0;
	sign = 1;
	while (str[pos] < 33 && str[pos] != '-' && str[pos] != '+')
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] != '\0' && str[pos] >= '0' && str[pos] <= '9')
	{
		integer = integer * 10 + str[pos] - 48;
		pos++;
	}
	return (sign * integer);
}