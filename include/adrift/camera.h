#ifndef CAMERA_H
#define CAMERA_H

struct Camera
{
    double x;
    double y;
    double z; // >= 1.0
};

void CameraInit(struct Camera* camera, double screenWidth, double screenHeight);

void MoveTo3D(struct Camera* camera, double x, double y, double z);
void MoveTo2D(struct Camera* camera, double x, double y);

void MoveToX(struct Camera* camera, double x);
void MoveToY(struct Camera* camera, double y);
void MoveToZ(struct Camera* camera, double z);

void MoveBy3D(struct Camera* camera, double dx, double dy, double dz);
void MoveBy2D(struct Camera* camera, double dx, double dy);

void MoveByX(struct Camera* camera, double dx);
void MoveByY(struct Camera* camera, double dy);
void MoveByZ(struct Camera* camera, double dz);

#endif