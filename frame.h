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
        slot["coordX"].push_back(new Value());
        slot["coordY"].push_back(new Value());
        slot["coordZ"].push_back(new Value());

        // Semantic properties
        slot["class"].push_back(new Value());
        for (int i = 0; i < 2; i++)
            slot["bounds"].push_back(new Value());

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