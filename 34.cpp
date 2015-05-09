#include <iostream.h>
int main()
{
	int a ;
	int n ;
	int i, now=0, sum;
	cout << "enter a:" << endl;
	cin >> a;
	cout << "enter n:" << endl;
	cin >> n;
	sum=0;
	for(i=0; i<n; i++)
	{
		now=now*10+a;
		sum=sum+now;
	}
	cout << "sum is:" << sum <<endl;
}
