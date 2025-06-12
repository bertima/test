#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	char	*str;
	char    *str2;
	char    *str3;
	char    *str4;
	char    *str5;
	int fd = open (av[1], O_RDONLY);
	int fd2 = open (av[2], O_RDONLY);
	int fd3 = open (av[3], O_RDONLY);
	int fd4 = open (av[4], O_RDONLY);
	int fd5 = open (av[5], O_RDONLY);

	if (ac == 1)
	{
		printf("PB AV");
		return (1);
	}
	str = get_next_line(fd);
	while (str != NULL)
	{

		str2 = get_next_line(fd2);
		printf("%s#str2#\n", str2);
		str3 = get_next_line(fd3);
		printf("%s#str3#\n", str3);
		str4 = get_next_line(fd4);
		printf("%s#str4#\n", str4);
		str5 = get_next_line(fd5);
		printf("%s#str5#\n", str5);
		printf("%s#str1#\n", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
}
