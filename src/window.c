#include <adrift/window.h>

#include <float.h>

void InitWindow(struct Window* window)
{
    MoveWindowTo3D(window, 0, 0, 1);

    ResizeWindowTo2D(window, 800, 500);
}

void MoveWindowTo3D(struct Window* window, double x, double y, double z)
{
    MoveWindowToX(window, x);
    MoveWindowToY(window, y);
    MoveWindowToZ(window, z);
}

void MoveWindowTo2D(struct Window* window, double x, double y)
{
    MoveWindowToX(window, x);
    MoveWindowToY(window, y);
}

void MoveWindowToX(struct Window* window, double x) { window->x = x; }

void MoveWindowToY(struct Window* window, double y) { window->y = y; }

void MoveWindowToZ(struct Window* window, double z)
{
    if (z <= 0.0) { window->z = DBL_MIN; }
    else if (z >= 1.0) { window->z = 1.0; }
    else
    {
        window->z = z;
    }
}

void MoveWindowBy3D(struct Window* window, double dx, double dy, double dz)
{
    MoveWindowByX(window, dx);
    MoveWindowByY(window, dy);
    MoveWindowByZ(window, dz);
}

void MoveWindowBy2D(struct Window* window, double dx, double dy)
{
    MoveWindowByX(window, dx);
    MoveWindowByY(window, dy);
}

void MoveWindowByX(struct Window* window, double dx) { window->x += dx; }

void MoveWindowByY(struct Window* window, double dy) { window->y += dy; }

void MoveWindowByZ(struct Window* window, double dz)
{
    window->z += dz;
    if (window->z <= 0.0) { window->z = DBL_MIN; }
    else if (window->z >= 1.0) { window->z = 1.0; }
}

void ResizeWindowTo2D(struct Window* window, double width, double height)
{
    ResizeWindowToWidth(window, width);
    ResizeWindowToHeight(window, height);
}

void ResizeWindowToWidth(struct Window* window, double width)
{
    if (width > 0) { window->width = width; }
}

void ResizeWindowToHeight(struct Window* window, double height)
{
    if (height > 0) { window->height = height; }
}

void ResizeWindowBy2D(struct Window* window, double dwidth, double dheight)
{
    ResizeWindowByWidth(window, dwidth);
    ResizeWindowByHeight(window, dheight);
}

void ResizeWindowByWidth(struct Window* window, double dwidth)
{
    if (window->width + dwidth > 0) { window->width += dwidth; }
}

void ResizeWindowByHeight(struct Window* window, double dheight)
{
    if (window->height + dheight > 0) { window->height += dheight; }
}
