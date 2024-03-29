/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/11 16:10:15 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*odest;
	char	*osrc;
	int		bytes_left;
	int		dlen;

	odest = dest;
	osrc = src;
	bytes_left = size;
	while (bytes_left-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - odest;
	bytes_left = size - dlen;
	if (bytes_left-- == 0)
		return (dlen + strlen(src));
	while (*src != '\0')
	{
		if (bytes_left != 0)
		{
			*dest++ = *src;
			bytes_left--;
		}
		src++;
	}
	*dest = '\0';
	return (dlen + (src - osrc));
}
