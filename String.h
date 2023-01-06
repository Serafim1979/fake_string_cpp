#ifndef STRING_H
#define STRING_H

class String
{
private:
    char *s;
    int sz;
public:
    String(const char *str = "");
    ~String();

    int len()const {return sz;}  // inline
    void print()const;
};

#endif