//Main Motor Control Class
#ifndef MTR_CNTRL_H
#define MTR_CNTRL_H
#include <Arduino.h>
class MTR
{
public:
    virtual void SPD(byte req_spd);
    virtual void DIR(char req_dir);
    virtual ~MTR() {}
};
#endif