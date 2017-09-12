

#ifndef Vector3D_hpp
#define Vector3D_hpp

#include <stdio.h>
#include <math.h>
#include <string>
#include <stdlib.h> 
#endif


class Vector3D {
    
public:
    
    Vector3D();
    Vector3D(float x, float y, float z);
    
     ~Vector3D();
    
    
    Vector3D operator+(const Vector3D& v);
    Vector3D operator-(const Vector3D& v);
    float operator*(const Vector3D& v);
    Vector3D operator+=(const Vector3D& v);
    Vector3D operator-=(const Vector3D& v);
    Vector3D operator*=(const Vector3D& v);
    bool operator=(const Vector3D& v);
    bool operator<(const Vector3D& v);
    bool operator>(const Vector3D& v);
    bool operator==(const Vector3D& v);
    bool operator!=(const Vector3D& v);
    
    const float GetLength() const ;
    Vector3D Add(const Vector3D& v);
    Vector3D Sub(const Vector3D& v);
    Vector3D ScalarMultiplication(float scalar);
    float DotProduct(const Vector3D& v);
    
    const float getX() const ;
    const float getY() const ;
    const float getZ() const ;
    
    char* debugString();
    
private:
    float x, y, z;
    
};
