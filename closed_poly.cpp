#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Rectangle rect{Point{100,100},300,200};

    win.attach(rect);
    win.set_label("Okno");
    win.wait_for_button();
}
