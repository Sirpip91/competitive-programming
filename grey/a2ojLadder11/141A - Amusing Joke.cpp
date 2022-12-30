#include <bits/stdc++.h>
 
using namespace std;
 
 
 //my braindead solution lol
 
int main()
{	

	
	unordered_map<char,int>mp;
	unordered_map<char,int>np;
	string s1,s2,s3;

	cin >> s1 >> s2 >> s3;
	int one = s1.size();
	int two = s2.size();
	int three = s3.size();

	for(int i = 0;i<one;i++)
	{
		mp[s1[i]]++;
	}
	for(int i = 0; i<two;i++)
	{
		mp[s2[i]]++;
	}

	for(int i =0; i<three;i++)
	{
		np[s3[i]]++;
	}

	if(mp == np)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	return 0;

}


//simple solution 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	
	//input threel ines 
	string gname;
	string hname;
	string pile;
	string no = "NO";
	string yes = "YES";
 
	
	//get inputs
	cin >> gname >> hname >> pile;
 
	//add the two names into one string s
	string  s = gname + hname;
 
	//sort the string s
	sort(s.begin(), s.end());
	//sort the pile.
	sort(pile.begin(), pile.end());
 
	//if the pile and the string are equal then yes
	if(s == pile)
		cout << yes << endl;
	else
		cout << no << endl;
 
	
	return 0;	
}
