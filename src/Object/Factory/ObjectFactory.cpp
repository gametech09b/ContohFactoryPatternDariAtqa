#include "ObjectFactory.hpp"

Object *ObjectFactory::CreateObject(string type)
{
    if (type == "Button")
    {
        return new Button();
    }
    else if (type == "Rabbid")
    {
        return new Rabbid();
    }
    else
    {
        return nullptr;
    }
}