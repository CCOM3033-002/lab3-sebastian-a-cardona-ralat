/*
Nombre: Sebastián A. Cardona Ralat
Núm. Est: 801-24-0466
Lab #03 Tres Numeros Aleatorios
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    
    // Los tres números aleatorios desplegados serán entre 0 y 100
    int max = 100;
    int min = 0;
    
    int numAleatorio1 = rand() % (max - min + 1) + min;
    int numAleatorio2 = rand() % (max - min + 1) + min;
    int numAleatorio3 = rand() % (max - min + 1) + min;
    
    // Desplegar los tres números aleatorios 
    std::cout << "Números aleatorios generados: " << numAleatorio1 << " " << numAleatorio2 << " " << numAleatorio3 << std::endl;

    // Desplegar los tres números aleatorios en orden descendiente
    // Orden es: 1, 2, 3
    if (numAleatorio1 >= numAleatorio2 && numAleatorio1 >= numAleatorio3 && numAleatorio2 >= numAleatorio3) {
        std::cout << "Orden descendiente: " << numAleatorio1 << " >= " << numAleatorio2  << " >= " << numAleatorio3;

    }

    // Orden es: 1, 3, 2
    else if (numAleatorio1 >= numAleatorio2 && numAleatorio1 >= numAleatorio3 && numAleatorio3 >= numAleatorio2) {
        std::cout << "Orden descendiente: " << numAleatorio1 << " >= " << numAleatorio3 << " >= " << numAleatorio2;

    }

    // Orden es: 2, 1, 3
    else if (numAleatorio2 >= numAleatorio1 && numAleatorio2 >= numAleatorio3 && numAleatorio1 >= numAleatorio3) {
        std::cout << "Orden descendiente: " << numAleatorio2 << " >= " << numAleatorio1 << " >= " << numAleatorio3;

    }

    // Orden es: 2, 3, 1
    else if (numAleatorio2 >= numAleatorio1 && numAleatorio2 >= numAleatorio3 && numAleatorio3 >= numAleatorio1) {
        std::cout << "Orden descendiente: " << numAleatorio2 << " >= " << numAleatorio3 << " >= " << numAleatorio1;

    }

    // Orden es: 3, 2, 1
    else if (numAleatorio3 >= numAleatorio1 && numAleatorio3 >= numAleatorio2 && numAleatorio2 >= numAleatorio1) {
        std::cout << "Orden descendiente: " << numAleatorio3 << " >= " << numAleatorio2 << " >= " << numAleatorio1;

    }

    // Orden es: 3, 1, 2
    else {
        std::cout << "Orden descendiente: " << numAleatorio3 << " >= " << numAleatorio1 << " >= " << numAleatorio2 << std::endl;

    }


}