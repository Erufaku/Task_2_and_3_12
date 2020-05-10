/*
 * cstring0.cpp
 *
 *  Created on: 9 мая 2020 г.
 *      Author: coolg
 */
#include "cstring0.hpp"
#include <chrono>
void cstring0::output(std::ostream &stream) const {
	for (int i = 0; i < FindLength(); ++i) {
	    stream << FindElement(i);
	}

	stream << '\n';
}

cstring0 operator+(const cstring& left, const cstring& right){
    int l = left.FindLength();
    int r = right.FindLength();
    int new_len = l + r;
    //string new_str = left.GetStr() + right.GetStr();
    char* new_str;
    new_str = new char[new_len + 1];
    auto timeBegin = std::chrono::steady_clock().now();
#pragma omp parallel sections
    {
#pragma omp section
        {
            for (int i = 0; i < l; ++i) {
                new_str[i] = left.GetStr()[i];
            }
       }
#pragma omp section
        {
            for (int i = l; i < new_len; ++i) {
                new_str[i] = right.GetStr()[i % r];
            }
      }
    }
    auto timeEnd = std::chrono::steady_clock().now();
    using std::chrono::milliseconds;
    auto timeRes = std::chrono::duration_cast<milliseconds>(timeEnd - timeBegin).count();
    std::cout << "Time = " << timeRes << std::endl;

    return cstring0(new_str,new_len);
}
