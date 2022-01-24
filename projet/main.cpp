# include <iostream>
# include <string>
# include "string.h"



using std::cout;
using std::endl;


int main() {
    string b;
    char s[] ={'H','e','l','l','o','\0'}; //si pas de /0 à la fin pb de taille du tableau

    char r[] ={'S','a','l','u','t','\0'};
  //  cout<<s<<endl;
    //for (int i =0;i<sizeof(s);i=i+1){
      //cout<<s[i]<<endl;
  //  }
    cout<<sizeof(r)<<endl;
    string d (s);
    string e (s);
    cout<< d.geta() <<endl;
    cout<< d.length() <<endl;
    cout<<d.resize(7,'Z')<<endl;

    e = d;
    cout<<e.geta()<<endl;

    std::string c (b.geta());
    cout << c << endl;

    return 0;
}
