#pragma once

#include "../Object.hpp"

// ControllableObject Import
#include "../ControllableObject/Rabbid/Rabbid.hpp"

// InteractableObject Import
#include "../InteractableObject/Button/Button.hpp"

class ObjectFactory
{
public:
    /// @brief Create a new object
    /// @param type The type of the object
    /// @return The object
    static Object *CreateObject(string type);
};