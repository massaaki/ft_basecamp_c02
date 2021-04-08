/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:02:48 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/07 20:36:02 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int current_letter;

	i = 0;
	while (str[i] != '\0')
	{
		current_letter = str[i];
		if (current_letter < 'a' || current_letter > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
