//https://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing/how-does-it-work.html
#include <iostream>

//start: create flow between three volume elements over 10 seconds display every 1 second. element 1&2 are both flowing into 3. Bulk modulus is 1

class VolumeElement {
    public:
        int volume;
        int pressure;

        VolumeElement(int v, int p) {
            volume = v;
            pressure = p;
        }
    
};

int main() {
    VolumeElement volume1(100,1000);
    VolumeElement volume2(10,100);
    VolumeElement volume3(10,10);
    for (int t = 1; t <= 10; ++t) {
        std::cout << t << " ";
    }

    return 0;
}