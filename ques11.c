#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	printf("enter 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if ((a<b && b<c) || (c<b && b<a))
	{
		printf("%d\n",b );
	}
	if ((b<a && a<c) || (c<a && a<b))
	{
		printf("%d\n",a );
	}
	if ((a<c && c<b) || (b<c && c<a))
	{
		printf("%d\n",c );
	}
	return 0;
}