#include <iostream>
using namespace std;

//En array er en måte å lagre flere verdier på en datatype; En liste.
//Man finner lengden på arrayet ved å se hva som er deklarert i arrayet; for eksempel int aa [5]. Der 5 er lengden på arrayet.
//Første posisjon i rekka er alltid 0; 0 1 2 3 4.
//int main()
//{
//	int aa [5] = {10, 11, 12, 12, 14};
//	for (int i = 0; i < 5; i++)
//	{
//		cout << aa[i]<< "\n";
//}
//	cout <<aa;
//}

//Velg hvilken kode som kjører her

int MLG = 2;






int main()
{
	char MLG;
	cout << "skriv koden du vil skal skjøre 1 eller 2\n";
	cin >> MLG;

	//Kode 1
	if (MLG == '1')
	{




		int liste[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		for (int i = 0; i < 10; i++)
		{

			cout << liste[i];
		}
		int al = sizeof(liste) / sizeof(liste[0]); 
		cout << "\nListelengden er :" << al;


	}
	//Kode 2
	else if (MLG == '2')												
	{
		int Novigrad[3][5] = {{0,1,2,3,4}, {5,6,7,8,9}, {10,11,12,13,14}};
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << Novigrad[i][j] << "\n";
			}
		}
		int ala = sizeof(Novigrad) / sizeof(Novigrad[0]);
		cout << "\nIndre lengden er :" << ala;
		int alal = sizeof(Novigrad[0]) / sizeof(int);
		cout << "\nyttre lengden er :" << alal;
	}

}