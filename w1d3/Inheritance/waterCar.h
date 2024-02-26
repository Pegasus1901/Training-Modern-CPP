#ifndef WATERCAR_H
#define WATERCAR_H

class WaterCar
{
private:
    int _battery{0};
    float _horsPower{3000.0f};
public:
    WaterCar()=delete;
    WaterCar(WaterCar&)=delete;
    WaterCar(WaterCar&&)=delete;
    WaterCar operator=(WaterCar&)=delete;
    WaterCar operator=(WaterCar&&)=delete;
    WaterCar (int battery);

    ~WaterCar()=default;
};

#endif // WATERCAR_H
