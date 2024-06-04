#include <iostream>

using namespace std;
int main()
{
	//tworzenie tablicy z dostepnymi nominalami
	int nominaly[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int ile;
	//tworzenie zmiennej kwota
	int kwota;
	int i;
	cout << "Ile pieniedzy do wyplacenia: ";
	cin >> kwota;
	//tworzenie zmiennej ile

	//dopuki kwota jest wieksza niz zero wykonuj petle
	for (int i = 0; kwota > 0; i++)
	{
		if (kwota >= nominaly[i])
		{
			ile = kwota / nominaly[i];
			kwota = kwota - (nominaly[i] * ile);
			cout << nominaly[i] << " x " << ile << endl;
		}
	}
}