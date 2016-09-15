#include <stdio.h>
#include <sysconf.h>

int main()
{
	printf("IOV_MAX = %ld\n", sysconf(_SC_IOV_MAX));
	return 0;
}
