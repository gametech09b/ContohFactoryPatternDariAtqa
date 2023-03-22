#pragma once

#include "../InteractableObject.hpp"
#include <iostream>

using namespace std;

class Button : public InteractableObject
{
public:
    /// @brief Constructor
    Button();

    /// @brief Print the object
    virtual void Print() override;

    /// @brief Interact with the object
    virtual void Interact() override;
};