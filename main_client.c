#include "minitalk.h"

/*
**SEE THIS! https://github.com/mznmk/minitalk/wiki/what_to_do
*/

void	write_error(char *s)
{
	ft_putendl_fd(s, 1);
	exit(0);
}

static void	pid_handler(char *s_pid, char *s)
{
	unsigned int	pid;
	int		i;
	int		j;

	pid = ft_atoi(s_pid);
	i = 0;
	j = 0;
	while (s[j]!='\0')
	{
		while (i < 8)
		{
			if (kill(pid, (int[]){SIGUSR1,SIGUSR2}[(s[j] >> i) & 1]) == -1)
				write_error("BAD PID( !_!)");
			usleep(600);
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write_error("COMMAND( !_!): ./client [server-pid] [message]");
	pid_handler(argv[1], argv[2]);
	return (0);
}
