#include <iostream>

int main() {
    int NUMERO;
    if (!(std::cin >> NUMERO))
        return 0;
    if (NUMERO < 1000 || NUMERO > 9999)
        return 0;

    int unidad = NUMERO % 10;
    int decena = (NUMERO / 10) % 10;
    int centena = (NUMERO / 100) % 10;
    int unidad_de_mil = (NUMERO / 1000) % 10;

    std::cout << "{'Número' : " << NUMERO
              << ", 'Unidad' : " << unidad
              << ", 'Decena' : " << decena
              << ", 'Centena' : " << centena
              << ", 'Unidad de mil' : " << unidad_de_mil
              << "}\n";

    return 0;
}
