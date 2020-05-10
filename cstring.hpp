#ifndef CSTRING_H
#define CSTRING_H


#include <iostream>
#include <exception>
#include <cstring>
#include <string>
using namespace std;

class cstring
{
private:

    string str;
    string filename;
    int len;
public:
    string getFilename() const;
    cstring();
    int FindLength() const;
    char FindElement(int i) const;
    string GetStr() const;
    cstring(char *a, int lenght);
    cstring(char *a);
    cstring(const char* FileName,char *a);
    cstring(string FileName, string a);
    cstring(string str, int len);
    cstring(const cstring& other);
    cstring& operator=(const cstring& other);
    void SetZero();
    virtual ~cstring()
    {
        if(len != 0){
            str.clear();
            len = 0;
        }
    }
    cstring& operator=(const char* other);
    cstring& operator=(const string other);
    virtual void output(std::ostream &stream) const = 0;
};
bool operator==(const cstring& lhs, const cstring& rhs);
bool operator!=(const cstring& lhs, const cstring& rhs);
std::ostream& operator<<(std::ostream& stream, const cstring& rat);

#endif // CSTRING_H
