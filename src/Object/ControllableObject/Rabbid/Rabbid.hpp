#pragma once

#include "../ControllableObject.hpp"
#include <iostream>

using namespace std;

class Rabbid : public ControllableObject
{
public:
    /// @brief Constructor
    Rabbid();

    /// @brief Print the object
    virtual void Print() override;

    /// @brief Move the object
    virtual void Move() override;

    /// @brief Action of the object
    virtual void Action() override;
};