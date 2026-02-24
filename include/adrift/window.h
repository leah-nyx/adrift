#ifndef WINDOW_H
#define WINDOW_H

struct Window
{
    double x;
    double y;
    double z; // 0 < z <= 1.0

    double width;
    double height;
};

void InitWindow(struct Window* window);

void MoveWindowTo3D(struct Window* window, double x, double y, double z);
void MoveWindowTo2D(struct Window* window, double x, double y);

void MoveWindowToX(struct Window* window, double x);
void MoveWindowToY(struct Window* window, double y);
void MoveWindowToZ(struct Window* window, double z);

void MoveWindowBy3D(struct Window* window, double dx, double dy, double dz);
void MoveWindowBy2D(struct Window* window, double dx, double dy);

void MoveWindowByX(struct Window* window, double dx);
void MoveWindowByY(struct Window* window, double dy);
void MoveWindowByZ(struct Window* window, double dz);

void ResizeWindowTo2D(struct Window* window, double width, double height);

void ResizeWindowToWidth(struct Window* window, double width);
void ResizeWindowToHeight(struct Window* window, double height);

void ResizeWindowBy2D(struct Window* window, double dwidth, double dheight);

void ResizeWindowByWidth(struct Window* window, double dwidth);
void ResizeWindowByHeight(struct Window* window, double dheight);

#endif
