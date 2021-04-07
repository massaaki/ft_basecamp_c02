/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:24:48 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/07 18:42:56 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** a=97
** A=65
** a-A=32
*/

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + ('A' - 'a');
		}
		i++;
	}

	return (str);
}