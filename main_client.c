#include "minitalk.h"

/*
**
*/

void	write_error(char *s)
{
	ft_putendl_fd(s, 1);
	exit(0);
}

void	pid_handler(char *s_pid, char *s)
{
	unsigned int	pid;
	uint8_t		counter;

	pid = ft_atoi(s_pid);
	counter = 1 << 6;
	while (*s)
	{
		while (counter)
		{
			if (*s & counter)
			{
				if (kill(pid, SIGUSR1) == -1)
					write_error("BAD PID( !_!)\n");
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					write_error("BAD PID( !_!)\n");
			}
			counter >>= 1;
			usleep(600);
		}
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write_error("COMMAND( !_!): ./client [server-pid] [message]\n");
	ft_putendl_fd("Success :-)\n", 1);
	pid_handler(argv[1], argv[2]);
	return (0);
}
