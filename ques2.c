#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter 4 numbers:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a>b && a>c && a>d)
	{
		printf("%d is the greatest\n",a );
	}
	if (b>a && b>c && b>d)
	{
		printf("%d is the greatest\n",b );
	}
	if (c>b && a<c && c>d)
	{
		printf("%d is the greatest\n",c );
	}
	if (d>b && d>c && a<d)
	{
		printf("%d is the greatest\n",d );
	}
	return 0;
}