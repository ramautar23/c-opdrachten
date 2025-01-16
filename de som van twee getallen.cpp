#include <iostream>
using namespace std;

int main() {
    // Declareer variabelen voor de twee getallen
    float getal1, getal2, som;

    // Vraag de gebruiker om het eerste getal in te voeren
    cout << "Voer het eerste getal in: ";
    cin >> getal1;

    // Vraag de gebruiker om het tweede getal in te voeren
    cout << "Voer het tweede getal in: ";
    cin >> getal2;

    // Bereken de som van de twee getallen
    som = getal1 + getal2;

    // Toon het resultaat op het scherm
    cout << "De som van de twee getallen is: " << som << endl;

    return 0;
}
