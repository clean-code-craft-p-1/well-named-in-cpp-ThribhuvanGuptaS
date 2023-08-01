#pragma once
#ifndef COLORPAIR_H
#define COLORPAIR_H
#include "TelCoColorCoderVars.h"
#include <string>

namespace TelCoColorCoder
{
    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor) :
            majorColor(major), minorColor(minor)
        {}
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };
}
#endif
