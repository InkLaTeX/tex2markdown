#include "delegates/file_delegate.h"
#include <iostream>
using namespace std;
/*
Construction & destruction methods
 */
file_delegate::file_delegate(/* args */)
{
}

file_delegate::file_delegate(FILE *acc)
{
    this->__acc__ = acc;
}
file_delegate::file_delegate(string filename)
{
    this->__acc__ = fopen(filename.data(),"w+");
}
file_delegate::file_delegate(char *filename)
{
    this->__acc__ = fopen(filename,"w+");
}

file_delegate::~file_delegate()
{
    delete __acc__;
}

string file_delegate::getcontent(){
    string __cont__;char *cont_intern_char;
    if(this->__acc__ == NULL) cout << "(ERROR)\tI cannot open the file you wanted me to open.\n(ERROR)\tTry again." << endl;
    else{
        fseek(this->__acc__,0,SEEK_SET);
        fread(cont_intern_char,__MAXLEN__ + 1,1,__acc__);
    }
    return string(cont_intern_char);
}


