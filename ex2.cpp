#include <iostream>

using namespace std;

struct B {
    virtual void f() const { cout << "B::f "; } 
    void g() const { cout << "B::g "; }         // not virtual 
}; 
struct D : B { 
    void f() const { cout << "D::f "; }         // overrides B::f 
    void g() { cout << "D::g "; } 
}; 
struct DD : D { void f() { cout << "DD::f "; }                // doesn’t override D::f (not const) 
    void g() const { cout << "DD::g "; } 
};
