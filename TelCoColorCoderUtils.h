#pragma once
#ifndef TELCOCOLORCODERUTILS_H
#define TELCOCOLORCODERUTILS_H
#include "ColorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void printColorCodesManual();
}
#endif
