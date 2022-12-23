#include <bits/stdc++.h>

using namespace std;


int main()
{


	//go trhough and check if 2 are same
	//if so we have to take away rock
	//so just ans++
	int n;
	string s;
	cin >> n;
	cin >> s;
	int ans = 0;
	for(int i =0; i<n; i++)
	{
		if(s[i] == s[i+1])
		{
			ans++;
		}
	}

	cout << ans;
	return 0;
}
