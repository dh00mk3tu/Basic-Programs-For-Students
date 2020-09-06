#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
	queue<int> q;
	for ( int i = 0 ; i < n ; i++)
	{
		int p;
		cin >> p;
		q.push(p);
	}

	int arr[16] = {0};
	int flag;
	while ( !q.empty())
	{	flag = 0;
		int price = q.front();
		if ( price - 5 == 0)
		{
			arr[price]++;
			flag = 1;
		}
		else if ( arr[price - 5] != 0)
		{
			arr[price - 5]--;
			arr[price]++;
			flag = 1;
		}
		else
		{
			if ( arr[5] >= 2)
			{
				arr[5]--;
				arr[5]--;
				arr[price]++;
				flag = 1;
			}
		}
		q.pop();
		if ( flag == 0)
		{
			break;
		}
	}

	if ( flag)
	{
		cout << "YES"<<endl;
	}
	else
	{
		cout << "NO" <<endl;
	}
}
	return 0;
}
