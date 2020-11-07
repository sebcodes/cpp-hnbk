/*
* Application "Alle Projekte (Aufgaben) die wir in Info gemacht haben"
* Copyright (c) sebcodes 2020
* @author TimPreisler <https://github.com/TimIsNotAnymoreLost>
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-hnbk
*/

#include <iostream>


int main()
{
	int* primzahl;//Pointer
	int* sucher;
	int gesamt = 0;
	int zahl,//eingabe
		ergebnis = 0;

	std::cout << "Geben Sie eine Zahl ein aus der Sie wissen wollen, \nwie viele und welche Primzahlen in dem Bereich von 2 bis zu der zu eingebenen Endzahl vorkommen.\nIhre Zahl: ";
	std::cin >> zahl;


	primzahl = new int[zahl];
	sucher = new int[zahl];

	for (int i = 0; i < zahl - 1; i++)
	{
		primzahl[i] = 2 + i;
		sucher[i] = 2 + i;
	}
	std::cout << "\t";

	std::cout << std::endl;

	for (int zaehler = 0; zaehler < zahl - 1; zaehler++)
	{
		for (int nenner = 0; nenner < zahl - 1; nenner++)
		{
			ergebnis = primzahl[zaehler] * primzahl[nenner];

			for (int gucker = 0; gucker < zahl - 1; gucker++)
			{
				if (primzahl[gucker] == ergebnis)
				{
					sucher[gucker] = 0;

				}

			}
		}
	}
	for (int i = 0; i < zahl - 1; i++)
	{
		if (sucher[i] != 0)
		{
			gesamt += 1;
		}
	}
	std::cout << "Es gibt insgesamt " << gesamt << " Primzahlen im Bereich von 2 bis " << zahl << ".\nDies sind die Primzahlen: " << std::endl;
	for (int i = 0; i < zahl - 1; i++)
	{
		if (sucher[i] != 0)
		{
			std::cout << sucher[i] << "\t";

		}
	}

	delete[] sucher;
	delete[] primzahl;

	getchar();
	cin.ignore();
	return 0;
}

