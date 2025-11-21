#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   int X = getmaxx();
   int Y = getmaxy();

   // Draw axes
   line(0, Y / 2, X, Y / 2);
   line(X / 2, 0, X / 2, Y);

   int mx = X / 2;
   int my = Y / 2;

   // Original triangle points
   int x1 = 50, y1 = 100;
   int x2 = 90, y2 = 150;
   int x3 = 125, y3 = 100;

   line(mx + x1, my - y1, mx + x3, my - y3);
   line(mx + x3, my - y3, mx + x2, my - y2);
   line(mx + x2, my - y2, mx + x1, my - y1);

   // Scaling factors
   float sx = 2.0; // Change as needed
   float sy = 2.0;

   // Calculate centroid of the triangle
   float cx = (x1 + x2 + x3) / 3.0;
   float cy = (y1 + y2 + y3) / 3.0;

   int dx1 = cx + (x1 - cx) * sx;
   int dy1 = cy + (y1 - cy) * sy;

   int dx2 = cx + (x2 - cx) * sx;
   int dy2 = cy + (y2 - cy) * sy;

   int dx3 = cx + (x3 - cx) * sx;
   int dy3 = cy + (y3 - cy) * sy;

   line(mx + dx1, my - dy1, mx + dx3, my - dy3);
   line(mx + dx3, my - dy3, mx + dx2, my - dy2);
   line(mx + dx2, my - dy2, mx + dx1, my - dy1);

   getch();
   closegraph();
}
