#ifndef PACMAN_H
#define PACMAN_H

#include <iostream>
#include <string>

class Pacman {
private:
    int vida;
    double velocidade;
    std::string cor;

public:
    // Construtor padrão
    Pacman();

    // Construtor personalizado com parâmetros
    Pacman(int vidaInicial, double velocidadeInicial, const std::string& corInicial);

    // Método para mover o Pacman
    void mover();

    // Método para comer
    void comer();

    // Getter para vida
    int getVida() const;

    // Setter para vida
    void setVida(int novaVida);

    // Getter para velocidade
    double getVelocidade() const;

    // Setter para velocidade
    void setVelocidade(double novaVelocidade);
};

#endif // PACMAN_H
