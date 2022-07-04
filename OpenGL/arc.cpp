#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    // for (int i = 0; i <= 360; i++)
    // {
    arc(150, 150, 360, 60, 100); // 360-60 = 300* Anticlockwise
    // delay(100);
    //  }
    delay(10000);
    closegraph();
    return 0;
}