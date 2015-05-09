#include<iostream.h>
int main()
{
	int a[3][3];
	int i, j;
	int sum=0;
	cout << "enter data:" << endl;
	// enter data
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
		{
			cin >> a[i][j];
		}
	// display data
	cout << "\nmatrix is :" << endl;
	for(i=0; i<3; i++)
	{	
		for(j=0; j<3; j++)
			cout << a[i][j] << "  ";
		cout << "\n";
	}

	for(i=0; i<3; i++)
		sum=sum+a[i][i];
	cout << "\nsum is :" << sum <<endl;
}
