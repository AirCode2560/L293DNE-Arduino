//Main Curve Class
#ifndef CURV_H
#define CURV_H
#include <Arduino.h>
class CURV
{
public:
    virtual float PNT(int req_point, int req_scale);
    virtual ~CURV() {}
};

#endif