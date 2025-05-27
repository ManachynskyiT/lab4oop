#include "IntelCorei5_9400F.h"

IntelCorei5_9400F::IntelCorei5_9400F()
    : IntelCorei5("i5-9400F", 2.9, 6) {}

void IntelCorei5_9400F::ShowInfo() const {
    cout << "Intel Core i5-9400F: 6 cores, no hyper-threading, base freq = "
         << frequency << "GHz\n";
}

