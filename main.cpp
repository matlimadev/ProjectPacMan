#include <iostream>
#include "Pacman.h"
#include "PacMan.cpp"

int main() {
    // Exemplo de uso da classe Pacman
    Pacman pacman1; // Usando o construtor padrão
    Pacman pacman2(2, 1.5, "azul"); // Usando o construtor personalizado

    pacman1.mover();
    pacman2.comer();

    std::cout << "Vida do Pacman 1: " << pacman1.getVida() << std::endl;
    std::cout << "Velocidade do Pacman 2: " << pacman2.getVelocidade() << std::endl;

    return 0;
}
