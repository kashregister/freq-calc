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
    double a_freq;
    std::cout << "Enter the A4 freq (standard is 440)" << std::endl;
    std::cin >> a_freq;
    double c_freq = a_freq / 1.6817900361584857774074442142601;
    
    for (int n = 0; n < 5; n++) {
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
