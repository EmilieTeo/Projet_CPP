# include <iostream>
# include <string>
# include "string.h"


using std::cout;
using std::endl;

/** Méthodes de test */


/** Main */
int main() {
  string b;
  char s[] = {'H','e','l','l','o','H','e','l','l','o','\0'}; //si pas de /0 à la fin pb de taille du tableau
  char r[] = {'S','a','l','u','t','\0'};
  char t[] = {"Bonjour"};


  string d (s);
  string e (r);
  string f (t);
  string g (f);

  cout<<"d : " <<d.geta()<<endl;
  e = d;
  cout<<"e : " <<e.geta()<<endl;
  cout << "g : "<<g.geta()<<endl;

//  e = d+r;
//  cout<<"e : " <<e.geta()<<endl;

    cout << "The size of the string is : " << d.size() << " bytes." << endl;    //test of size()
    cout << "Is the string d empty ? " << d.empty() << endl;                    //test of empty()
    d.clear();
    cout << "d: " <<d.geta() << endl;

    string h;
    h = 'z';
    cout << h.c_str() << endl;

    /***Test operator + (const string&,const char*)***/
    std::cout<<"Test of operator + (const string&,const char*)"<<std::endl;
    std::string w("Hello");
    char y[] = {' ', 'b','o','n','j','o','u','r','\0'};
    cout << w+y << endl;

    /***Test operator + (const string&, const string&)***/
    std::cout<<"Test operator + (const string&, const string&)"<<std::endl;
    std::cout <<w+w<< std::endl;


    /***Test operator = (const char*)***/
    std::cout<<"Test of operator = (const char*)"<<std::endl;
    char const * k = "Hello world";
	  string K = k;
	  std::cout<<K.c_str()<<std::endl;




  return 0;
}
