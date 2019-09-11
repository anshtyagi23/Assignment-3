#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	printf("Enter the sides of triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	if ((a*a)==(b*b)+(c*c))
	{
		printf("angle A is 90\n");
	}else{
		printf("angle A is not 90\n");
	}
	return 0;
}