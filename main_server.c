#include "minitalk.h"

static t_message msg;

void	pid_print(void)
{
	char	*pid_s;

	pid_s = ft_itoa(getpid());
	write(1, "SERVER PID_(:3 <)_ : ", 6);
	ft_putendl_fd(pid_s, 1);
	free(pid_s);
}

static void	sig2bit(int b)
{
	// msg.c += ();
}

int	main(void)
{
	pid_print();
	msg.c = 0;
	msg.s = 0;
	while (1)
	{
		signal(SIGUSR2, sig2bit);
		signal(SIGUSR1, sig2bit);
		pause();
	}
}
