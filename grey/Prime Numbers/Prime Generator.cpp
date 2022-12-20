#include <bits/stdc++.h>

using namespace std;
//cool prime checker helper function
bool isPrime(int n)
{
	if(n<2) return false;
	if(n ==2) return true;
	if(n%2==0)return false;

	for(int i = 3; i*i <=n; i+=2)
	{
		if(n %i ==0) return false;
	}

	return true;
}
//prime number gen from low to high
int main()
{

	int t;

	cin >> t;

	while(t--)
	{
	
	int a, b;
	cin>> a >>b;

	for(int i = a; i<=b; i++)
	{
		if(isPrime(i))
		{
			cout << i << " " << endl;
		}
	}
	
	
	}	
	
	return 0;
}
