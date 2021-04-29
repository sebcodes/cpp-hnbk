#include <iostream>
int main() {


	//TM Struct erstellen
	tm tm;

	//Aktuelle Zeit in t speichern
	time_t t = time(NULL);
	//Aktuelle Zeit in das Struct kovertieren/formatieren
	localtime_s(&tm, &t);
	//Jetzt kann man auf die Bezeichner des Structs zugreifen
	
	// +1 deswegen, da tm bei 0 anfängt
	std::cout << tm.tm_mon + 1;

	(void)getchar();
	
	return 0;
}