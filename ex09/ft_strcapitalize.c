/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:52:26 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/12 13:20:16 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if (!first_letter && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] - ('A' - 'a');
		if (first_letter)
		{
			first_letter = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + ('A' - 'a');
		}
		if ((str[i] < 'a' || str[i] > 'z') &&
			(str[i] < 'A' || str[i] > 'Z'))
			first_letter = 1;
		i++;
	}
	return (str);
}
