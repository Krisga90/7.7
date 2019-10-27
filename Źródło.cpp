#include <iostream>

const int SIZE = 10;

double * fill_array(double * poczatek, double *koniec);
void show_array(double * poczatek, double *koniec);
void reverse_array(double * poczatek, double *koniec);

int main()
{
	double* elementow;
	double a[SIZE]{ 0 };
	
	elementow = fill_array(&a[0], &a[SIZE]);
	show_array(a, elementow);
	reverse_array(a, elementow);
	show_array(a, elementow);

	std::cin.get();
	std::cin.get();

	return 0;
}



double * fill_array(double * poczatek, double *koniec)
{
	int ilosc = 0;
	double* wskaznik = poczatek;
	while (wskaznik < koniec)
	{
		std::cout << "Podaj wartosci\n wartosc nr " << ilosc + 1 << " : ";
		std::cin >> *wskaznik;
		if (!(std::cin))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;

			return wskaznik;
		}
		std::cout <<*wskaznik << "\n";
		wskaznik++;
		ilosc++;
	}
	return wskaznik;
}
void show_array(double * poczatek, double *koniec)
{
	std::cout << "\nTwoje wartosci:\n";
	for (int i = 0; poczatek+i < koniec; i++)
		std::cout << i + 1 << ": \t" << *(poczatek+i)<< "\n";
}
void reverse_array(double * poczatek, double *koniec)
{
	double pomocnicze;
	for (int i = 0; poczatek+i< (poczatek+ (koniec-poczatek)/2) ; i++)
	{
		pomocnicze = *(poczatek+i);
		*(poczatek + i) = *(koniec -1- i);
		*(koniec - 1 - i) = pomocnicze;
	}

}