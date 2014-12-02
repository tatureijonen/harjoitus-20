/*
TATU REIJONEN - IIO14S1

Harjoitus 20 (Palautus vko 48)



Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
tiedon käsittelyyn


__________________________________________________________________________
*/

#include <iostream>
using namespace std;
const int max_t = 5;
int main()

{
	int taulukko[max_t] = { 0, 0, 0, 0, 0 };
	int i = 0;
	int *osoitin;

	while (true)
	{
		cout << "Anna nopeus: ";
		cin >> taulukko[i];
		osoitin = &taulukko[i];
		if (taulukko[i] < 0)
		{
			break;
		}
		i++;
		if (i == max_t)
			i = 0;
		cout << "Annettu nopeus: " << *osoitin << "km/h" << endl;
		cout << "MITTARI:" << (taulukko[0] + taulukko[1] + taulukko[2] + taulukko[3] + taulukko[4]) / 5 << "km/h" << endl << endl;

	}


}