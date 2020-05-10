/*
 * Factory.h
 *
 *  Created on: 9 мая 2020 г.
 *      Author: coolg
 */
#include <vector>
#ifndef FACTORY_H_
#define FACTORY_H_
#include "cstring.hpp"
#include "cstring0.hpp"
#include "cstring1.hpp"

struct Factory {
    virtual cstring *Create(const string filename,const string str) = 0;
    virtual ~Factory() = default;
};

struct Factory0: public Factory{
	cstring* Create(const string filename,const string str) override
	{
		return new cstring0(filename, str);
	}
	~Factory0() = default;
};
struct Factory1: public Factory{
	cstring* Create(const string filename,const string str)override 
	{
		return new cstring1(filename, str);
	}
	~Factory1() = default;
};
#endif /* FACTORY_H_ */
