#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,p,q,r,dist,len;
	printf("enter the constt for ax+by+c=0:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("coordinates for the centre of circle:\n");
	scanf("%d %d",&p,&q);
	printf("enter the radius:\n");
	scanf("%d",&r);
	dist=sqrt((a*p+b*q+c)/((a*a)+(b*b)));
	if(dist<r){
		len=sqrt((r*r)-(dist*dist));
		printf("Area=%f\n",len*dist);
	}else{
		printf("no intersection");
	}
		
	
	return 0;
}
