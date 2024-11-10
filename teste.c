#include "ft_printf.h"

int ft_printf(const char *format, ...);

int	main()
{
	char c = ',';
	char *s = NULL;

	ft_printf("a tua prima %c de 4\n", c);
	ft_printf("a tua prima %s de 4\n", s);
	printf("v--------------ORIGINAL-------------v\n");
	printf("a tua prima %s de 4 \n", s);
	printf("a tua prima %c de 4 \n", c);
}