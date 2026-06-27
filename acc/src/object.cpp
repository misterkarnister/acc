#include "object.h"

Object::Object()
{
    render_square={0.0, 0.0, 0.0, 0.0};
}

Object::~Object()
{
    //dtor
}

Object::Object(const Object& other)
{
    //copy ctor
}

Object& Object::operator=(const Object& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
