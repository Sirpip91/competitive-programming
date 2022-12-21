#include <bits/stdc++.h>

using namespace std;


//A. Absolute Maximization
// This involves Bitwise manipulation
// Also tagged with bitmasks
// I need to learn this stuff....
int main()
{
	
	int t;
	cin >> t;

	while(t--)
		{
			int n;
			cin >> n;
			int arr[n];
			int max = 0;
			
			for(int i =0; i<n; i++)
			{
				cin >> arr[i];
				max = (max |arr[i]); // | is the bitwise OR
				if(i>0)
					arr[i] = arr[i]&arr[i-1];
			}
			cout << max - arr[n-1] << endl;
		}
	return 0;
}
