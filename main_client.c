#include "minitalk.h"

void write_error(char *s)
{
	ft_putendl_fd(s, 1);
	exit(0);
}

void	pid_handler(char *s_pid, char *s)
{
	int	pid;
	int	i;

	pid = ft_atoi(s_pid);
	i = 0;
	while(i <= ft_strlen(s))
	{
		i++;
	}


}

int main(int argc, char **argv)
{
	if (argc != 3)
		write_error("COMMAND: ./client [server-pid] [message]\n");
	signal(SIGUSR1, &write_error);
	
}