/*
 * cstring1.cpp
 *
 *  Created on: 9 ��� 2020 �.
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
