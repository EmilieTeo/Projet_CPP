# include <iostream>
# include "string.h"



using std::cout;
using std::endl;


int main() {
    string b;
    cout<< b.geta() <<endl;

    std::string c (b.geta());
    cout << c << endl;

    return 0;
}

