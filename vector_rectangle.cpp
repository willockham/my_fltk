#include "GUI/Simple_window.h"
#include "GUI/Graph.h"

int main()
{
    using namespace Graph_lib;
    Point tl(1200,250);
    Simple_window win(tl,600,400,"Canvas");

    Vector_ref<Rectangle> vr;
    for (int i=0; i<16; ++i)
        for (int j=0; j<16; ++j) {
            vr.push_back(new Rectangle{Point{i*25,j*25},25,25});
            vr[vr.size()-1].set_fill_color(Color{i*16+j});
            win.attach(vr[vr.size()-1]);
        }

    win.set_label("Okno");
    win.wait_for_button();
}
