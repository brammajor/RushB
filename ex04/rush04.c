/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:11:25 by sgluck            #+#    #+#             */
/*   Updated: 2022/10/23 13:28:57 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == (x -1))
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	print_middle(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('B');
		else if (i == (x -1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	print_last(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == (x -1))
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush(int x, int y)
{
	int	a;

	a = 0;
	while (a < y)
	{
		if (a == 0)
			print_first(x);
		else if (a == (y - 1))
			print_last(x);
		else
			print_middle(x);
		ft_putchar('\n');
		a++;
	}
}
