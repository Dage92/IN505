using namespace std;
#include <iostream>

#define size 5

void tableauEcriture(int *tab)
{
	for(int i = 0; i < size; i++)
	{
		tab[i] = i;
	}
}

void tableauLecture(const int *tab)
{
	for(int i = 0; i < size; i++)
	{
		cout << tab[i] << endl;
	}
}

int main ()
{
	int tab[size];
	tableauEcriture(tab);
	tableauLecture(tab);
	return 0;
}
