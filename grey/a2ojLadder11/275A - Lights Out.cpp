#include <bits/stdc++.h>

using namespace std;


int main()
{


	//size so we can just start at 1
	int arr[4][4];


	//toggled array
	int toggled[4][4];


	for(int i = 1; i<=3;i++)
	{
		for(int j = 1; j<=3; j++)
		{
			cin >> arr[i][j];
			toggled[i][j] = arr[i][j];
		}
	}

	//
	for(int i =1; i<=3; i++)
	{
		for(int j = 1; j<=3; j++)
		{
			if(arr[i][j] != 0)
			{
				//I dislike this problem.....
				toggled[i][j-1] += arr[i][j];
				toggled[i][j+1] += arr[i][j];
				toggled[i-1][j] += arr[i][j];
				toggled[i+1][j] += arr[i][j];
			}
		}
	}
		
	for(int i = 1; i<=3; i++)
	{
		for(int j = 1; j<=3; j++)
		{
		
			if(toggled[i][j] % 2)
			{
				cout << "0";
			}
			else
			{
				cout << "1";
			}
			
		}
		cout << '\n';
	}




	return 0;
}
