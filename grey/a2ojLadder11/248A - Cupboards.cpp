#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	

	int n;
	cin >> n;

	int left[n];
	int right[n];


	for(int i =0; i<n; i++)
	{
		int tp1, tp2;
		cin >> tp1 >> tp2;

		left[i] = tp1;
		right[i] = tp2;


	}
	//number of 1s
	int l =0, r = 0;	
	for(int i =0; i<n;i++)
	{
		if(left[i] == 1)
			l++;
		if(right[i] == 1)
			r++;
	}

	int ans = 0;

	if(l<n-l)
		ans +=l;
	else
		ans+=n-l;

	if(r<n-r)
		ans+=r;
	else
		ans+=n-r;

	cout << ans << endl;



	return 0;
 
}

