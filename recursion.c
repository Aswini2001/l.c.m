#include<stdio.h>
 
int main()
{
	int i,j, result=0;
	printf("input the first number: ");
	scanf("%d",&i);
	printf("input the second number: ");
	scanf("%d",&j);
result=lcm(i,j);
	printf ("THE L.C.M OF %d and %d is %d",i,j, result);
}
int lcm (int a,int b)
{
 static int m=0;
 m++;
 if ( m%a==0 &&  m%b==0)
 return m;
 else
 return (lcm(a,b));
}
