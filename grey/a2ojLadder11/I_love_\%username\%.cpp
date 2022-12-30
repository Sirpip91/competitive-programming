#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
{	


	//best or worst  amazing
	//amazing if(points> past contest)
	//amazing if(points <past contest)
	//first is not amazing
	


	int n;
	cin>>n;
	int contest[n];
	for(int i =0; i<n;i++)
	{
		cin >> contest[i];
	}
		
	//max and min if they change count++;
	//
	
	int max = contest[0];
	int min = contest[0];
	int count = 0;
	for(int i =1 ;i<n;i++)
	{
		if(contest[i] > max)
		{
			count++;
			max = contest[i];
		}
		if(contest[i] < min)
		{
			count++;
			min = contest[i];
		}
	}

	cout << count << endl;
	return 0;
 
}

