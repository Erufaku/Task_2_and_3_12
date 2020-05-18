/*
 * autotest.cpp
 *
 *  Created on: 9 ìàÿ 2020 ã.
 *      Author: coolg
 */

#include "autotest.hpp"

using namespace std;

void autotest1(){
    std::cout << "test ¹1: ";
    cstring0 r("one", 3);
    string a = "on";
    string b = "e";

    cstring0 m(a,2);
    cstring0 n(b,1);
    cstring0 k;
    k = m + n;
    if(r == k) std::cout<<"OK!"<<endl;
    else std::cout<<"Failed!"<<endl;
}
void autotest2(){
    std::cout << "test ¹2: ";
    cstring0 r("one", 3);
    string a = "on";
    string b = "e";

    cstring1 m(a, 2);
    cstring1 n(b, 1);
    cstring0 k;
    k = m + n;
    if (r == k) std::cout << "OK!" << endl;
    else std::cout << "Failed!" << endl;
}
void autotest3(){
    std::cout<<"Test ¹3: ";
    cstring0 r("one", 3);
    string a = "on";
    string b = "e";

    cstring0 m(a, 2);
    cstring1 n(b, 1);
    cstring0 k;
    k = m + n;
    if (r == k) std::cout << "OK!" << endl;
    else std::cout << "Failed!" << endl;
}
void autotest4(){




}

