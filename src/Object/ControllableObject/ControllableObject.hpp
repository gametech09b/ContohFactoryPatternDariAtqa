#pragma once

#include "../Object.hpp"

class ControllableObject : public Object
{
public:
    /// @brief Print the object
    virtual void Print() = 0;

    /// @brief Move the object
    virtual void Move() = 0;

    /// @brief Action of the object
    virtual void Action() = 0;
};