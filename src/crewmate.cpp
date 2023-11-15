#include "to_include.hpp"

Crewmate::Crewmate(double v, double i, double vit, bool w, int nt, double p) : Amogus(v, i, vit, w)
{
    nb_task = nt;
    proba = p;
}

/*getter*/
int Crewmate::get_nb_task(){return nb_task;}
double Crewmate::get_proba(){return proba;}

/*setter*/
void Crewmate::set_nb_task(int nt){nb_task = nt;}
void Crewmate::set_proba(double prob){proba = prob;}
