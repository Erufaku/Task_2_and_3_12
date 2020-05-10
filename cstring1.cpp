/*
 * cstring1.cpp
 *
 *  Created on: 9 мая 2020 г.
 *      Author: coolg
 */

#include "cstring1.hpp"
void cstring1::output(std::ostream &stream) const {
	 for (int i = 0; i < FindLength(); ++i) {
	     stream << FindElement(i);
	     if (i != FindLength() - 1) {
	         stream << '\n';
	     }
	 }
}
