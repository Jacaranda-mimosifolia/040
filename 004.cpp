#include<stdio.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a>b)?b:a
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max=%d",max(a,b));
	printf("min=%d",min(a,b));
	return 0;
}
