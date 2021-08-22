#include "minitalk.h"

int main ()
{
	__pid_t p;

	p = getpid();
	printf("p = %d\n", p);
}