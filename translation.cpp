#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Translation values
    int tx = -100, ty = -100;

    // Original triangle points
    int x = 125, y = 125;
    int x1 = 50, y1 = 50;
    int x2 = 200, y2 = 50;

    // Draw coordinate axes
    line(320, 0, 320, 480);   // Y-axis
    line(0, 240, 640, 240);   // X-axis

    // Draw original triangle
    setcolor(GREEN);
    line(320 + x, 240 - y, 320 + x1, 240 - y1);
    line(320 + x, 240 - y, 320 + x2, 240 - y2);
    line(320 + x1, 240 - y1, 320 + x2, 240 - y2);

    // Add text for original triangle
    outtextxy(320 + x + 10, 240 - y - 20, "Original");

    // Draw translated triangle
    setcolor(YELLOW);
    line(320 + x + tx, 240 - y + ty, 320 + x1 + tx, 240 - y1 + ty);
    line(320 + x + tx, 240 - y + ty, 320 + x2 + tx, 240 - y2 + ty);
    line(320 + x1 + tx, 240 - y1 + ty, 320 + x2 + tx, 240 - y2 + ty);

    // Add text for translated triangle
    outtextxy(320 + x + tx + 10, 240 - y + ty - 20, "Translated");

    getch();
    closegraph();
    return 0;
}
