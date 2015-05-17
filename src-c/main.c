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
	int i;

	puts("--- Start ---");

	{
		char d[] = "Hello! My name is hoge.";
		char s[] = "hoge";
		gettimeofday(&start, NULL);
	
		for (i=0; i<100; i++){
			char a[32];
			int i;
			memcpy(a, d, sizeof(d));

			for(i=0; i<sizeof(d); i++){
				if(a[i] == ' '){
					a[i] = '\0';
				}
			}
		}
	}
	
	gettimeofday(&finish, NULL);

	print_time(start, finish);

	puts("--- Finish ---");
}
