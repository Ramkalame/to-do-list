#include <iostream>
using namespace std;

int main() {
	int n, c = 0;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++)
	{
	    cin>>arr[i];
	}
	
	for(int i = 0; i<n; i++)
	{
	    if(arr[i] >= 1000)
	    {
	        c++;
	    }
	}
	cout<<c;
	
	return 0;
}
