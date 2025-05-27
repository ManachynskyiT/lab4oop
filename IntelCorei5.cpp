#include "IntelCorei5.h"

IntelCorei5::IntelCorei5(string model, double frequency, int cores)
    : IntelCore(model, frequency, cores) {}

void IntelCorei5::ShowInfo() const {
    cout << "Intel Core i5 Series: " << model << ", "
         << frequency << "GHz, " << cores << " cores\n";
}
