/*
    Fahrtzeit berechne und formatieren
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Klasse Navi erstellt
class Navi {
    //Public heißt das sie auch außerhalb der Klasse aufrufbar ist (gilt für Variablen und auch Methoden)
public:
    int startHour;
    int startMin;
    int driveHour;
    int driveMin;
    // Setzt die Startzeit
    void setStartTime(int startHour, int startMin) {
        //this bezieht sich auf das aktuelle objekt (nicht zwingend)
        this->startHour = startHour;
        this->startMin = startMin;
        
    }
    //Gibt die Start Stunde zurück
    int getStartHour() {
        return this->startHour;
    }
    int getStartMin() {
        return this->startMin;
    }
    //Setzt die Fahrtzeit
    void setDriveTime(int driveHour, int driveMin) {
        this->driveHour = driveHour;
        this->driveMin = driveMin;
    }
    //Gibt die gefahrende Stunde zurück
    int getDriveHour() {
        return this->driveHour;
    }
    //Gibt die gefahrene Minute zurück
    int getDriveMin() {
        return this->driveMin;
    }
    // Stunden werden zusammengerechnet, dann durch die Funktion "string Return" zurückgegeben
    string rechnung() {
        int hour = (this->startHour + this->driveHour);
        int min = (this->startMin + this->driveMin) % 60;
        int howManyHours = (this->startMin + this->driveMin) / 60;
        hour += howManyHours;
        return stringReturn(hour, min);
    }
    //Wenn Zahl unter 10 ist, wird noch eine 0 angehängt
    string ifZero(int value, string& output) {
        if (value < 10) {
            output += "0";
        }
        return output;
    }
    //Zeit wird formatiert und durch die Funktion "ifZero" durch eine 0 ergänzt
    string stringReturn(int hour, int min) {
        string output = "";
        ifZero(this->startHour, output);
        output += to_string(this->startHour) + ":";
        ifZero(this->startMin, output);
        output += to_string(this->startMin) + "\n";
        ifZero(this->driveHour, output);
        output += to_string(this->driveHour) + ":";
        ifZero(this->driveMin, output);
        output += to_string(this->driveMin) + "\n";
        ifZero(hour, output);
        output += to_string(hour) + ":";
        ifZero(min, output);
        output += to_string(min);
        // Gibt den String zurück
        return output;
    }
};
int main()
{
    //Navi wird instanziert
    Navi navi;
    //start daten werden gesetzt
    int start_hour = 5;
    int start_min = 30;
    int drive_hour = 2;
    int drive_min = 30;

    //Wenn mit Eingabe, dann auskommentieren

    /*cin >> start_hour >> start_min;
    cin >> drive_hour >> drive_min;
    navi.setStartTime(start_hour, start_min);
    navi.setDriveTime(drive_hour, drive_min);*/



    //Start und Fahrtzeit setzen
    navi.setStartTime(start_hour, start_min);
    navi.setDriveTime(drive_hour, drive_min);

    //Endergebnis ausgeben
    cout << navi.rechnung();


    (void) getchar();
    cin.ignore();
    return 0;
}
