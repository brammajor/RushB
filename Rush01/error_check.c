/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:22:52 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/29 18:55:45 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_len31(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i != 31)
		return (1);
	return 0;
}

int	check_digit(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if (str[i] < 49 || str[i] > 52) //check digits are 1-4
			return (1);
		i += 2;
	}
	return (0);
}

int	check_space(char *str)
{
	int	i;
	i = 1;
	while(str[i])
	{
		if (str[i] != 32); //check every odd position = space
			return (1);
		i += 2;
	}
	return (0);
}

int	check_halves(char *str)

	int	i;
	int	j;

	i = 0;
	j = 16;
	while (i < 15)
	{
		if (str[i] != str[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}

int	check_pos4(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '4')
	{
		if (i = 6) 
			return (1);
		i++;
	}
	if (i == 0)

}

