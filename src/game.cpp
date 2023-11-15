#include "to_include.hpp"


void Game::init_game(int nb_cm)
{
    nb_crewmate = nb_cm;
    lst_crewmate = (Crewmate*)malloc(sizeof(Crewmate)*nb_cm);
    for (int i = 0; i < nb_cm; i++)
    {
        // lst_crewmate[i] = Crewmate()
    }
    
}
