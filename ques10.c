#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c,d,x;
	int count=0;
	printf("Enter 5 numbers:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	if (x==a)
	{
		count++;
	}
	if (x==b)
	{
		count++;
	}
	if (x==c)
	{
		count++;
	}
	if (x==d)
	{
		count++;
	}
	printf("%d\n",count );
	return 0;
}