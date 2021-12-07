#include<iostream>
using namespace std;

int fib(int n);
int main()
{
	for(int i = 1 ; fib(i)<1000 ; i++)
	{
		cout<<fib(i)<<" "; 
	} 
	return 0;
}
int fib(int n)
{
	if(n==1 )
	return (0);
	if(n==2 )
	return (1);
	
	else
	return fib(n-1)+fib(n-2);
}
