#include "cstring.hpp"
#include <cstring>
using namespace std;

cstring::cstring(){
	SetZero();
}
void cstring::SetZero() {
	len = 0;
	str = "";
	filename = "";
}
cstring::cstring(char *a){
	len = strlen(a);
	str = a;
	//for(int i=0;i<len;i++) str[i] = a[i];
}
cstring::cstring(char *a, int length){
    len = length;
    str = a;
    //for(int i=0;i<len;i++) str[i] = a[i];
}
cstring::cstring(const char* FileName, char *a){
    len = strlen(a);
    str = a;
    //for(int i=0;i<len;i++) str[i] = a[i];
	filename = FileName;
}
cstring::cstring(string FileName, string a){
	len = a.size();
	str = a;
	filename = FileName;
}
int cstring::FindLength() const{
    return len;
}
string cstring::GetStr() const{
	return str;
}
char cstring::FindElement(int i) const{
    return str[i];
}
cstring& cstring::operator=(const string other){
	len = other.size();
	str = other;
	return *this;
}
cstring::cstring(const cstring& other){
    int l = other.len;
    // memset(str, 0, sizeof(char) * l);
    str = other.str;
    len = l;
    for(int i = 0;i<len;i++) str[i] = other.str[i];
}
cstring::cstring(string str, int len){
	this->len = len;
	this->str = str;
}
cstring& cstring::operator=(const cstring& other){
    len = other.len;
    str = other.str;
    //for(int i = 0;i<len;i++) str[i] = other.str[i];
    return *this;
}

cstring& cstring::operator=(const char* other){
    len = strlen(other);
    for(int i = 0;i<len;i++) str[i] = other[i];
    return *this;
}

string cstring::getFilename() const {
    return filename;
}

std::ostream& operator<<(std::ostream& stream, const cstring& rat){
    if(stream){
        int t = rat.FindLength();
        for(int i = 0;i < (int)t;i++) stream << rat.FindElement(i);
        stream << " " << rat.FindLength();
    }
    return stream;
}

bool operator==(const cstring& lhs, const cstring& rhs){
	if(lhs.FindLength() == rhs.FindLength()){
		for(int i = 0; i < lhs.FindLength(); i++)
		{
			if (lhs.FindElement(i) != rhs.FindElement(i)) return false;
		}
	}
	else return false;
	return true;
}
bool operator!=(const cstring& lhs, const cstring& rhs){
	if(lhs.FindLength() == rhs.FindLength()){
		for(int i = 0; i < lhs.FindLength(); i++)
		{
			if (lhs.FindElement(i) != rhs.FindElement(i)) return true;
		}
	}
	else return true;
	return false;
}
