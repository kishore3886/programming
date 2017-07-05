#include<stdio.h>

long factorial(int);
int main2()
{
	int n;
	long (*ptr)(int);
     ptr=&factorial;
	//ptr=&area;
	printf("Enter the number");
scanf("%d",&n);
printf("Entered number is %d", n);
long f= factorial(n);
long f2= ptr(n);
long area= ptr(n);	
printf("factorial is %ld",f);

printf("factorial calculate with pointer is %ld\n",f2);
}

long factorial(int a)
{

 if (a==0)
	return 1;
	
else
   return (a*factorial(a-1));

}

long area(int a)
{
  return a*a;
}
