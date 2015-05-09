#include<iostream.h>
int main()
{
	void inverse(float *p,int n);
	float a[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		cout << "enter data a[" << i << "]:" << endl;
		cin >> a[i];
	
	}
	cout << "\noriginal order:" << endl;
	for(i=0;i<10;i++)
		cout << a[i] << "  ";
	inverse(a,10);
	cout << "\ninverted order:" << endl;
	for(i=0;i<10;i++)
		cout << a[i] << "  ";
	cout << "\n\n" ;
}   
