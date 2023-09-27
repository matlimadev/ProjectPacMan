#include "Pacman.h"

// Construtor padrão
Pacman::Pacman() : vida(3), velocidade(1.0), cor("amarelo") {}

// Construtor personalizado com parâmetros
Pacman::Pacman(int vidaInicial, double velocidadeInicial, const std::string& corInicial)
    : vida(vidaInicial), velocidade(velocidadeInicial), cor(corInicial) {}

// Método para mover o Pacman
void Pacman::mover() {
    std::cout << "Pacman se move a uma velocidade de " << velocidade << " unidades por segundo." << std::endl;
}

// Método para comer
void Pacman::comer() {
    std::cout << "Pacman comeu um ponto." << std::endl;
}

// Getter para vida
int Pacman::getVida() const {
    return vida;
}

// Setter para vida
void Pacman::setVida(int novaVida) {
    vida = novaVida;
}

// Getter para velocidade
double Pacman::getVelocidade() const {
    return velocidade;
}

// Setter para velocidade
void Pacman::setVelocidade(double novaVelocidade) {
    velocidade = novaVelocidade;
    
}
