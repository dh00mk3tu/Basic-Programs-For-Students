#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t;
	cin >> t;
	while ( t--)
	{
		long long ts;
		cin >> ts;
	    while( ts%2==0)
	    {
	        ts=ts>>1;
	    }
	    cout<<ts/2<<endl;
	}
	return 0;
}
