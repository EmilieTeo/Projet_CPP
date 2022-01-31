# include <iostream>
# include <string>
# include "string.h"


using std::cout;
using std::endl;

/** Méthodes de test */


/** Main */
int main() {

  char s[] = {"Hello"}; 
  char r[] = {'S','a','l','u','t','\0'};
  char t[] = {"Bonjour"};

  // Test des constructeurs
  cout << "Test du constructeur par défaut :" <<endl;
  string b;
  //cout << "b :"<< b.c_str()<< endl;

  cout << "Test du constructor from c-string:" <<endl;
  string d (s);
  cout<<"d : " <<d.c_str()<<endl;

  string e (d);
  cout << "Test du copy constructor :" <<endl;
  cout<<"e :"<<e.c_str()<<endl;


  //Test des fonctions

    cout << "The size of the string is : " << d.size() << " bytes." << endl;    //test of size()
    cout << "The length of the string is : " << d.length() << " bytes." << endl;    //test of size()
    cout << "Is the string d empty ? " << d.empty() << endl;                    //test of empty()
    d.reserve(20);
    cout<<"Test of reserve:"<<endl;
    cout<<(d.capacity()==20)<<std::endl;
    d.clear();
    cout<<"Test of clear :"<<endl;
    cout << "d: " <<d.c_str() << endl;
    cout<< "Test of maxsize :"<<endl;
    cout<< d.maxsize()<< endl;
    cout<< "Test of resize : "<< endl;
    e.resize(8, 'O');
    cout<<e.c_str()<<endl;

    string h;
    h = 'z';
    cout << "Test de c-string :"<<endl;
    cout << h.c_str() << endl;



    /***Test operator + (const string&,const char*)***/
    std::cout<<"Test of operator + (const string&,const char*)"<<std::endl;
    std::string w("Hello");
    const char* y = ", bonjour\0";
    cout << w+y << endl;

    /***Test operator + (const string&, const string&)***/
    std::cout<<"Test operator + (const string&, const string&)"<<std::endl;
    std::cout <<w+w<< std::endl;

    /***Test operator + (const string&, char)***/
    cout<<"Test operator + (const string&, char)"<<endl;
    char c = 'O' ;
    cout<<w+c<<endl;


    /***Test operator = (const char*)***/
    std::cout<<"Test of operator = (const char*)"<<std::endl;
    char const * k = "Hello world";
	  string K = k;
	  std::cout<<K.c_str()<<std::endl;

    /***Test operator=(char c)***/
    std::cout<<"Test of operator=(char c)"<<std::endl;
    K = c;
    std::cout<<K.c_str()<<std::endl;

    /***operator=(const string& str)***/
    std::cout<<"Test of operator=(char c)"<<std::endl;
    K = e;
    //  cout<<"e : " <<e.c_str()<<endl;
    std::cout<<K.c_str()<<std::endl;




  return 0;
}
