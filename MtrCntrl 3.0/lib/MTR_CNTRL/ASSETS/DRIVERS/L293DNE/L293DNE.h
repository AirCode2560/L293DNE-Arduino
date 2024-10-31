#ifndef L293DNE_h
#define L293DNE_h

#include <MTR_CNTRL.h>

class L293DNE : public MTR
{
private:
    struct L293
    {
        byte PWM_pin;
        byte DIRA_pin;
        byte DIRB_pin;
        struct CUR
        {
            char DIR;
            byte SPD;
        } CUR;

    } L293;

public:
    L293DNE(byte PWM, byte DIRA, byte DIRB); //Set Pins
    void SPD(byte req_spd) override; //Set Speed
    void DIR(char req_dir) override; //Set Direction
};
#endif