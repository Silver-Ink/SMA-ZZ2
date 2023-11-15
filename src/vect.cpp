#include "../include/vect.hpp"

class Vect
{
private:
    double x_;
    double y_;
public:

    
    double get_x()
    {
        return x_;
    }
    double get_y()
    {
        return y_;
    }

    void set_p(double x, double y)
    {
        x_ = x;
        y_ = y;
    }
    void set_p(double x)
    {
        x_ = x;
    }
    void set_p(double y)
    {
        y_ = y;
    }

    double dist_sq(Vect v)
    {
        double x = v.x_ - x_;
        double y = v.y_ - y_;
        return x*x + y*y;
    }
};