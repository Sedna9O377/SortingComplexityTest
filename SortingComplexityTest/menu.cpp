#include <iostream>
#include <conio.h>
#include "colourText.h"
#include "sort.h"

using namespace std;

bool algorithmChosen = false;
bool dataLoaded = false;

enum sort chosenAlgorithm;

void chooseAlgorithm();
void chooseData();
void menuStart();
void randomNumbers();
void loadNumbers();

int main(void)
{
	char opt;
	do {
		menuStart();
		opt = _getche();
		cout << endl;
		switch (opt) {
		case '1':
			chooseAlgorithm();
			break;
		case '2':
			chooseData();
			break;
		case '3':
			break;
		}
	} while (opt != '0');

	return 0;
}

void chooseAlgorithm() {
	char opt;
	do {
		cout << endl;
		cout << "Wybierz algorytm:" << endl;
		cout << " 1 - insertion sort" << endl;
		cout << " 2 - " << endl;
		cout << " 3 - " << endl;
		cout << " 0 - return" << endl << ">";

		opt = _getche();
		cout << endl;
		switch (opt) {
		case '1':
			chosenAlgorithm = INSERTION;
			opt = '0';
			algorithmChosen = true;
			break;
		case '2':
			break;
		}
	} while (opt != '0');
}

void chooseData() {
	char opt;
	do {
		cout << endl;
		cout << "W jaki sposób chcesz dodaæ liczby do posortowania?" << endl;
		cout << " 1 - Losuj" << endl;
		cout << " 2 - Wczytaj" << endl;
		cout << " 0 - return" << endl << ">";

		opt = _getche();
		cout << endl;
		switch (opt) {
		case '1':
			randomNumbers();
			dataLoaded = true;
			opt = '0';
			break;
		case '2':
			loadNumbers();
			dataLoaded = true;
			opt = '0';
			break;
		}
	} while (opt != '0');
}

//tekst menu dopasowuj¹cy siê do tego co w danej chwili 
void menuStart() {
	cout << endl;
	if (algorithmChosen) {
		ColourText::print(" 1 - Wybierz algorytm", 8); cout << endl;
	}
	else {
		cout << " 1 - Wybierz algorytm" << endl;
	}
	if (dataLoaded) {
		ColourText::print(" 2 - Losuj/Wczytaj dane", 8); cout << endl;
	}
	else {
		cout << " 2 - Losuj dane" << endl;
	}
	if (dataLoaded && algorithmChosen) {
		cout << " 3 - SORTUJ" << endl;
	}
	else {
		ColourText::print(" 3 - SORTUJ", 8); cout << endl;
	}
	cout << " 0 - exit" << endl << ">";
}