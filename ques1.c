#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			{
				printf("%d is the greatest\n",a );
			}	
	}
	if (b>c)
	{
		printf("%d is the greatest\n",b );
	}else{
		printf("%d is the greatest\n",c );
	}
	return 0;
}