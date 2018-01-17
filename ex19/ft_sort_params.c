/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:56:51 by lchaillo          #+#    #+#             */
/*   Updated: 2017/11/07 14:44:25 by lchaillo         ###   ########.fr       */
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

void	ft_display(char **s1)
{
	int		i;

	i = 1;
	while (s1[i] != '\0')
	{
		ft_putstr(s1[i]);
		ft_putchar('\n');
		++i;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s1[x] == s2[y] && s1[x] != '\0' && s2[y] != '\0')
	{
		++x;
		++y;
	}
	return (s1[x] - s2[y]);
}

int		main(int argc, char **argv)
{
	int		x;
	char	*mem;

	x = 2;
	if (argc > 1)
	{
		while (x < argc)
		{
			if (ft_strcmp(argv[x - 1], argv[x]) > 0)
			{
				mem = argv[x - 1];
				argv[x - 1] = argv[x];
				argv[x] = mem;
				x = 1;
			}
			++x;
		}
		ft_display(argv);
	}
	return (0);
}
