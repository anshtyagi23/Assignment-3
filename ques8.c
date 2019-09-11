#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && a!=c)
	{
		printf("the different number is=%d\n",c );
	}
	if (a==c && a!=b)
	{
		printf("the different number is=%d\n",b );
	}
	if (c==b && c!=a)
	{
		printf("the different number is=%d\n",a );
	}
	return 0;
}