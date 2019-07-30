#ifndef FILE_DELEGATE_H
#define FILE_DELEGATE_H
#include <cstdio>
#include <string>
#define __MAXLEN__ 6 * 1000000000+1
using namespace std;

class file_delegate
{
private:
    /* data */
    FILE *__acc__ = NULL;
public:
    file_delegate(/* args */);
    file_delegate(FILE *acc);
    file_delegate(string filename);
    file_delegate(char *filename);
    ~file_delegate();

    string getcontent(); 
};
#endif