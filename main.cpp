//https://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing/how-does-it-work.html
#include <iostream>
#include <string>

//start: create flow between three volume elements over 10 seconds display every 1 second. element 1&2 are both flowing into 3. Bulk modulus is const at 1

class VolumeElement {
    public:
        int volume;
        int pressure;
        int flowrate;
        int delta_p;
        std::string objectName;

        VolumeElement(int v, int p, std::string name) {
            volume = v;
            pressure = p;
            objectName=name;
    };
        void calculate_pressure(){
            pressure=pressure+(1*.6*flowrate/volume);
            std::cout <<objectName<< pressure<<std::endl;
        };
};

int main() {
    VolumeElement volume1(100,1000,"1 ");
    VolumeElement volume2(10,100,"2 ");
    VolumeElement volume3(10,10,"3 ");
    for (int t = .6; t <= 200; ++t) {
        volume1.flowrate=-volume1.pressure+volume3.pressure;
        volume2.flowrate=-volume2.pressure+volume3.pressure;
        volume3.flowrate=-(volume1.flowrate+volume2.flowrate);

        volume1.calculate_pressure();
        volume2.calculate_pressure();
        volume3.calculate_pressure();
        }

    return 0;
};