#pragma once

#include "../Object.hpp"

class InteractableObject : public Object
{
public:
    /// @brief Print the object
    virtual void Print() = 0;

    /// @brief Interact with the object
    virtual void Interact() = 0;
};