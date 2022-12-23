#include <bits/stdc++.h>

using namespace std;
int main()
{

	//store the answer inside of a.
	//creating a new string results in runtime...

	string a,b;
	cin >> a >> b;

	int n = a.size();
	for(int i =0; i<n;i++)
	{
		if(a[i] == b[i])
		{
				a[i] = '0';
		}
		else
		{
				a[i] = '1';
		}
	}

	cout << a << endl;


	return 0;
}
