#include "minitalk.h"

static t_message msg;

void	pid_print(void)
{
	ft_putstr_fd("SERVER PID_(:3 <)_ : ", 1);
	ft_putnbr_fd(getpid(),1);
}

static void	sig_handler(int a)
{
	if (a == SIGUSR1)
		printf("recieved SIGUSR1\n");
	else if(a == SIGUSR2)
		printf("recieved SIGUSR2\n");
}

int	main(void)
{
	struct sigaction	sig;
	pid_print();
	sig.sa_handler = &sig_handler;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
}
