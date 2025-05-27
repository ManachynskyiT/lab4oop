#pragma once
#include <string>
#include <iostream>
using namespace std;

class Processor {
protected:
    string model;
    double frequency;
    int cores;

public:
    Processor(string model, double frequency, int cores);
    virtual void ShowInfo() const;
    void Benchmark();
    void Benchmark(int load);
    virtual ~Processor();
};
