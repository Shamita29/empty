#include<stdio.h>
#include<time.h>
#include<errno.h>
int main()
{
	time_t T =time(NULL);
	struct tm tm =*localtime(&T);
//	printf("%d\n", tm);
	printf("system date is:%02d/%02d/%04d\n",tm.tm_mday,tm.tm_mon+1 ,tm.tm_year +1900);
	printf("system time is :%02d:%02d:%02d\n",tm.tm_hour,tm.tm_min,tm.tm_sec);

}
