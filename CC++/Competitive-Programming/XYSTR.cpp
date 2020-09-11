#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        string str;
	cin>>str;
	unordered_map< int , bool> mp;
	int counter=0;
	for( int i=0 ; i< str.length()-1 ; i++)
	{
	    if(str[i]!=str[i+1] && !mp[i] && !mp[i+1])
	    {
	        counter++;
	        mp[i]=true;
	        mp[i+1]= true;
	    }
	}
	
	cout<<counter<<endl;
    }

	return 0;
}
