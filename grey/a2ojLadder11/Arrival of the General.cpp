#include <bits/stdc++.h>

using namespace std;




int main()
{	
	int n;

	cin >> n;

	//if first is max and last is min that is good.
	vector<int> v;
	int a;
	for(int i =0 ;i<n; i++)
	{
		 cin >> a;
		 v.push_back(a);
	}

	int min, max, min_index, max_index;

	min = v[0];
	min_index =0;
	max = v[0];
	max_index = 0;

	for(int i = 0; i<n; i++)
	{
		//get the min number and index
		if(min>=v[i])
		{
			min = v[i];
			min_index = i;
		}
		//get the max number and index
		if(max<v[i])
		{
			max = v[i];
			max_index = i;
		}
	}


	if(min_index < max_index)
	{
		min_index = (n-1)-min_index;
		cout << (min_index+max_index-1) << endl;
	}
	else
	{
		min_index = (n-1)-min_index;
		cout << (min_index+max_index) << endl;
	}


	
	return 0;

}
