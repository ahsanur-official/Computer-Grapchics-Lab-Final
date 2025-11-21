#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <iostream>

// Define PI if the compiler doesn't support M_PI
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    // 1. Initialize Graphics
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int X = getmaxx();
    int Y = getmaxy();

    // 2. Draw Coordinate Axes (Optional visual guide)
    line(0, Y / 2, X, Y / 2); // Horizontal axis
    line(X / 2, 0, X / 2, Y); // Vertical axis

    // 3. Define Original Triangle Points
    double x1 = 70, y1 = 180;
    double x2 = 140, y2 = 90;
    double x3 = 210, y3 = 180;

    // 4. Calculate Centroid
    double cx = (x1 + x2 + x3) / 3.0;
    double cy = (y1 + y2 + y3) / 3.0;

    // 5. Set Rotation Angle (50 degrees to radians)
    double theta = 50.0 * M_PI / 180.0;

    double rx1, ry1, rx2, ry2, rx3, ry3;
    double dx, dy;

    // Point 1
    dx = x1 - cx; dy = y1 - cy;
    rx1 = dx * cos(theta) - dy * sin(theta) + cx;
    ry1 = dx * sin(theta) + dy * cos(theta) + cy;

    // Point 2
    dx = x2 - cx; dy = y2 - cy;
    rx2 = dx * cos(theta) - dy * sin(theta) + cx;
    ry2 = dx * sin(theta) + dy * cos(theta) + cy;

    // Point 3
    dx = x3 - cx; dy = y3 - cy;
    rx3 = dx * cos(theta) - dy * sin(theta) + cx;
    ry3 = dx * sin(theta) + dy * cos(theta) + cy;

    // 7. Draw Original Triangle (White)
    setcolor(WHITE);
    line((int)round(x1), (int)round(y1), (int)round(x2), (int)round(y2));
    line((int)round(x2), (int)round(y2), (int)round(x3), (int)round(y3));
    line((int)round(x3), (int)round(y3), (int)round(x1), (int)round(y1));
    outtextxy((int)x2, (int)y2 - 20, (char*)"Original");

    // 8. Draw Rotated Triangle (Red)
    setcolor(RED);
    line((int)round(rx1), (int)round(ry1), (int)round(rx2), (int)round(ry2));
    line((int)round(rx2), (int)round(ry2), (int)round(rx3), (int)round(ry3));
    line((int)round(rx3), (int)round(ry3), (int)round(rx1), (int)round(ry1));
    outtextxy((int)rx2, (int)ry2 - 20, (char*)"Rotated");

    // 9. Draw Centroid (Blue)
    setcolor(BLUE);
    circle((int)round(cx), (int)round(cy), 3);

    getch();
    closegraph();
    return 0;
}