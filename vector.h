#ifndef __VECTOR_H__
#define __VECTOR_H__

#include<iostream>
#include<cmath>

using namespace std;

template <typename T>
class vector2D {
private:
    T x;
    T y;

public:
    // normal constructor
    vector2D() : x(0.0), y(0.0) {cout << "Start the vectot in (0.0 , 0.0)" << endl;}

    // parametric constructor
    vector2D(T xvalue, T yvalue) : x(xvalue), y(yvalue) {
        cout << "New vector created at (" << x << ", " << y << ")" << endl;}

    T magnitud();
    vector2D<T> sumar(const vector2D<T>& other) const;

};

template <typename T>
T vector2D<T> :: magnitud(){
    return sqrt(pow(x, 2) + pow(y, 2));
}

template <typename T>
vector2D<T> vector2D<T> :: sumar(const vector2D<T>& other) const{
    T new_x = x + other.x;
    T new_y = y + other.y;
    return vector2D<T>(new_y, new_y);
}
#endif