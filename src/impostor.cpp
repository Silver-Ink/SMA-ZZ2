#include "../lib/include/impostor.hpp"

class Impostor
{
    private:
        int cooldown;
        bool knowledge;
    public:
        /*getter*/
        int get_cooldown() { return cooldown; }
        bool get_knowledge() { return knowledge; }
        /*setter*/
        void set_cooldown(int value) { cooldown = value; }
        void set_knowledge(bool value) { knowledge = value; }

};