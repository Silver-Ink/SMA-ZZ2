#ifndef DEF_AMONGUS
#define DEF_AMONGUS


class Amogus
{
    
    protected: 
        double vision;
        double interaction;
        double vitesse;
        bool weapon;
    public:
        /*constructeur*/
        Amogus(double , double, double , bool);
        /*getter*/
        double get_vision();
        double get_interaction();
        double get_vitesse();
        bool get_weapon();
        /*setter*/
        void set_vision(double v);
        void set_interaction(double interaction);
        void set_vitesse(double v);
        void set_weapon(bool w);
        /*autre*/
        void move(); //à modifier en cas de présence d'arguments
};

#endif