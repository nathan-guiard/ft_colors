#include <stdio.h>
#include "print_layout.h"
#include <strings.h>

#include <stdlib.h>

void	loading_bar(int progression);

int main()
{
	set_layout_printf(C_RED, C_BLUE, C_BOLD);
	printf("Bonjour");
	return (0);
}
