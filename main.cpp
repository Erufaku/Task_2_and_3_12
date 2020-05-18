#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "autotest.hpp"
#include "cstring.hpp"
#include "cstring0.hpp"
#include "cstring1.hpp"
#include "Factory.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{   
    const int l = 10000;
    char a[l];
    for (int i = 0; i < l; i++) a[i] = 'a'; 
    cstring0 b(a);
    cstring0 c(a);
    b = b + c;
	//autotest1();
	//autotest2();
	//autotest3();
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Input file not open!" << endl;
        return -1;
    }
    Factory0 factory0;
    Factory1 factory1;
    const map<string, Factory*> factories = {
            {"Hori", &factory0},
            {"Vert", &factory1}
    };

    vector<cstring*> strings;

    string tmp;
    while (getline(inputFile, tmp)) {
        stringstream tmpStream(tmp);

        string stringType;
        string outputFilename;
        string chars;

        tmpStream >> stringType >> outputFilename >> chars;
        
        cstring *newCstring = nullptr;

        newCstring = (factories.at(stringType))->Create(outputFilename, chars);
        strings.push_back(newCstring);
    }
    inputFile.close();

	auto strIt = strings.begin();
    while (strIt != strings.end()) {
        (*strIt)->output();
        ++strIt;
    }

    for (auto& ptr : strings) {
        delete ptr;
    }
    return 0;
}

