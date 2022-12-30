#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	
	
	int n = 4;
	vector<int> v;
	int count =0;
	for(int i = 0; i<n; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}	
		
	sort(v.begin(),v.end());

	for(int i =0; i<n; i++)
	{
		if(v[i] == v[i+1])
			count++;
	}


	cout << count << endl;
	return 0;

 
}

