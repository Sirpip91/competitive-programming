#include <bits/stdc++.h>

using namespace std;
int main()
{	
	

	 int n;
    cin >> n;
	//base case
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
		// start 2 and 1 then every other 
		// output i+1 then i
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;

}
