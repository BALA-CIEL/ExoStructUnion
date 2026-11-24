#include <iostream>
using namespace std;

enum EEtat
{
	Vide,
	Palette,
	Rouleau,
};

struct SPalette
{
	int poids;
	char* reference;
};

struct SRouleau
{
	int numero;
	float longueur;
};

union UContenu
{
	SPalette palette;
	SRouleau rouleau;
};

struct SCasier
{
	int px;
	int py;
	EEtat etatContenu;
	UContenu contenuCasier;
};


int main()
{
	cout << "Programme Transgerbeur." << endl;

	SCasier tabCasier[9];

	return 0;
}