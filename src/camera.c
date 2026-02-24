#include <adrift/camera.h>

void CameraInit(struct Camera* camera)
{
    camera->x = 0;
    camera->y = 0;
    camera->z = 1.0;
}

void MoveTo3D(struct Camera* camera, double x, double y, double z)
{
    camera->x = x;
    camera->y = y;
    if (z >= 1.0) { camera->z = z; }
}

void MoveTo2D(struct Camera* camera, double x, double y)
{
    camera->x = x;
    camera->y = y;
}

void MoveToX(struct Camera* camera, double x) { camera->x = x; }

void MoveToY(struct Camera* camera, double y) { camera->y = y; }

void MoveToZ(struct Camera* camera, double z)
{
    if (z >= 1) { camera->z = z; }
}

void MoveBy3D(struct Camera* camera, double dx, double dy, double dz)
{
    camera->x += dx;
    camera->y += dy;
    camera->z += dz;
    if (camera->z < 1.0) { camera->z = 1.0; }
}

void MoveBy2D(struct Camera* camera, double dx, double dy)
{
    camera->x += dx;
    camera->y += dy;
}

void MoveByX(struct Camera* camera, double dx) { camera->x += dx; }

void MoveByY(struct Camera* camera, double dy) { camera->y += dy; }

void MoveByZ(struct Camera* camera, double dz)
{
    camera->z += dz;
    if (camera->z < 1.0) { camera->z = 1.0; }
}
