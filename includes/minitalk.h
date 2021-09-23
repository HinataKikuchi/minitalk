#include <unistd.h>
#include "libft.h"
#include <signal.h>
#include <stdint.h>

typedef struct s_message{
	char	c;
	size_t	s;
}	t_message;

void pid_print(void);
void	write_error(char *s);

