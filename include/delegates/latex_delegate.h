#ifndef LATEX_DELEGATE_H
#define LATEX_DELEGATE_H
#include <string>
#include <vector>
using namespace std;
class latex_delegate {
public:  
    latex_delegate();
    ~latex_delegate();
    static bool latex_exist_test();
    static void xelatex_compile(std::string file);
    static vector<string> find_all_math(std::string latex_format);
};
#endif //LATEX_DELEGATE_H