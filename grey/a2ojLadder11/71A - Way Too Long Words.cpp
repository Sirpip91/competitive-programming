#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	

	int n;
	cin >> n;
	
	while(n--)
	{

		string s;

		cin >> s;

		int size = s.size();

		if(size>10)
		{
			char first = s[0];
			char last = s[size-1];
			cout << first << size-2 << last<<endl;
		}
		else
		{
			cout << s<<endl;
		}
		
	}
	return 0;

 
}

