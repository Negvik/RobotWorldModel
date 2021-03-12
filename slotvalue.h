#pragma once

class SlotValue
{
public:
    SlotValue();
private:
    //virtual void callBack() = 0;
};

template <typename T> 
class Value : public SlotValue
{
    T data;
};

class Rule : public SlotValue
{

};

class Pointer : public SlotValue
{

};