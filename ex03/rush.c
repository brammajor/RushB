/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpodolsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:08:11 by mpodolsk          #+#    #+#             */
/*   Updated: 2022/10/23 15:52:21 by mpodolsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	width_1(int x, int y)
{
	char	a;
	char	b;
	int	t;
	char	c;
	char	p;

	a = 'A';
	b = 'B';
	c = 'C';
	t = x-2;
	p = '\n';
	ft_putchar(a);
	while (t>0)
	{
		put_char(b);
		t--;
	}
	if (t==0)
	{
		put_char(c);
	}
	put_char(p);
}

void	width_2(int x, int y, char p, char t) 
{
	char	b;
	char	f;

	b = 'B';
	f = ' ';
	
	ft_putchar(b);
	while (t>0)
	{
		put_char(f);
		t--;
	}
	if (t==0)
	{
		put_char(b);
	}
	put_char(p);
}
