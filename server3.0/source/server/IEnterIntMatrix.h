#pragma once
#include "IUnknown.h"
class IEnterIntMatrix: public IUnknown
{
    public:
    virtual void allocateMemoryForMatrix() = 0;
    virtual void clearMemoryForMatrix() = 0;
    virtual void enterMatrix(int n, int m) = 0;
    
};
