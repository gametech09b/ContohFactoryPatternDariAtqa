#include "./Object/Factory/ObjectFactory.hpp"

int main()
{
    Rabbid *rabbid = dynamic_cast<Rabbid *>(ObjectFactory::CreateObject("Rabbid"));
    rabbid->Print();
    rabbid->Move();
    rabbid->Action();

    Button *button = dynamic_cast<Button *>(ObjectFactory::CreateObject("Button"));
    button->Print();
    button->Interact();

    return 0;
}