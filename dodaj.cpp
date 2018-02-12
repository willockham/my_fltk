#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Rectangle r{Point{100,200},50,30};
    r.move(200,50);
    win.attach(r);

    win.set_label("Okno");
    win.wait_for_button();
}
