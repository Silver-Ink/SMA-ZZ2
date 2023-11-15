#ifndef DEF_SHERIF
#define DEF_SHERIF

#include "amogus.hpp"

class Sherif : public Amogus
{
    private :
        int cooldown;
    public:
        /*constructeur*/
        Sherif(double , double, double , bool, int);
        /*getter*/
        int get_cooldown();
        /*setter*/
        void set_cooldown(int);
};

#endif