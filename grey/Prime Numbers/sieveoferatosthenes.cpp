#include <bits/stdc++.h>


using namespace std;
//sieve eratosthenes O(n log log n)
vector<bool> sieve(int n)
{
	vector<bool> sieve(n+1, true);
	sieve[0] = false;
	sieve[1] = false;
	
	for(int i = 2; i * i <=n; i=i+1)
	{
		//if i a prime
		if(sieve[i] == true)
		{
			//mark the multiples as not prime
			for(int j = i*i; j<=n; j = j+i)
			{
				sieve[j] = false;
			}
		}
	}

	return sieve;
}

int main()
{
	vector<bool> v = sieve(37);
	for(int i =0; i<v.size(); i++)
	{
		if(v[i] == true)
		{
			cout << i << ' ' << endl;
		}
	}

	return 0;
}
