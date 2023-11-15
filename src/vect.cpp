#include "to_include.hpp"


double Vect::get_x()
{
    return x_;
}
double Vect::get_y()
{
    return y_;
}

void Vect::set_p(double x, double y)
{
    x_ = x;
    y_ = y;
}
void Vect::set_x(double x)
{
    x_ = x;
}
void Vect::set_y(double y)
{
    y_ = y;
}

double Vect::dist_sq(Vect v)
{
    double x = v.x_ - x_;
    double y = v.y_ - y_;
    return x*x + y*y;
}
double Vect::dist(Vect v)
{
    return sqrt(dist_sq(v));
}

double Vect::norm_sq(Vect v)
{
    return v.x_*v.x_ + v.y_* v.y_;
}
double Vect::norm(Vect v)
{
    return sqrt(norm_sq(v));
}

double Vect::angle()
{
    return atan2(x_, y_);
}
double Vect::angle(Vect v)
{
    return atan2(v.x_ - x_,
                    v.y_ - y_);
}