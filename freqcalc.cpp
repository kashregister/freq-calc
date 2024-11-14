#include <iostream>
#include <array>
#include <string>
#include <cmath>

double returnRatio(int interval) {
    return pow(2,(double(interval) / 12));
}

int main()
{
    std::array<std::string, 12> twelveInterval = { "C" ,"C#" ,"D" ,"D#", "E","F" ,"F#" ,"G" ,"G#", "A", "A#","B" };
    int octave = 4;
    double c_freq = 261.626;

    for (int n = 0; n < 3; n++) {
        for (int i = 0; i < twelveInterval.size(); i++) {
            double ratio = returnRatio(i);
            double frequency = c_freq * ratio;
            std::cout << twelveInterval[i] << std::to_string(octave) << " = " << std::to_string(frequency);
            std::cout << "    ratio: " << i << "/12   =   ";
            printf("%.3f", ratio);
            std::cout<< std::endl;
        }
        c_freq *= 2;
        std::cout << std::endl;
        octave++;
    }
}