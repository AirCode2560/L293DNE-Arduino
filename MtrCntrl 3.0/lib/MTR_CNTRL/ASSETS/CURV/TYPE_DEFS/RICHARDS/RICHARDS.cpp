#ifndef RICHARDS_CURV_H
#define RICHARDS_CURV_H

#include <CURV.h>

class RichardsCurv : public CURV
{
private:
    float G; // Growth Rate
    float A; // Asymtote
    float I; // Inflection
public:
    RichardsCurv(float G, float A, float I); // Setup
    void set(float G, float A, float I);     // Dynamic Change
    float PNT(int req_point, int req_scale) override;
};

#endif