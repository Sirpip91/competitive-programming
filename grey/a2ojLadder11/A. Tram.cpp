#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	

	int n;
	cin >> n;
	int off[n];
	int on[n];
	
	int max= 0;
	int curr = 0;


	for(int i = 0; i<n; i++)
	{
		cin >> off[i];
		cin >> on[i];
	}

	for(int i = 0; i<n; i++)
	{
		curr -= off[i];
		curr += on[i];

		if(max<curr)
			max = curr;
	}


	cout << max << endl;

	return 0;
 
}

