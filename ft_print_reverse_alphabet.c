/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-agu <cade-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:37:24 by cade-agu          #+#    #+#             */
/*   Updated: 2023/09/29 11:10:56 by cade-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)

{
	int	ascii;

	ascii = 'z';
	while (ascii >= 'a')
	{
		write (1, &ascii, 1);
		ascii = ascii - 1;
	}
}

/* int	main(void)
{
	ft_print_reverse_alphabet ();
	return (0);
} */
