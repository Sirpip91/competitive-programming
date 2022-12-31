#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	
	string s;
	string a;


	cin >> s >> a;

	int n = s.size();
	
	for(int i =0; i<n; i++)
	{
		s[i] = toupper(s[i]);
		a[i] = toupper(a[i]);
	}


	if(s == a)
		cout << 0 << endl;
	else
		if(s>a)
		{
			cout << 1 << endl;
		}else
		cout << -1 << endl;
	
	
	
	return 0;

}

