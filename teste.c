#include "ft_printf.h"

int ft_printf(const char *format, ...);

int	main()
{
	char c = ',';
	int a = 4;
	char *s = "e incrivel";

	ft_printf("a tua prima %c de %i\n", c, a);
	ft_printf("a tua prima %s de %i\n", s, a);
	printf("v--------------ORIGINAL-------------v\n");
	printf("a tua prima %s de %i \n", s, a);
	printf("a tua prima %c de %i \n", c, a);
}
