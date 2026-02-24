#ifndef CAMERA_H
#define CAMERA_H

struct Camera
{
    double x;
    double y;
    double z; // >= 1.0
};

void CameraInit(struct Camera* camera);

void MoveCameraTo3D(struct Camera* camera, double x, double y, double z);
void MoveCameraTo2D(struct Camera* camera, double x, double y);

void MoveCameraToX(struct Camera* camera, double x);
void MoveCameraToY(struct Camera* camera, double y);
void MoveCameraToZ(struct Camera* camera, double z);

void MoveCameraBy3D(struct Camera* camera, double dx, double dy, double dz);
void MoveCameraBy2D(struct Camera* camera, double dx, double dy);

void MoveCameraByX(struct Camera* camera, double dx);
void MoveCameraByY(struct Camera* camera, double dy);
void MoveCameraByZ(struct Camera* camera, double dz);

#endif
