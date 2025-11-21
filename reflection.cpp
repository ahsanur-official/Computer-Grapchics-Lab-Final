#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int X = getmaxx();
    int Y = getmaxy();
    int mx = X / 2; // center X (optional)
    int my = Y / 2; // center Y for reflection

    // Draw axes for reference
    line(0, my, X, my); // X-axis
    line(mx, 0, mx, Y); // Y-axis

    // Original triangle points
    int x1 = 200, y1 = 150;
    int x2 = 150, y2 = 150;
    int x3 = 250, y3 = 50;

    // Draw original triangle (BLUE)
    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Draw mirrored triangle (RED)
    setcolor(RED);
    line(x1,my*2-y1,x2,my*2-y2);
    line(x2,my*2-y2,x3,my*2-y3);
    line(x3,my*2-y3,x1,my*2-y1);

    getch();
    closegraph();
    return 0;
}