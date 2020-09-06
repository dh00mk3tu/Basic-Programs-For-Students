#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while( t--)
     {
      int n,k;
      cin>>n>>k;
      int arr[10000];
      int actual_sum = 0;
      int nowsum = 0;
      for( int i=0  ;i< n ;i++)
      {
          cin>>arr[i];
      }
      
      for( int i=0 ; i< n ;i++)
      {
          actual_sum += arr[i];
           if( arr[i]> k)
           {
               nowsum +=k;
           }
           else
           {
               nowsum+=arr[i];
           }
      }
      int sumer =  actual_sum-nowsum;
      cout<<sumer <<endl;
     }
	return 0;
}
