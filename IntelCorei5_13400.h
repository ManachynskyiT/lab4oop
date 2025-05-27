#pragma once
#include "IntelCorei5.h"

class IntelCorei5_13400 : public IntelCorei5 {
    int efficiencyCores; // додано нову характеристику
public:
    IntelCorei5_13400();
    void ShowInfo() const override;
};
