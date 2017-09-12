
#include "Vector3D.hpp"

Vector3D::Vector3D(){
    x = 0;
    y = 0;
}

Vector3D::Vector3D(float xV, float yV, float zV){
    x = xV;
    y = yV;
    z = zV;
}

Vector3D::~Vector3D() {
    
}

Vector3D Vector3D::operator-(const Vector3D& v){
    return Vector3D(x-v.getX(), y-v.getY(), z-v.getZ());
}

Vector3D Vector3D::operator+(const Vector3D& v){
    return Vector3D(x+v.getX(), y+v.getY(), z+v.getZ());
}

float Vector3D::operator*(const Vector3D& v){
    return (x * v.getX() + y * v.getY() + z * v.getZ());
}

bool Vector3D::operator=(const Vector3D& v){
    x = v.getX();
    y = v.getY();
    z = v.getZ();
    
    return true;
}

bool Vector3D::operator<(const Vector3D& v){
    return GetLength() < v.GetLength();
}

bool Vector3D::operator>(const Vector3D& v){
    return GetLength() > v.GetLength();
}

bool Vector3D::operator==(const Vector3D& v){
    return GetLength() == v.GetLength();
}

bool Vector3D::operator!=(const Vector3D& v){
    return GetLength() != v.GetLength();
}

Vector3D Vector3D::Add(const Vector3D& v) {
    return Vector3D(x+v.getX(), y+v.getY(), z+v.getZ());
}

Vector3D Vector3D::Sub(const Vector3D& v) {
    return Vector3D(x-v.getX(), y-v.getY(), z-v.getZ());
}

Vector3D Vector3D::ScalarMultiplication(float scalar){
    return Vector3D((scalar*x), (scalar*y), (scalar*z));
}

float Vector3D::DotProduct(const Vector3D& v) {
    return (x * v.getX() + y * v.getY() + z * v.getZ());
}

const float Vector3D::GetLength() const {
    return sqrt((x*x) + (y*y) + (z * z));
}


const float Vector3D::getX() const {
    return x;
}

const float Vector3D::getY() const {
    return y;
}

const float Vector3D::getZ() const {
    return z;
}

char* Vector3D::debugString() {
    char c[128];
    snprintf(c, sizeof(c),"X: %f Y: %f Z: %f", x, y, z);
    char *result = (char *)malloc(strlen(c)+1);
    strcpy(result,c);
    return result;
}
