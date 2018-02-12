#include <iostream>
using std::cout;

struct B {
    virtual void f() { cout << "B::f "; }
    void g() const { cout << "B::g "; }
};
struct D : B {
    void f() const { cout << "D::f "; }
    void g() { cout << "D::g "; }
};
struct DD : D { void f() { cout << "DD:f "; }
    void g() const { cout << "DD::g "; }
};
