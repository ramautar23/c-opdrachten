#include <iostream>
using namespace std;

int main() {
    // Declareer een variabele voor de temperatuur in Celsius
    float celsius, fahrenheit;

    // Vraag de gebruiker om de temperatuur in Celsius in te voeren
    cout << "Voer de temperatuur in graden Celsius in: ";
    cin >> celsius;

    // Zet de temperatuur om naar Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Toon de temperatuur in Fahrenheit
    cout << "De temperatuur in Fahrenheit is: " << fahrenheit << "°F" << endl;

    return 0;
}
