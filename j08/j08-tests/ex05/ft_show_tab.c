/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:53:56 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/17 15:53:57 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb <= -10)
			ft_putnbr(nb / -10);
		ft_putchar(-(nb % 10) + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

void    ft_show_tab(struct s_stock_par *par)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (par && par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        j = 0;
        while (par[i].tab[j] != '\0')
        {
            ft_putstr(par[i].tab[j]);
            ft_putchar('\n');
            j++;
        }
        i++;
    }
}