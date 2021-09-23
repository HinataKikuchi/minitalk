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

static void	recieve_sig1(int b)
{
	// msg.c += ();
	printf("SIGUSR1\n");
	// exit(0);
}

static void	recieve_sig2(int a)
{
	printf("SIGUSR2\n");
	// exit(0);
}

int	main(void)
{
	struct sigaction	sig1;
	struct sigaction	sig2;
	pid_print();
	msg.c = 0;
	msg.s = 0;
	sig1.sa_handler = &recieve_sig1;
	sig2.sa_handler = &recieve_sig2;
	sigaction(SIGUSR1, &sig1, NULL);
	sigaction(SIGUSR2, &sig2, NULL);
	// if (sigaction(SIGUSR1, &sig1, NULL) == -1)
	// 	write_error("( !_!) FAILED SIGACTION1");
	// if (sigaction(SIGUSR2, &sig2, NULL))
	// 	write_error("( !_!) FAILED SIGACTION2");
	while (1)
		pause();
}
