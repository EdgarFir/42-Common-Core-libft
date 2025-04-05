#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void)
{	
	// isalpha
	printf("Is alpha 'a'? %i\n", ft_isalpha('a'));
	printf("Is alpha '1'? %i\n", ft_isalpha('1'));
	printf("\n");

	// isdigit
	printf("Is digit 'a'? %i\n", ft_isdigit('a'));
	printf("Is digit '1'? %i\n", ft_isdigit('1'));
	printf("\n");

	// isalnum
	printf("Is alnum 'a'? %i\n", ft_isalnum('a'));
	printf("Is alnum '1'? %i\n", ft_isalnum('1'));
	printf("Is alnum '?'? %i\n", ft_isalnum('?'));
	printf("\n");

	// isascii
	printf("Is ascii 'a'? %i\n", ft_isascii('a'));
	printf("Is ascii '1'? %i\n", ft_isascii('1'));
	printf("Is ascii 128? %i\n", ft_isascii(128));
	printf("\n");

	// isprint
	printf("Is printable 'a'? %i\n", ft_isprint('a'));
	printf("Is printable 'BEL'? %i\n", ft_isprint('\a'));
	printf("\n");

	// strlen
	printf("LENGHT: \"42\" ? %li\n", ft_strlen("42"));
	printf("LENGHT: \"\" ? %li\n", ft_strlen(""));
	printf("\n");

	// memset
	char s[9] = "123456789";
	printf("FT_MEMSET: \"123456789\" TO %s\n", (char *)ft_memset(s, '1', 4));
	printf("MEMSET: \"111156789\" TO %s\n", (char *)memset(s, '2', 4));
	printf("\n");

	// bzero
	char s1[9] = "123456789";
	ft_bzero(s1 + 7, 2);
	printf("FT_BZERO: \"123456789\" TO %s\n", s1);
	bzero(s1 + 3, 4);
	printf("BZERO: \"1234556789\" TO %s\n", s1);
	printf("\n");

	// memcpy
	char dest[20] = "Texto antigo";
    char src[] = "Novo";
	ft_memcpy(dest, src, 4);
	//memcpy(dest, src, 4);
	printf("%s\n", dest);
	printf("\n");

	// memmove
	char src1[50] = "ABC";
	char dest1[4] = "ABCD";
	ft_memmove(dest1 + 1, src1, 1);
	printf("DEST: %s\n", dest1);

	// strclpy
	char src2[10] = "12345";
	char dest2[10];
	ft_strlcpy(dest2, src2, 6);
	printf("%s\n", dest2);
	printf("\n");

	// strlcat
	char src3[10] = "12345";
	char dest3[11] = "12345";
	ft_strlcat(dest3, src3, 7);
	printf("%s\n", dest3);
	printf("\n");

	// toupper
	printf("%c ", ft_toupper('c'));
	printf("%c", ft_toupper('?'));
	printf("\n");

	// tolower
	printf("%c ", ft_tolower('C'));
	printf("%c", ft_tolower('?'));
	printf("\n\n");

	// strchr
	printf("STRCHR: %s\n", ft_strchr("tripouille", 't' + 256));
	printf("\n");

	// strrchr
	printf("%s\n", ft_strrchr("ABCABBBB", 'B'));
	printf("%s\n", ft_strrchr("tripouille", 't'));
	printf("\n");

	// strncmp
	printf("TEST: %i\n", ft_strncmp("1234", "1235", 3));
	printf("%i\n", ft_strncmp("ABC", "ACB", 2));
	printf("%i\n", ft_strncmp("ACB", "ABC", 2));
	printf("\n");

	// memchr
	printf("%s\n", (char *)ft_memchr("EXEMPLO", 'X', 4));
	printf("%s\n", (char *)ft_memchr("EXEMPLO", 'X', 20));
	//printf("%s\n", (char *)ft_memchr("EXEMPLO", 'U', 2));
	printf("\n");

	// memcmp
	printf("%i\n", ft_memcmp("ABC", "A", 1));
	printf("%i\n", ft_memcmp("ABCACB", "ACB", 6));
	printf("%i\n", ft_memcmp("ACB", "ABC", 0));
	char s2[] = {0, 0, 42, 0};
	char s3[] = {0, 0, 42, 0};
	printf("MEMCMP: %i\n", ft_memcmp(s2, s3, 4));
	printf("\n");

	// strnstr
	printf("%s\n", (char *)ft_strnstr("ABC", "A", 1));
	printf("%s\n", (char *)ft_strnstr("ABCACC", "ACC", 6));
	printf("%s\n", (char *)ft_strnstr("ACBXLALS", "", 2));
	printf("\n");

	// atoi
	#include <limits.h>
	printf("%i\n", ft_atoi("42"));
	printf("%i\n", ft_atoi("0"));
	printf("%i\n", ft_atoi("-10"));
	printf("%i\n", ft_atoi("2147483647"));
	printf("%i\n", ft_atoi("-2147483648"));
	printf("\n");

	// calloc
	char *ss = ft_calloc(0, sizeof(char));
	free(ss);

	// strdup
	char *sss = "ABCBABC";
	char *p = ft_strdup(sss);
	printf("%s\n", p);
}