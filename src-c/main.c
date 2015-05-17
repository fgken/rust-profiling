#include <stdio.h>
#include <sys/time.h>

void print_time(struct timeval start, struct timeval finish)
{
	long t = finish.tv_sec - start.tv_sec;
	t *= 1000*1000;
	t += finish.tv_usec - start.tv_usec;
	printf("%ld us\n", t);
}

int main()
{
	struct timeval start, finish;

	puts("--- Start ---");

	gettimeofday(&start, NULL);
	printf("Hello\n");
	gettimeofday(&finish, NULL);

	print_time(start, finish);

	puts("--- Finish ---");
}
