#ifndef DEF_IMPOSTOR
#define DEF_IMPOSTOR

#include "./amogus.hpp"

class Impostor : public Amogus
{
    private:
        int cooldown;
        bool knowledge;
    public:
        /*constructeur*/
        Impostor(double , double, double , bool, int, bool);
        /*getter*/
        int get_cooldown();
        bool get_knowledge();
        /*setter*/
        void set_cooldown(int value);
        void set_knowledge(bool value);

};


#endif