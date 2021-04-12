/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:21:20 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/12 13:18:43 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				cont;

	i = 0;
	while (src[i] != '\0' && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	return (cont);
}
