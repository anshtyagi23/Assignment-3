#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,m;
	printf("enter the constt for ax+by+c:\n");
	scanf("%f %f",&a,&b);
	m=-a/b;
	printf("slope=%f\n",m );
	if (b==0)
	{
		printf("Vertical\n");
	}else{
		printf("Not vertical\n");
	}
	return 0;

}