#pragma once

class SlotValue
{
public:
    SlotValue();
private:
    //virtual void callBack() = 0;
};

class Value : public SlotValue
{

};

class Rule : public SlotValue
{

};

class Pointer : public SlotValue
{

};