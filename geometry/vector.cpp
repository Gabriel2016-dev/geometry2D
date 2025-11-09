#include "vector.h"
#include "point.h"
#include "utils.h"
#include <cmath>
#include <sstream>

Vector2f MakeV2f(float x, float y) {
    return {x, y};
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b) {
    return {b.x - a.x, b.y - a.y};
}

Vector2f Add(const Vector2f& a, const Vector2f& b) {
    return {a.x + b.x, a.y + b.y};
}

Vector2f Sub(const Vector2f& a, const Vector2f& b) {
    return {a.x - b.x, a.y - b.y};
}

Vector2f Scale(const Vector2f& v, float scalar) {
    return {v.x * scalar, v.y * scalar};
}

float Dot(const Vector2f& a, const Vector2f& b) {
    return a.x * b.x + a.y * b.y;
}

float Length(const Vector2f& v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

Vector2f Normalize(const Vector2f& v) {
    float len = Length(v);
    return len != 0 ? Vector2f{v.x / len, v.y / len} : Vector2f{0, 0};
}

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) {
    return {a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t};
}

float Determinant(const Vector2f& a, const Vector2f& b) {
    return a.x * b.y - a.y * b.x;
}

std::string ToString(const Vector2f& v) {
    std::ostringstream oss;
    oss << "(" << v.x << ", " << v.y << ")";
    return oss.str();
}
