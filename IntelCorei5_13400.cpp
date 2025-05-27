#include "IntelCorei5_13400.h"

IntelCorei5_13400::IntelCorei5_13400()
    : IntelCorei5("i5-13400", 2.5, 6), efficiencyCores(4) {}

void IntelCorei5_13400::ShowInfo() const {
    cout << "Intel Core i5-13400: 6 performance cores + "
         << efficiencyCores << " efficiency cores, total: "
         << (cores + efficiencyCores) << ", base freq = "
         << frequency << "GHz\n";
}
