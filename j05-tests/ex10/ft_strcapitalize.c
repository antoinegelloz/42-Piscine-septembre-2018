/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/05 16:08:29 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char  *ft_strcapitalize(char *str)
{
  int i;
  
  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    i++;
  }
  i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] -= 32;
  while (str[i] != '\0')
  {
    if ((str[i] >= 'a' && str[i] <= 'z') 
 && !((str[i-1] >= '0' && str[i-1] <= '9') 
   || (str[i-1] >= 'A' && str[i-1] <= 'Z') 
   || (str[i-1] >= 'a' && str[i-1] <= 'z')))
        str[i] -= 32;
    i++;
  }
  return (str);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("%s\n", ft_strcapitalize(av[1]));
}