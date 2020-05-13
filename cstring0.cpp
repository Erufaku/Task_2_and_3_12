#include "cstring0.hpp"
#include <chrono>
#include <omp.h>
void cstring0::output(std::ostream& stream) const {
    for (int i = 0; i < FindLength(); ++i) {
        stream << FindElement(i);
    }

    stream << '\n';
}

cstring0 operator+(const cstring& left, const cstring& right) {
    int l = left.FindLength();
    int r = right.FindLength();
    int i;
    int new_len = l + r;
    //string new_str = left.GetStr() + right.GetStr();
    char* new_str;

    new_str = new char[new_len + 1];
    auto timeBegin = std::chrono::steady_clock().now();
#pragma omp parallel for private(i)
        for (i = 0; i < l; ++i) {
            new_str[i] = left.FindElement(i);
            new_str[i + l] = right.FindElement(i % r);
        }
    auto timeEnd = std::chrono::steady_clock().now();
    using std::chrono::milliseconds;
    auto timeRes = std::chrono::duration_cast<milliseconds>(timeEnd - timeBegin).count();
    std::cout << "Time = " << timeRes << std::endl;

    return cstring0(new_str, new_len);
}
