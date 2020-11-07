// Sortieren.cpp : Definiert den Einstiegspunit für die Konsolenanwendung.
//

#include <iostream>
using namespace std;


int main()
{
	//Die Länge, die vom Nutzer eingelesen wird.
	int laenge_array;
	//Zum Überprüfen, ob die Zahl im Array enthalten ist.
	int	l = 1;										
	//Zum Vertauchen der Zahlen im Array.
	int	temp;		
	//Die größte Zahl die im Array enthalten sein soll, welche vom Nutzer eingelesen wird.
	int	bereich;	
	//Die größte Zahl die im Array enthalten sein soll, welche vom Nutzer eingelesen wird.
	int	j = 1;													
	//Ein noch nicht von der Größe festgelegten Array.
	int* zaehler;				
	//Ein noch nicht von der Größe festgelegten Array.
	int* feld;													
	
	//Einlesung der Anzahl der Zahlen die sortiert werden sollen
	cout << "Wie viele Zahlen:";
	cin >> laenge_array;
	cout << "Gib die groesste Zahl ein die im Array enthalten sein soll: ";
	cin >> bereich;
	/*
		zaehler Array wir von der Größe festgelegt, 
		da ich als größe des Arrays den zuvor 
		eingelesenen Wert "bereich" verwende
	*/
	zaehler = new int[bereich];									
	/*
		feld Array wird von der Größe festgelegt, 
		da ich als größe des Arrays den zuvor 
		eingelesenen Wert "länge_array" verwende
	*/
	feld = new int[laenge_array];
	//Das Array "feld" mit der Größe läng_array wird mit Zufallszahlen belegt
	for (int i = 0; i < laenge_array; i++)
	{
		//Der eingelesene Bereich wird mit +1 berechnet, da sonst nicht die Zahl als größte vorkommt!!!
		feld[i] = rand() % bereich + 1;							
	}

	//Es wird geprüft welche Zahl im Array die kleinste Zahl ist, die for-Schleife wir so oft wiederholt wie das feld[länge_array] groß ist.
	for (int i = 0; i < laenge_array; i++)
	{
		//Die for-Schleife läuft solange wie länge_array groß ist
		for (int i = 0; i < laenge_array; i++)
		{
			//Nun wird überprüft, ob das feld[i] kleiner "<" als das feld[i+1] ist, oder anders gesagt, ist feld[0] < feld[1]!!!
			if (feld[i] < feld[i + 1])							
			{
				//Wenn das der Fall ist wird angefangen die felder zu tauschen, "temp" ist eine Speichervariable,
				//jede "Runde" neu überschriben wird, wir sagen das i=0 ist!!!
				
				//temp = feld[1] bedeutet das temp den Wert, der bei feld[1] gespeichert wurde annimmt,
				temp = feld[i];		
				//feld[1]=feld[1+1] bedeutet, dass feld[1] den Wert, der bei feld[1+1] gespeichert wurde annimmt,
				feld[i] = feld[i + 1];		
				//feld[1+1] = temp bedeutet, dass feld[1+1] von dem ergebnis, welches vorhin noch in feld[1] gestanden hat überschrieben wird
				feld[i + 1] = temp;		
				//Somit ist der Tauschvorgang beendet
			}													
		}
	}
	//Um alle Werte des Arrays "zaehler" auf null zu setzen
	for (int i = 0; i < bereich; i++)							
	{

		zaehler[i] = 0;
	}

	//Die for dauert solange an, bis die Zahl bereich erreicht wurde
	for (int s = 0; s <= bereich; s++)							
	{
		//Wir sagen, das laenge_array 20 groß ist
		//Die for fängt bei 19 an, weil das Array feld 20 werte gespeichgtert hat, aber bei 0 anfängt.
		for (int i = laenge_array - 1; i > -1; i--)				
		{
			/*
				Wenn der Wert von feld[19] == 1 stimmt, dann wird im Array zaehler an der stelle 0 des Arrays +1 gerechnet.
				Das ganze Array hat die Werte 0 eingetragen, wenn wir jetzt an stelle 0, +1 rechnen, steht das schnomal ne 1,
				Dies wird solange wiederholt, wie feld[18], dann feld[17] usw. bis bei feld[0], weil es runter Zählt,  
				bis die for mit länge_array durchgelaugen ist, dann erhöht sich die andere for-Schleife um ein und feld[19] wird mit der Zahl 2 verglichen!!! 
			*/
			if (feld[i] == l)									
			{													
				zaehler[s] = zaehler[s] + 1;						
																
			}

		}
		l++;
	}
	//Es wird ausgegeben welche Zahl wie oft im Array enthalten ist
	for (int i = 0; i < bereich; i++)							
	{
		/*
			Es werden nur Zahlen ausgegeben, 
			die an der Stelle i im Array zaehler ungleich (!=) 0 ist, 
			damit nur die wichtigsten Zahlen ausgegeben werden
		*/
		if (zaehler[i] != 0)										
		{
			cout << "Die Zahl " << j << " kommt " << zaehler[i] << "\t mal in den " << laenge_array << " Zahlen vor!" << endl;
		}
		j++;
	}
	//Zum löschen des Speichers
	delete[] feld;												
	//Zum löschen des Speichers
	delete[] zaehler;											

	(void)getchar();
	cin.ignore();
	return 0;
}