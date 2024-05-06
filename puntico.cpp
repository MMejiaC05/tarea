#include <iostream>
#include <string>

using namespace std;

char getColor(char letter) {
    switch (letter) {
        case 'R':
            return 'r'; // Rojo
        case 'Y':
            return 'y'; // Amarillo
        case 'B':
            return 'b'; // Azul
        case 'W':
            return 'w'; // Blanco
        case 'K':
            return 'k'; // Negro
        case 'C':
            return 'c'; // Cian
        case 'G':
            return 'g'; // Verde
        default:
            return ' '; // Si no coincide con ninguna letra, devuelve espacio en blanco
    }
}

int main() {
    char letter;
    cout << "Ingresa una letra (R, Y, B, W, K, C, G): ";
    cin >> letter;

    char color = getColor(toupper(letter)); // Convertimos la letra a mayúscula

    if (color != ' ') {
        cout << "El color de la letra " << letter << " es: ";
        switch (color) {
            case 'r':
                cout << "Rojo" << endl;
                break;
            case 'y':
                cout << "Amarillo" << endl;
                break;
            case 'b':
                cout << "Azul" << endl;
                break;
            case 'w':
                cout << "Blanco" << endl;
                break;
            case 'k':
                cout << "Negro" << endl;
                break;
            case 'c':
                cout << "Cian" << endl;
                break;
            case 'g':
                cout << "Verde" << endl;
                break;
        }
    } else {
        cout << "La letra ingresada no es válida." << endl;
    }

    return 0;
}



