#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>

char	ft_add_index(unsigned int n, char c)
{
	c += n;
	return (c);
}

void	ft_add_str_index(unsigned int n, char *c)
{
	*c += n;
}

int main(void)
{	

	// strtrim
	char *s4 = ft_strtrim("abcdba", "acb");
	printf("STRIM: %s\n", s4);
	free(s4);


	// split
	printf("SPLIT: \n");
	//char s[] = "ABC+ABC+ABC";
	char **arr = ft_split("     ", ' ');
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);

	// itoa
	printf("ITOA: %s\n", ft_itoa(42));
	printf("ITOA: %s\n", ft_itoa(-42));
	printf("ITOA: %s\n", ft_itoa(INT_MAX));
	printf("ITOA: %s\n", ft_itoa(INT_MIN));
	printf("ITOA: %s\n", ft_itoa(0));

	// strmapi
	char s[] = "1234";
	printf("STRMAPI: %s\n", ft_strmapi(s, &ft_add_index));

	// striteri
	char si[] = "1234";
	ft_striteri(si, &ft_add_str_index);
	printf("ITERI: %s\n", si);

	// putchar_fd
	// putstr_fd
	// putend_fd
	// putnbr_fd
	int fd = open("test.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd)
	{
		ft_putchar_fd('W', fd);
		ft_putendl_fd("elcome to", fd);
		ft_putnbr_fd(10, fd);
		ft_putchar_fd('\n', fd);
		ft_putnbr_fd(INT_MIN, fd);
		ft_putchar_fd('\n', fd);
		ft_putnbr_fd(INT_MAX, fd);
	}
	lseek(fd, 0, SEEK_SET);
	char buff[1];
	while (read(fd, buff, 1))
	{
		write(1, buff, 1);
	}
	close(fd);
}