#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Regular_hexagon reg(Point{200,200}, 100);

    win.attach(reg);
    win.set_label("Okno");
    win.wait_for_button();
}
