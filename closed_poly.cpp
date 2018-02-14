#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Closed_polyline cpl = { {100, 100}, {150, 200}, {250, 250}, {300, 200} };

    win.attach(cpl);
    win.set_label("Okno");
    win.wait_for_button();
}
