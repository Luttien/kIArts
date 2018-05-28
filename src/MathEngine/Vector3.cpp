#include "Vector3.h"

template <class T>
Vector3<T>::Vector3() {
    x = 0;
    y = 0;
    z = 0;
}

template <class T>
Vector3<T>::Vector3(T x1, T y1, T z1) {
    x = x1;
    y = y1;
    z = z1;
}

template <class T>
Vector3<T>::~Vector3() {
    
}

template <class T>
void Vector3<T>::set(T x1, T y1, T z1) {
    x = x1;
    y = y1;
    z = z1;
}

template <class T>
void Vector3<T>::set(Vector3<T> v) {
    x = v.x;
    y = v.y;
    z = v.z;
}

template <class T>
Vector3<T> Vector3<T>::normalize() {
    Vector3<T> vector;
    T length = x * x + y * y + z * z;
    length = sqrt(length);

    if (length != 0) {
        vector.x = (T) x / length;
        vector.y = (T) y / length;
        vector.z = (T) y / length;
    }
    return vector;
}

template <class T>
Vector3<T> Vector3<T>::getDistanceTo(Vector3<T> other) {
    return Vector3<T>(x - other.x, y - other.y, z - other.z);
}

template <class T>
Vector3<T> Vector3<T>::rotateFromPoi32(f32 r, f32 phi, f32 theta) {
    Vector3<T> poi32;
    phi = phi * (PI / 180);
    theta = theta * (PI / 180);

    poi32.x = x + (r *  sinf(phi) * cosf(theta));
    poi32.y = y + (r * -sinf(theta));
    poi32.z = z + (r *  cosf(phi) * cosf(theta));

    return poi32;
}

template <class T>
bool Vector3<T>::operator == (const Vector3<T> &p) const {
    return x == p.x && y == p.y && z == p.z;
}

template <class T>
bool Vector3<T>::operator != (const Vector3<T> &p) const {
    return x != p.x || y != p.y || z != p.z;
}

template <class T>
Vector3<T> Vector3<T>::operator + (const Vector3<T> &p) const {
    return Vector3<T>(x + p.x, y + p.y, z + p.z);
}

template <class T>
Vector3<T> Vector3<T>::operator + (const f32 &p) const {
    return Vector3<T>(x + p, y + p, z + p);
}

template <class T>
Vector3<T> Vector3<T>::operator - (const Vector3<T> &p) const {
    return Vector3<T>(x - p.x, y - p.y, z - p.z);
}

template <class T>
Vector3<T> Vector3<T>::operator - (const f32 &p) const {
    return Vector3<T>(x - p, y - p, z - p);
}

template <class T>
Vector3<T> Vector3<T>::operator * (const Vector3<T> &p) const {
    return Vector3<T>(x * p.x, y * p.y, z * p.z);
}

template <class T>
Vector3<T> Vector3<T>::operator * (const f32 &p) const {
    return Vector3<T>(x * p, y * p, z * p);
}

template <class T>
Vector3<T> Vector3<T>::operator / (const Vector3<T> &p) const {
    return Vector3<T>(x / p.x, y / p.y, z / p.z);
}

template <class T>
Vector3<T> Vector3<T>::operator / (const f32 &p) const {
    return Vector3<T>(x / p, y / p, z / p);
}

template <class T>
Vector3<T>::Vector3(irr::core::vector3di v) {
    x = v.X;
    y = v.Y;
    z = v.Z;
}

template <class T>
Vector3<T>::Vector3(irr::core::vector3df v) {
    x = v.X;
    y = v.Y;
    z = v.Z;
}

template <class T>
void Vector3<T>::set(irr::core::vector3di v) {
    x = v.X;
    y = v.Y;
    z = v.Z;
}

template <class T>
void Vector3<T>::set(irr::core::vector3df v) {
    x = v.X;
    y = v.Y;
    z = v.Z;
}

template <class T>
irr::core::vector3di Vector3<T>::getVectorI() {
    return irr::core::vector3di(x, y, z);
}

template <class T>
irr::core::vector3df Vector3<T>::getVectorF() {
    return irr::core::vector3df(x, y, z);
}

template class Vector3<i32>;
template class Vector3<f32>; 