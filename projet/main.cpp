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



//  cout << "Is the string d empty ? " << d.empty() << endl;

  return 0;
}
