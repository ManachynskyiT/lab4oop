#pragma once
#include "Processor.h"

class IntelCore : public Processor {
public:
    IntelCore(string model, double frequency, int cores);
    void ShowInfo() const override;
};

