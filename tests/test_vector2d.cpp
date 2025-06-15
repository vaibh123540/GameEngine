#include "math/Vector2D.h"
#include <gtest/gtest.h>

using math::Vector2D;

TEST(Vector2D, Addition) {
    Vector2D a{1, 2}, b{3, 4};
    auto c = a + b;
    EXPECT_FLOAT_EQ(c.x, 4.0f);
    EXPECT_FLOAT_EQ(c.y, 6.0f);
}

TEST(Vector2D, ScalarMultiplication) {
    Vector2D v{2, -3};
    auto w = v * 2.5f;
    EXPECT_FLOAT_EQ(w.x, 5.0f);
    EXPECT_FLOAT_EQ(w.y, -7.5f);
}