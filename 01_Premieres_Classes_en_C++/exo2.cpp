using namespace std;
#include <iostream>

int echange(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main ()
{
	int a, b;
	
	cout << "Argument 1: ";
	cin >> a;
	cout << "Argument 2: ";
	cin >> b;
	
	echange(a, b);
	
	cout << "Argument 1 après échange: " << a << endl;
	cout << "Argument 2 après échange: " << b << endl;
	
	return 0;
}
