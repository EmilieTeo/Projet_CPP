# include <iostream>
# include <string>
# include "string.h"


using std::cout;
using std::endl;


int main() {

  char s[] = {"Hello"};
  char r[] = {'S','a','l','u','t','\0'};
  char t[] = {"Bonjour"};
  string h;
  h = 'z';



  //TESTING CONSTRUCTORS
  cout << "Test of constructeur par défaut :" <<endl;
  string b;
  //cout << "b :"<< b.c_str()<< endl;

  cout << "Test of constructor from c-string:" <<endl;
  string d (s);
  cout<<"d : " <<d.c_str()<<endl;

  string e (d);
  cout << "Test of copy constructor :" <<endl;
  cout<<"e :"<<e.c_str()<<endl;



  //TESTING METHODS
  cout << "The size of the string d is : " << d.size() << " bytes." << endl;
  cout << "The length of the string d is : " << d.length() << " bytes." << endl;
  cout << "Knowing that 1=true and 0=false is the string d empty ? " << d.empty() << endl;

  d.reserve(20);
  cout<<"Knowing that we just requested a change in capacity, test of reserve:"<<endl;
  cout<<(d.capacity()==20)<<std::endl;

  d.clear();
  cout<<"Knowing that we just cleared d, test of clear :"<<endl;
  cout << "d: " <<d.c_str() << endl;

  cout<< "Test of maxsize :"<<endl;
  cout<< d.maxsize()<< endl;

  cout<< "Test of resize : "<< endl;
  e.resize(8, 'O');
  cout<<e.c_str()<<endl;

  cout << "Test de c-string :"<<endl;
  cout << h.c_str() << endl;



  //TESTING OPERATORS +
  std::cout<<"Test of operator + (const string&,const char*)"<<std::endl;
  std::string w("Hello");
  const char* y = ", bonjour\0";
  cout << w+y << endl;

  std::cout<<"Test operator + (const string&, const string&)"<<std::endl;
  std::cout <<w+w<< std::endl;

  cout<<"Test operator + (const string&, char)"<<endl;
  char c = 'O' ;
  cout<<w+c<<endl;



  //TESTING OPERATORS +
  std::cout<<"Test of operator = (const char*)"<<std::endl;
  char const * k = "Hello world";
  string K = k;
  std::cout<<K.c_str()<<std::endl;

  std::cout<<"Test of operator=(char c)"<<std::endl;
  K = c;
  std::cout<<K.c_str()<<std::endl;

  std::cout<<"Test of operator=(char c)"<<std::endl;
  K = e;
  //  cout<<"e : " <<e.c_str()<<endl;
  std::cout<<K.c_str()<<std::endl;



  return 0;
}
