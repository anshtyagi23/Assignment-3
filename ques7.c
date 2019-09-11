#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d;
	printf("enter the values of a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
		printf("\nvalue of roots are %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	else if(d==0)
		printf("\nvalue of root %f",-b/(2*a));
	else{
		printf("\n roots are imaginary");
		
		printf("\n roots are=%f + i%f and %f - i%f",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/2*a);
	}
	return 0;

}