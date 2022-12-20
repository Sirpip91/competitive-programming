#include <bits/stdc++.h>

using namespace std;

//awsome reverse function
int reverse(int n)
{

	int answer=0 ;
	while(n != 0)
	{
		int remainder = n % 10;
		answer = answer * 10 + remainder;
		n/=10;
	}

	return answer;
}


int main()
{
	//reverse a and b then add then reverse again
	
	
	int a , b , t;

	cin >> t;

	while(t--)
	{
		cin >> a >> b;
		
		a = reverse(a);
		b = reverse(b);

		int add = a+b;

		add = reverse(add);
		cout << add << endl;
	}
	return 0;
}
