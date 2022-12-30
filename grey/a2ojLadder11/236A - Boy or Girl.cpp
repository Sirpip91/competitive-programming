#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	

	//distinct chars are odd male else femail


	string s;

	cin >> s;
	
	unordered_map<char,int> mp;
	
	int size = s.size();

	for(int i =0; i<size;i++)
	{
		mp[s[i]]++;
	}

	if(mp.size() % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!"  << endl;
	}
	


	return 0;

 
}

