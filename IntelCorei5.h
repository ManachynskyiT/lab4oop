#pragma once
#include "IntelCore.h"

class IntelCorei5 : public IntelCore {
public:
    IntelCorei5(string model, double frequency, int cores);
    void ShowInfo() const override;
};

