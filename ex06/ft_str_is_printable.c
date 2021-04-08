/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:02:48 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/08 19:02:33 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int current_letter;

	i = 0;
	while (str[i] != '\0')
	{
		current_letter = str[i];
		if (current_letter < 32 && current_letter != 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
