#ifndef VECTOR3_H
#define VECTOR3_H

#include <irrlicht/irrlicht.h>
#include "Types.h"

#include <irrlicht/irrlicht.h>

#define PI 3.14159265

template <class T>

class Vector3 {

    public:
        T x, y, z;
        
        Vector3();
        Vector3(T x1, T y1, T z1);
        virtual ~Vector3();

        void set(T x1, T y1, T z1);
        void set(Vector3<T> v);

        Vector3<T> normalize();
        f32 getDistanceTo(Vector3<T> other);
        
        bool operator ==(const Vector3<T> &p) const;
        bool operator !=(const Vector3<T> &p) const;
        Vector3<T> operator +(const Vector3<T> &p) const;
        Vector3<T> operator +(const f32 &num) const;
        Vector3<T> operator -(const Vector3<T> &p) const;
        Vector3<T> operator -(const f32 &num) const;
        Vector3<T> operator *(const Vector3<T> &p) const;
        Vector3<T> operator *(const f32 &num) const;
        Vector3<T> operator /(const Vector3<T> &p) const;
        Vector3<T> operator /(const f32 &num) const;

        Vector3(irr::core::vector3di v);
        Vector3(irr::core::vector3df v);
        void set(irr::core::vector3di v);
        void set(irr::core::vector3df v);
        irr::core::vector3di getVectorI();
        irr::core::vector3df getVectorF();
    private:
};

#endif