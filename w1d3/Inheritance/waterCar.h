#ifndef WATERCAR_H
#define WATERCAR_H

class WaterCar
{
private:
    int battery{90};
    float horsPower{3000.0f};
public:
    WaterCar()=delete;
    WaterCar(WaterCar&)=delete;
    WaterCar(WaterCar&&)=delete;
    WaterCar operator=(WaterCar&)=delete;
    WaterCar operator=(WaterCar&&)=delete;

    ~WaterCar()=default;
};

#endif // WATERCAR_H
