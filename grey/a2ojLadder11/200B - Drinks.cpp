#include <bits/stdc++.h>

using namespace std;




int main()
{	
	
	double n;

	cin >> n;
	double a = 0;
	double ans = 0;
	for(int i =0; i<n;i++)
	{
		cin >> a;
		ans+= a;
	}


	cout << ans/n;	

	return 0;

}
