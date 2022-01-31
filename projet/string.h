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

    void reserve(size_t n);

    char* resize(int size_t, char c);

    string& operator=(const string&); // Est-ce vraiment nécessaire? Cet opérateur le fait déjà
    string& operator=(char c);
    string operator=(const char*); //operator = char*

    friend string operator+ (const string& s1, const string& s2);
    friend string operator+(const string& stra, const char* pc);
    inline size_t capacity() const; //getter capacity



  //  string& operator+(const string& str, char c);

  protected:
    char a_[100]; // Tu l'utilises pas?
    char* a;
    int len;
    size_t capacity_; //attribut capacity
    static const size_t max_size = 100;


};

inline size_t string::capacity() const { //getter capacity
	return capacity_;
}
