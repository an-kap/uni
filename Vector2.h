
#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double x, double y);

   Vector2 polar();
    double getX();
    double getY();
    double getLen();
    double getPhi();
    void setY(int y);
    void setX(int x);
    void norm();
    void change_len(const double N);
    void change_phi(double phi);
    void operator-=(const Vector2& vector);
    void operator+=(const Vector2& vector);
    void operator*=(const double N);
    void operator/=(const double N);
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator*(const double N) const;
    Vector2 operator/(const double N) const;
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;
    double kos_scalar_product(const Vector2& vector) const;
    double scalar_product(const Vector2& vector) const;
    double cos_phi(Vector2& vector) const;
    double getPhiDeg();
    double cos_phi(const Vector2& vector) const;
};

#endif //HELLO_WORLD_VECTOR2_H

