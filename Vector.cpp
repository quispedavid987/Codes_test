#include <iostream>

using namespace std;

class Vector{
public:
    Vector(int size) : elem{new double[size]}, sz{size} {
        cout << "Clase vector creada" << endl;
    }

    virtual ~Vector() {
    delete[] elem;
    cout << "Vector destruido" << endl;
    }

    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }
private:
    double* elem;
    int sz;
};


int main(){
    Vector v1(5);
    cout << v1.size() << endl;
    for(int i=0; i < v1.size(); ++i) cout << v1[i] << endl;
    v1[2] = 12.;
    for(int i=0; i < v1.size(); ++i) cout << v1[i] << endl;
    Vector v2(10);
    return 0;
}
