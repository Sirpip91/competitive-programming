#include <bits/stdc++.h>

using namespace std;
//prime number gen from low to high
int main()
{
	//we have low high as well as prime checker
	int low, high, t;
	bool isprime = false;

	cin >> t;

	while(t--)
	{
		cin >> low >> high;
		//start at low end at high
		for(int i = low; i<=high; i++)
		{
			//set prime to true
			isprime = true;
			//go through all sqrt of i starting at 2
			for(int j = 2; j<=sqrt(i); j++)
			{
				//if i mod j is 0 this means its not prime
				if(i % j == 0)
				{
					isprime = false;
					break;
				}
			}
			//
			if(isprime == true && i!=1)
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}
