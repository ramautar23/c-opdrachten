#include <iostream>
using namespace std;

int main() {
    // Definieer een constante voor het huidige jaar
    const int huidig_jaar = 2025;

    // Vraag de gebruiker naar hun geboortedatum (jaar)
    int geboortejaar;
    cout << "Voer je geboortejaar in: ";
    cin >> geboortejaar;

    // Bereken de leeftijd
    int leeftijd = huidig_jaar - geboortejaar;

    // Toon de berekende leeftijd
    cout << "Je leeftijd is: " << leeftijd << " jaar." << endl;

    return 0;
}
