#ifndef GAME
#define GAME

#include "to_include.hpp"

class Game{
private:
    Crewmate* lst_crewmate;
    int nb_crewmate;

public:
    void init_game(int nb_cm);
};

#endif