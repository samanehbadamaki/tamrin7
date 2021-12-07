#include<iostream>
using namespace std;

int fib(int n);
int main()
{
	int i=0;
	//aqaze shomare jomalate donbale az 1 ast.
	cout<<"please enter the sentence number:";
	cin>>i;
	cout<<fib(i)<<"\n";
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
