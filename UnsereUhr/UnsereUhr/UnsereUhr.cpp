/*
* Application "Alle Projekte (Aufgaben) die wir in Info gemacht haben"
* Copyright (c) sebcodes 2020
* @author TimPreisler <https://github.com/TimIsNotAnymoreLost>
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-hnbk
*/

#include <iostream>
#include "windows.h"
#include <iomanip>




int main()
{
	//Deklaration der Variablen für Stunde minute und Sekunde
	int stunde, minute, sekunde;
	//Geht 24 mal durch für die stunde
	for (stunde =0 ; stunde < 24; stunde++)
	{
		//Geht 60 mal durch für die Minute
		for (minute = 0; minute < 60; minute++)
		{
			//Geht 60 mal durch für die sekunde
			for (sekunde = 0; sekunde < 60; sekunde++)
			{
				//Formatierte Ausgabe
				std::cout << stunde << std::setw(2) << std::setfill('0') << " : " << minute << std::setw(2) << std::setfill('0') << " : "<< std::setw(2) << std::setfill('0')<< sekunde << std::endl;
				//Eine Sekunde warte, geht nur unter windows mit der "windows.h"
				Sleep(1000);
			}
		}
	}

	(void)getchar();
	return 0;
}

