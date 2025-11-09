#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"
#include <iostream>

int main() {
    // ------------------------
    // POINT2F TESTS
    // ------------------------
    Print("=== Point2f Tests ===");

    Point2f p = MakeP2f(2.0f, 3.0f);
    Print("Original point:", ToString(p));

    Point2f pTrans = Translate(p, 1.0f, -1.0f);
    Print("Translated by (1, -1):", ToString(pTrans));

    Vector2f v = MakeV2f(2.0f, 3.0f);
    Point2f pTransV = Translate(p, v);
    Print("Translated by vector (2,3):", ToString(pTransV));

    Point2f pScaled = Scale(p, 2.0f, 0.5f);
    Print("Scaled by (2,0.5):", ToString(pScaled));

    Point2f pScaledV = Scale(p, v);
    Print("Scaled by vector (2,3):", ToString(pScaledV));

    Point2f pRot90 = Rotate(p, 90.0f);
    Print("Rotated 90 degrees:", ToString(pRot90));

    Point2f pRot45 = Rotate(p, 45.0f);
    Print("Rotated 45 degrees:", ToString(pRot45));

    // ------------------------
    // VECTOR2F TESTS
    // ------------------------
    Print("\n=== Vector2f Tests ===");

    Vector2f v1 = MakeV2f(1.0f, 2.0f);
    Vector2f v2 = MakeV2f(3.0f, 4.0f);

    Print("v1:", ToString(v1));
    Print("v2:", ToString(v2));

    Vector2f vAdd = Add(v1, v2);
    Print("v1 + v2:", ToString(vAdd));

    Vector2f vSub = Sub(v1, v2);
    Print("v1 - v2:", ToString(vSub));

    Vector2f vScaled = Scale(v1, 3.0f);
    Print("v1 scaled by 3:", ToString(vScaled));

    float dot = Dot(v1, v2);
    Print("Dot product v1·v2:", dot);

    float len = Length(v1);
    Print("Length of v1:", len);

    Vector2f vNorm = Normalize(v1);
    Print("Normalized v1:", ToString(vNorm));

    Vector2f vLerp = Lerp(v1, v2, 0.5f);
    Print("Lerp v1->v2 (t=0.5):", ToString(vLerp));

    float det = Determinant(v1, v2);
    Print("Determinant of v1 and v2:", det);

    // ------------------------
    // POINT <-> VECTOR
    // ------------------------
    Print("\n=== Point <-> Vector Tests ===");

    Vector2f vFromPoints = MakeV2f(p, pTrans);
    Print("Vector from p to pTrans:", ToString(vFromPoints));

    // Pause so console doesn't close immediately
    std::cout << "\nPress Enter to exit...";
    std::cin.get();

    return 0;
}
