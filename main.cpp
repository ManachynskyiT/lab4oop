#include <iostream>
#include "IntelCorei5_9400F.h"
#include "IntelCorei5_13400.h"

using namespace std;

void DisplayProcessorInfo(const Processor& proc) {
    proc.ShowInfo();
}

int main() {
    IntelCorei5_9400F oldi5;
    IntelCorei5_13400 newi5;

    Processor* processors[] = { &oldi5, &newi5 };

    for (Processor* p : processors) {
        DisplayProcessorInfo(*p);
        p->Benchmark();
        p->Benchmark(80);
        cout << "---------------------\n";
    }

    return 0;
}
