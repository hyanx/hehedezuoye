#include<iostream.h>
int main()
{
	int factorial(int m);
	int n,sum=0;
	int i;
	cout << "enter n:" << endl;
	cin >> n;
	for(i=1; i<=n; i++)
	{
		sum=sum+factorial(i);
	}
	cout << "sum is:"<< sum << endl;
	return 0;
}

int factorial(int m)
{
	if (m==1||m==0)
		return 1;
	else
		return m*factorial(m-1);
}
