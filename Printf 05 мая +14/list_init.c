#include "printf.h"

t_list2	list_init (void)
{
	t_list2  flags;

	flags.minus = 0;
	flags.flag = 0;
	flags.weigdt = 5;
	flags.dot = 2;
	flags.len = 5;
	flags.type = 8;
	return (flags);
}

// int	main()
// {
// 	t_list2 flags = list_init();
// 	int a = (int)flags.flag;
// 	int b = (int)flags.weigdt;
// 	int c = (int)flags.dot;
// 	int d = (int)flags.len;
// 	int e = (int)flags.type;
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// 	printf("%d", d);
// 	printf("%d", e);
// }