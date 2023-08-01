#include "ColorPair.h"
#include <iostream>
#include "TelCoColorCoderUtils.h"

namespace TelCoColorCoder {

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void printColorCodesManual() {
        std::cout << "-------------------------------------------------------------------------------------------------\n";
        std::cout << "------------------------------TelCo Color Codes Manual-------------------------------------------\n";
        std::cout << "-------------------------------------------------------------------------------------------------\n\n";

        int colorPairCode = 0;

        std::cout << "-------------------------------------------\n";
        std::cout << "| MajorColor | MinorColor | ColorPairCode |\n";
        std::cout << "-------------------------------------------\n";

        for (int majorColor = 0; majorColor < numberOfMajorColors; ++majorColor) {
            for (int minorColor = 0; minorColor < numberOfMinorColors; ++minorColor) {
                colorPairCode = GetPairNumberFromColor(MajorColor(majorColor), MinorColor(minorColor));

                std::cout << "| " << MajorColorNames[majorColor] << " | " << MinorColorNames[minorColor];
                std::cout << " | " << colorPairCode << " |\n";
            }
        }

        std::cout << "-------------------------------------------\n";
    }
}
