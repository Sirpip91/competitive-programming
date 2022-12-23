#include <bits/stdc++.h>

using namespace std;
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

int main()
{
//all we have to check if m is prime
//and if there are no prime numbers between n -> m
	int n , m;

	cin >> n >> m;

	if(!isPrime(m))
	{
		cout << "NO" << endl;
		return 0;
	}
	
	for(int i =n+1; i<=m;i++)
		{
			if(isPrime(i))
			{
				if(i == m)
				{
					cout << "YES";
			   		return 0;
				}
				else
				{
				cout << "NO";
			   	return 0;
				}
			}	
		}


	return 0;
}
