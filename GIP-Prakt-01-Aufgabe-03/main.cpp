
#include <iostream>
using namespace std;

int Datum() {
    int tag1, monat1, jahr1;
    int tag2, monat2, jahr2;

    cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
    cin >> tag1;
    cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
    cin >> monat1;
    cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
    cin >> jahr1;

    cout << endl;

    cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
    cin >> tag2;
    cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
    cin >> monat2;
    cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
    cin >> jahr2;

    cout << endl;

    if (jahr1 < jahr2) {
        cout << "Das erste Datum liegt vor dem zweiten Datum.";
    }
    else if (jahr1 > jahr2) {
        cout << "Das zweite Datum liegt vor dem ersten Datum.";
    }
    else {
        if (monat1 < monat2) {
            cout << "Das erste Datum liegt vor dem zweiten Datum.";
        }
        else if (monat1 > monat2) {
            cout << "Das zweite Datum liegt vor dem ersten Datum.";
        }
        else {
            if (tag1 < tag2) {
                cout << "Das erste Datum liegt vor dem zweiten Datum.";
            }
            else if (tag1 > tag2) {
                cout << "Das zweite Datum liegt vor dem ersten Datum.";
            }
            else {
                cout << "Beide Datumsangaben sind gleich.";
            }
        }
    }

    return 0;
}

int main() {
    //Datum();

    char ziffer1, ziffer2;
    int zahl1, zahl2, ergebnis;

    cout << "Bitte geben Sie die erste Ziffer ein: ";
    cin >> ziffer1;

    cout << "Bitte geben Sie die zweite Ziffer ein: ";
    cin >> ziffer2;

    cout << endl << endl << endl;

    if (ziffer1 == 'q' || ziffer2 == 'q')
    {
        cout << "Das Programm wurde durch Eingabe von q beendet." << endl;
        return 1;
    }
    else
    {
        zahl1 = ziffer1 - '0';
        zahl2 = ziffer2 - '0';

        ergebnis = zahl1 + zahl2;

        cout << zahl1 << " + " << zahl2 << " = " << ergebnis << endl;

        return 0;
    }
}
