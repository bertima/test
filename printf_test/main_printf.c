/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bertrmar <bertrmar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:34:40 by bertrmar          #+#    #+#             */
/*   Updated: 2025/04/30 08:52:06 by bertrmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("test sur c :\n");
        printf("%d\n", printf("%c\n", -1));
	printf("%d\n", ft_printf("%c\n", -1));
	printf("\n");

	printf("test sur s :\n");
	printf("%d\n", printf("%s\n", ""));
	printf("%d\n", ft_printf("%s\n", ""));
	printf("\n");

	printf("test sur p :\n");
	printf("%d\n", printf("%p\n", "stress"));
	printf("%d\n", ft_printf("%p\n", "stress"));
	
	printf("\n");

	printf("test sur d :\n");
	printf("%d\n", printf("%d\n", -21474836));
        printf("%d\n", ft_printf("%d\n", -21474836));
	printf("\n");

	printf("test sur i :\n");
	printf("%d\n", printf("%i\n", 0));
        printf("%d\n", ft_printf("%i\n", 0));
	printf("\n");

	printf("test sur u :\n");
        printf("%d\n", printf("%u\n", -12345));
        printf("%d\n", ft_printf("%u\n", -12345));
	printf("\n");

	printf("test sur x :\n");
	printf("%d\n", printf("%x\n", 123456789));
        printf("%d\n", ft_printf("%x\n", 123456789));
	printf("\n");

	printf("test sur X :\n");
        printf("%d\n", printf("%X\n", -1000));
        printf("%d\n", ft_printf("%X\n", -1000));
	printf("\n");

	printf("test sur pourcentage :\n");
        printf("%d\n", printf("%%chat%%%%%%%%%%%%%%%d\n", 12345));
        printf("%d\n", ft_printf("%%chat%%%%%%%%%%%%%%%d\n", 12345));
	printf("\n");

	printf("test ssssssssssuuuuuuuuuuuuuuppppppppeeeerrrrrrrrr :\n");
	printf("%d\n", printf("%c  %s %p  %d %i %u %x  %X ll %% \n", 'n', "coucou toi", "bb", 214748364, 4578547, -12345, 320000, -32012348));
	printf("%d\n", ft_printf("%c  %s %p  %d %i %u %x  %X ll %% \n", 'n', "coucou toi", "bb", 214748364, 4578547, -12345, 320000, -32012348));
	printf("%d\n", printf("%c %s %p %d %i %u %x %X %% \n  ", 'n', "bb", "pp", 214748364, 4578547, -12345, 320000, -32012348));
	printf("%d\n", ft_printf("%c %s %p %d %i %u %x %X %% \n  ", 'n', "bb", "pp", 214748364, 4578547, -12345, 320000, -32012348));
	printf("%d\n", printf("%% chattttttt %s %p %i %d %u %X %x %c \n", "bb", "pp", 214748364, 4578547, -12345, 320000, -32012348, ' '));
        printf("%d\n", ft_printf("%% chattttttt %s %p %i %d %u %X %x %c \n" , "bb", "pp", 214748364, 4578547, -12345, 320000, -32012348, ' '));
}

