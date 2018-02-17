#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Mark m{{200,200}, 'x'};
    m.add(Point{300,300});
    m.set_color(Color(Color::blue, Color::visible));
    win.attach(m);

    win.set_label("Okno");
    win.wait_for_button();
}
