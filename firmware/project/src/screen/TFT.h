#ifndef _TFT_H
#define _TFT_H
#include <MCUFRIEND_kbv.h>
#include <TouchScreen.h>

MCUFRIEND_kbv& buildTFT();
void TFT_setup();
void TFT_updateScreenOrientation();

#endif