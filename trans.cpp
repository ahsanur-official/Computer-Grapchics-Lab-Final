#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int maxX = getmaxx();
    int maxY = getmaxy();
    int mx = maxX / 2;
    int my = maxY / 2;

    // Original triangle coordinates
    int x1 = 50, y1 = 50;
    int x2 = 100, y2 = 0;
    int x3 = 150, y3 = 50;

    // Draw original triangle in white
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Translation values to move triangle to second quadrant
    int tx = mx - 100; // move left
    int ty = my - 50;  // move up

    // Draw translated triangle in red
    setcolor(RED);
    line(x1+tx, y1+ty, x2+tx, y2+ty);
    line(x2+tx, y2+ty, x3+tx, y3+ty);
    line(x3+tx, y3+ty, x1+tx, y1+ty);

    getch();
    closegraph();
    return 0;
}