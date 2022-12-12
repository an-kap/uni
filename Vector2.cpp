#include "Vector2.h"
#include <iostream>
#include <cmath>

#define M_PI 3.1415926


Vector2::Vector2() : x(0.0), y(0.0){};
Vector2::Vector2(double x, double y) : x(x), y(y){};

double Vector2::getLen() {
    return std::sqrt(x * x + y * y);
}

double Vector2::getPhi() {
    return std::atan2(y, x);
}

Vector2 Vector2::operator+(const Vector2& vector) const {
    return Vector2(x + vector.x, y + vector.y);
}

double Vector2::getPhiDeg() {
    return getPhi() * 180 / M_PI;
}

void Vector2::setX(int x) {
    x = x;
}

double Vector2::getX() {
    return x;
}

void Vector2::setY(int y) {
    y = y;
}

double Vector2::getY() {
    return y;
}

Vector2 Vector2::polar() {
    double t1 = getPhi();
    double t2 = getLen();
    return Vector2(t1, t2);
}

void Vector2::operator+=(const Vector2& vector) {
    x += vector.x;
    y += vector.y;
}

void Vector2::operator-=(const Vector2& vector) {
    x -= vector.x;
    y -= vector.y;
}

Vector2 Vector2::operator-(const Vector2& vector) const {
    return Vector2(x - vector.x, y - vector.y);
}

void Vector2::operator/=(const double N) {
    if (N != 0) {
        x /= N;
        y /= N;
    }
}

Vector2 Vector2::operator/(const double N) const {
    if (N != 0) return Vector2(x / N, y / N);

}

void Vector2::operator*=(const double N) {
    x *= N;
    y *= N;
}

Vector2 Vector2::operator*(const double N) const {
    return Vector2(x * N, y * N);
}

bool Vector2::operator==(const Vector2& vector) const {
    return x == vector.x && y == vector.y;
}

bool Vector2::operator!=(const Vector2& vector) const {
    return x != vector.x or y != vector.y;
}

double Vector2::kos_scalar_product(const Vector2& vector) const {
    return x * vector.y - vector.x * y;
}

double Vector2::scalar_product(const Vector2& vector) const {
    return x * vector.x + y * vector.y;
}

void Vector2::norm() {
    double len = sqrt(x * x + y * y);
    x /= len;
    y /= len;
}


void Vector2::change_phi(double phi) {
    phi = phi / 180 * M_PI;
    double t1 = x * cos(phi) - y * sin(phi);
    double t2 = x * sin(phi) + y * cos(phi);
    x = t1;
    y = t2;
}

void Vector2::change_len(const double N) {
    double len = sqrt(x * x + y * y);
    x /= len;
    y /= len;
    x *= N;
    y *= N;
}

double Vector2::cos_phi(const Vector2& vector) const {
    double a = x * vector.x + y * vector.y;
    double b = sqrt(x * x + y * y) * sqrt(vector.x * vector.x + vector.y * vector.y);
    return a / b;
}
