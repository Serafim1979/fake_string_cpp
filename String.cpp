#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"

String::String(const String &str)
{
    sz = str.len();
    s = new char[sz + 1];
    strcpy(s, str.s);
}

String::String(const char *str)
{
    sz = strlen(str);
    s = new char[sz + 1];

    // there should be error handling here...


    strcpy(s, str);
}

String & String::operator=(const String &str)
{
    delete[] s;
    sz = str.len();
    s = new char[sz + 1];
    strcpy(s, str.s);
    return *this;
}

String::~String()
{
    delete[] s;
}

void String::print()const
{
    std::cout << s ;
}