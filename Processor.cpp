#include "Processor.h"

Processor::Processor(string model, double frequency, int cores)
    : model(model), frequency(frequency), cores(cores) {}

void Processor::ShowInfo() const {
    cout << "Processor: " << model << ", " << frequency << "GHz, " << cores << " cores\n";
}

void Processor::Benchmark() {
    cout << model << " ran a default benchmark.\n";
}

void Processor::Benchmark(int load) {
    cout << model << " ran a benchmark at " << load << "% load.\n";
}

Processor::~Processor() {}
