#pragma once

#include "slotvalue.h"
#include <map>
#include <vector>

class Frame
{
public:
    Frame();
protected:
    std::map<std::string, std::vector<SlotValue*>> slot;
};

class MaterialObject : public Frame
{
public:
    MaterialObject()
    {
        // Physical properties
        for (int i = 0; i < 3; i++)
            slot["coord"].push_back(new Value<float>());
        for (int i = 0; i < 2; i++)
            slot["bounds"].push_back(new Value<float>());

        // Semantic properties
        slot["class"].push_back(new Value<int>());
        slot["moveable"].push_back(new Value<bool>());

        // Relations
        slot["near"].push_back(new Pointer());
        slot["contain"].push_back(new Pointer());

        // Rules
        slot["movement"].push_back(new Rule());
    }
private:
    
};

class Room : public Frame
{

};