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

    size_t maxsize() const;

    char* resize(int size_t, char c);

    string& operator=(const string&); // Est-ce vraiment nécessaire? Cet opérateur le fait déjà
    string& operator=(char c);



    string operator=(const char*); //operator = char*





  //  string& operator+(const string& str, char c);

  protected:
    char a_[100]; // Tu l'utilises pas?
    char* a;
    int len;

  string& operator+(const char* pc){
      int lenChar = 0;
      while (pc[lenChar] != '\0'){
          lenChar++;
      }

      string newString;
      int lenTot = this -> len + lenChar;
      newString.a = new char[lenTot+1]();
      int i=0;
      while(i < lenTot){
          if (i < this->len){
              newString.a[i] = a[i];
          }
          else{
              newString.a[i] = pc[i-this->len];
          }
          i++;
      }
      newString.len = lenTot;
      newString.a[lenTot] = '\0';
      return *new string(newString);


    }
};
