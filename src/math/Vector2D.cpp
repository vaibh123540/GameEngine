#include "math/Vector2D.h"

namespace math {

Vector2D::Vector2D(float x_, float y_) : x(x_), y(y_) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return { x + other.x, y + other.y };
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return { x - other.x, y - other.y };
}

Vector2D Vector2D::operator*(float scalar) const {
    return { x * scalar, y * scalar };
}

} // namespace math