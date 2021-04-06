/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:03:05 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 20:41:14 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int current_char;

	i = 0;
	while (str[i] != '\0')
	{
		current_char = str[i];
		if ((current_char < 'a' || current_char > 'z') &&
			(current_char < 'A' || current_char > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
