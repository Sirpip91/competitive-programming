#include <bits/stdc++.h>

using namespace std;

//trailing zeros come from every 5 in the factorial.
//so we take the number and /5 and count++ until 1.
int trailZeros(int n)
{
	if(n<0)
	{
		return -1;
	}
	int count = 0;
	

	for(int i = 5; n/i >=1; i = i*5)
	{
		count += n/i; 
	
	}
	return count;

}

int main()
{

	int t;
   	cin >> t;	
	while(t--)
	{
		int a;
			
		cin >>a;
		cout << trailZeros(a) << endl;
	}
}
