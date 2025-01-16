#include <iostream>
using namespace std;

int main() {
    float getal1, getal2;
    char bewerking;

    // Vraag de gebruiker om de twee getallen en de bewerking
    cout << "Voer het eerste getal in: ";
    cin >> getal1;
    cout << "Voer het tweede getal in: ";
    cin >> getal2;
    cout << "Kies een bewerking (+, -, *, /): ";
    cin >> bewerking;

    // Voer de gekozen bewerking uit
    if (bewering == '+') {
        cout << "Resultaat: " << getal1 + getal2 << endl;
    } else if (bewering == '-') {
        cout << "Resultaat: " << getal1 - getal2 << endl;
    } else if (bewering == '*') {
        cout << "Resultaat: " << getal1 * getal2 << endl;
    } else if (bewering == '/') {
        // Controleer of de deler nul is
        if (getal2 != 0) {
            cout << "Resultaat: " << getal1 / getal2 << endl;
        } else {
            cout << "Fout: Delen door nul is niet toegestaan!" << endl;
        }
    } else {
        cout << "Ongeldige bewerking!" << endl;
    }

    return 0;
}


