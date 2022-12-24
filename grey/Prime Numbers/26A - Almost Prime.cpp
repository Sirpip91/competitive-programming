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

vector<bool> sieve(int n)
{	
	//primes are index and value is t | f
	vector<bool> v(n+1, true);
	v[0] = false;
	v[1] = false;
	
	for(int  i= 2; i*i<=n; i++)
	{
		if(v[i])
		{
			for(int j = i*i; j<=n; j = j+i)
				v[j] = false;
		}
	}
	int count = 0;
	int aprime = 0;
	for(int j =2; j<=n; j++)
	{
		for(int i = 2; i<=n; i++)
		{
			if(v[i])//all primes
			{
				if(j%i == 0)
				{
					count++;
				}
			}
		}
		if(count == 2)
			aprime++;

		count = 0;
	}

	cout << aprime;

	return v;
}

int main()
{	
	int n;

	cin >> n;

	sieve(n);
	
	return 0;

}
