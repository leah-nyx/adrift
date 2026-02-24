#include <adrift/camera.h>

void CameraInit(struct Camera* camera)
{
    camera->x = 0;
    camera->y = 0;
    camera->z = 1.0;
}

void MoveCameraTo3D(struct Camera* camera, double x, double y, double z)
{
    camera->x = x;
    camera->y = y;
    if (z >= 1.0) { camera->z = z; }
}

void MoveCameraTo2D(struct Camera* camera, double x, double y)
{
    camera->x = x;
    camera->y = y;
}

void MoveCameraToX(struct Camera* camera, double x) { camera->x = x; }

void MoveCameraToY(struct Camera* camera, double y) { camera->y = y; }

void MoveCameraToZ(struct Camera* camera, double z)
{
    if (z >= 1) { camera->z = z; }
}

void MoveCameraBy3D(struct Camera* camera, double dx, double dy, double dz)
{
    camera->x += dx;
    camera->y += dy;
    camera->z += dz;
    if (camera->z < 1.0) { camera->z = 1.0; }
}

void MoveCameraBy2D(struct Camera* camera, double dx, double dy)
{
    camera->x += dx;
    camera->y += dy;
}

void MoveCameraByX(struct Camera* camera, double dx) { camera->x += dx; }

void MoveCameraByY(struct Camera* camera, double dy) { camera->y += dy; }

void MoveCameraByZ(struct Camera* camera, double dz)
{
    camera->z += dz;
    if (camera->z < 1.0) { camera->z = 1.0; }
}
