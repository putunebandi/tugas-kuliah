#include <iostream>

int main() {
    int suhu = 36; [span_0](start_span)

    std::cout << "Suhu saat ini: " << suhu << " derajat." << std::endl;

    [span_1](start_span)
    if (suhu < 38) {
        std::cout << "Status: Suhu Normal" << std::endl;
    }
    return 0;
}
