#include "minitalk.h"

void pid_print(void)
{
	char *pid_s;

	pid_s = ft_itoa(getpid());
	write(1, "pid = ", 6);
	ft_putendl_fd(pid_s, 1);
	free(pid_s);
}

// #ifndef TEST
// int main ()
// {
// 	pid_print();
// }
// #endif