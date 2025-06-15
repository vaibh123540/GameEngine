#pragma once

namespace math {

struct Vector2D {
    float x, y;

    // Constructors
    Vector2D(float x = 0.0f, float y = 0.0f);

    // Operator overloads
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(float scalar) const;
};

} // namespace math