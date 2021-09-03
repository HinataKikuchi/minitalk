#include "minitalk.h"

/*
**
*/

void write_error(char *s)
{
	ft_putendl_fd(s, 1);
	exit(0);
}

void	pid_handler(char *s_pid, char *s)
{
	int	pid;
	int	i;
	uint8_t	counter;

	pid = ft_atoi(s_pid);
	i = 0;
	/*1<<6 = 1000000(2) = 64(10)*/
	counter = 1 << 6;
	while(i <= ft_strlen(s))
	{
		while()
		{

		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
		write_error("COMMAND( !_!): ./client [server-pid] [message]\n");
	ft_putendl_fd("Success :-)\n", 1);
	pid_handler(argv[1], argv[2]);
	return (0);
}