using namespace std;
#include <iostream>
#include <cstring>

int main ()
{
//A
	cout << "A)" << endl;
	
	/*int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int p;
	for (p = 0; p < 10; p++)
	{
		cout << tab[p] << endl;
	}*/
	int tab[10];
	int *p;
	int i;
	for (i = 0; i < 10; i++)
	{
		p[1] = i*6;
		cout << "tab[" << i << "] = " << p[1] << endl;
	}
	
	cout << endl;
	
//B
	cout << "B)" << endl;
	
	char* ctab[3];
	ctab[0] = new char[strlen("truc")+1];
	strcpy(ctab[0], "truc");
	ctab[1] = new char[strlen("machin")+1];
	strcpy(ctab[1], "machin");
	ctab[2] = new char[strlen("chose")+1];
	strcpy(ctab[2], "chose");
	for (i = 0; i < 3; i++)
	{
		cout << ctab[i] << endl;
	}
	
	for (i = 0; i < 3; i++)
	{
		delete[] ctab[i];
	}
}
