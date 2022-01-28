# include <iostream>
# include <string>
# include "string.h"

using std::cout;
using std::endl;

/** Méthodes de test */
void displayArray(char* array){
  cout<<array<<endl;
}

void displayCharInArray(char* array){
  int i = 0;
  while (array[i] != '\0'){
    cout<<i<<" : "<<array[i]<<endl;
    i++;
  }
}

void displayStringCharacteristics(string str, int resize){
  cout << "String content : " << str.geta() << endl;
  cout << "Size : " << str.length() << endl;
  cout << "Maximum size : " << str.maxsize() << endl;
  if (resize>0) cout << "Resize to " << resize << " : " << str.resize(resize,'Z') << endl;
  cout << endl;
}


/** Main */
int main() {
  string b;
  char s[] = {'H','e','l','l','o','H','e','l','l','o','\0'}; //si pas de /0 à la fin pb de taille du tableau
  char r[] = {'S','a','l','u','t','\0'};
  char t[] = {"Bonjour"};

  displayArray(t);
  displayCharInArray(t);
  cout << endl;

  string d (s);
  string e (r);
  string f (t);

  displayStringCharacteristics(d, -1);
  displayStringCharacteristics(e, 8);
  displayStringCharacteristics(f, -1);

  e = d;
  displayStringCharacteristics(e, -1);

  string c (d.geta());
  displayStringCharacteristics(c, -1);

  cout << "Is the string d empty ? " << d.empty() << endl;

  return 0;
}
