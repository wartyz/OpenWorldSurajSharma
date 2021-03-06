#pragma once

#include "States/GameState.hpp"

class Game
{
private:
    //Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    sf::Clock dtClock;
    float dt; //Delta Time

    std::stack<State *> states; // Pila de punteros a estados

    //Inicializacion
    void initWindow();

    void initStates();

public:
    //Constructores/Destructores
    Game();

    virtual ~Game();

    //Funciones
    void updateDt();

    void updateSFMLEvents();

    void update();

    void render();

    void run();
};



