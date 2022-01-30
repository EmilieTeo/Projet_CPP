//
// Created by emilie on 1/10/22.
//
#include <cstddef>


class string{
  public :
    string(); //default constructor
    string (const char* a); //Constructor from a c-string
    string(const string &str); // copy constructor

    ~string(); //destructor

    char* geta();
    int getlen();





    const char* c_str();
    int size() const;
    void clear();

    bool empty() const;

    size_t length() const; //fonction renvoyant la longueur de la chaîne

    int maxsize();

    char* resize(int size_t, char c);

    string& operator=(const string&); // Est-ce vraiment nécessaire? Cet opérateur le fait déjà
    string& operator=(char c);

    void operator=(const char*);





  //  string& operator+(const string& str, char c);

  protected:
    char a_[100]; // Tu l'utilises pas?
    char* a;
    int len;


};
