#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	

	string s;

	cin >> s;
	int n = s.size();
	

	sort(s.begin(),s.end());
	
	int plus = floor(n/2);



	vector<char> v;

	for(int i = plus; i<n; i++)
	{
		v.push_back(s[i]);
		if(plus>0)
		v.push_back('+');

		plus--;
	}

	for(auto i : v)
		cout << i;

	return 0;
 
}

