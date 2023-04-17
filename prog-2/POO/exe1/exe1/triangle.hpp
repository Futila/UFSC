#include <iostream>
#include <math.h>


using namespace std;

class Triangle {
private:
    float e1, e2, e3;
    float sp;

private :
    void CalcSemiperimeter();
public:
    void SetEdges(float v1, float v2, float v3);

    float CalcArea();

};
