#include <bits/stdc++.h>

using namespace std;


int main()
{

	string s;

	int upper= 0, lower= 0;


	cin >> s;
	//count upper and lower
	for(int i =0; i<s.size();i++)
		{
			//remember this fact about char
			if(s[i] >= 'A' && s[i] <='Z')
			{
				upper++;
			}
			else
			{
				lower++;
			}
		}
	
	//remember toupper and tolower it converts a char
	if(upper>lower)
	{
		for(int i =0; i<s.size();i++)
		{
			int c = s[i];
			s[i] = toupper(c);
		}
	}
	else
	{
		for(int i =0; i<s.size();i++)
		{
			int c = s[i];
			s[i] = tolower(c);
		}

	}



	for(int i= 0; i<s.size();i++)
		{
			cout << s[i];
		}


	return 0;
}
