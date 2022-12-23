#include <bits/stdc++.h>

using namespace std;


int main()
{
	//2014
	//2014/ 1000 = 2 then 2 % 10 = 2
	//2014/ 100 = 20 then 20 % 10 = 0 
	//2014/ 10 = 201 then 201 % 10 = 1
	//2014 % 10 = 4
	int n;

	cin >> n;

	
	int a = 0, b = 0  ,  c = 0 ,d = 0;
	while(true)
	{
		n++;
	a = n /1000;
	b = n /100 % 10;
	c = n /10 % 10;
	d = n %10;

	if(a != b && a != c && a!= d && b != c && b!=d && c!=d)
	{
		break;	
	}
		
	}

	cout << n;

	


	return 0;
}
