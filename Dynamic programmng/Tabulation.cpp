#include<iostream>
using namespace std;
int fib[100];
int fibnocci(int n)
{
	fib[0]=0,
	fib[1]=1;
	for(int i=2;i<=n;i++)
	   fib[i]=fib[i-1]+fib[i-2];
	return fib[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<fibnocci(n)<<endl;
	return 0;
	
}