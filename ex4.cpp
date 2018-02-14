#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Line l1{Point{200,100}, Point{400,100}};
    Line l2{Point{200,200}, Point{400,200}};
    Line l3{Point{180,120}, Point{180,180}};
    Line l4{Point{420,120}, Point{420,180}};

    Arc a1{Point{200,120}, 20, 20, 90, 180};
    Arc a2{Point{200,180}, 20, 20, 180, 270};
    Arc a3{Point{400,120}, 20, 20, 0, 90};
    Arc a4{Point{400,180}, 20, 20, 270, 360};

    win.attach(l1);
    win.attach(l2);
    win.attach(l3);
    win.attach(l4);

    win.attach(a1);
    win.attach(a2);
    win.attach(a3);
    win.attach(a4);

    win.set_label("Okno");
    win.wait_for_button();
}
