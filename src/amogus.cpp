#include "../lib/include/amogus.hpp"

class Amongus
{
    protected: 
        double vision;
        double interaction;
        double vitesse;
        bool weapon;
    public:
        /*getter*/
        double get_vision() { return vision; }
        double get_interaction() { return interaction; }
        double get_vitesse() { return vitesse; }
        bool get_weapon() { return weapon; }
        /*setter*/
        void set_vision(double v) { vision = v;}
        void set_interaction(double interaction) { interaction = interaction;}
        void set_vitesse(bool v) { vitesse = v;}
        /*autre*/
        void move()
        {
            /*code*/
        }
};