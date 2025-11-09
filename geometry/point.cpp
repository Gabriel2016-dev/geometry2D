#include "point.h"
#include "vector.h"
#include "utils.h"
#include <cmath>
#include <sstream>

Point2f MakeP2f(float x, float y) {
    return {x, y};
}

Point2f Translate(const Point2f& p, float dx, float dy) {
    return {p.x + dx, p.y + dy};
}

Point2f Translate(const Point2f& p, const Vector2f& v) {
    return {p.x + v.x, p.y + v.y};
}

Point2f Scale(const Point2f& p, float sx, float sy) {
    return {p.x * sx, p.y * sy};
}

Point2f Scale(const Point2f& p, const Vector2f& s) {
    return {p.x * s.x, p.y * s.y};
}

Point2f Rotate(const Point2f& p, float angleDegree) {
    float rad = angleDegree * M_PI / 180.0f;
    float cosA = std::cos(rad);
    float sinA = std::sin(rad);
    return {p.x * cosA - p.y * sinA, p.x * sinA + p.y * cosA};
}

std::string ToString(const Point2f& p) {
    std::ostringstream oss;
    oss << "(" << p.x << ", " << p.y << ")";
    return oss.str();
}
