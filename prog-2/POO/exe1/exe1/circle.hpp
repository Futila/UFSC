#include <iostream>


using namespace std;

class Circle {
private:
    float ratio;

public:
    void SetRatio(float valor);
    float GetRatio();

    float CalcArea();
};
