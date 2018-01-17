/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:46:54 by lchaillo          #+#    #+#             */
/*   Updated: 2017/11/07 10:55:01 by lchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

int		main(int argc, char **argv)
{
	int		x;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			ft_putstr(argv[x]);
			ft_putchar('\n');
			++x;
		}
	}
	else
		return (0);
}
