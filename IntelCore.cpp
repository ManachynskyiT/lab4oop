#include "IntelCore.h"

IntelCore::IntelCore(string model, double frequency, int cores)
    : Processor(model, frequency, cores) {}

void IntelCore::ShowInfo() const {
    cout << "Intel Core Base: " << model << ", " << frequency << "GHz, " << cores << " cores\n";
}
