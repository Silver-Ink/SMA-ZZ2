#include "../lib/include/crewmate.hpp"

class Crewmate : public Amongus
{
    private:
        int nb_task;
        double proba;
    public:
        /*getter*/
        int get_nb_task() { return nb_task; }
        double get_proba() { return proba; }
        /*setter*/
        void set_nb_task(int nb_task) { nb_task = nb_task;}
        void set_proba(double proba) { proba = proba;}
};