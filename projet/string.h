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

    const char* c_str();
    size_t size() const;
    void clear();

    bool empty() const;

    size_t length() const; //fonction renvoyant la longueur de la chaîne

    size_t maxsize() const;

    void reserve(size_t n);

    char* resize(int size_t, char c);

    string& operator=(const string&);
    string& operator=(char c);
    string operator=(const char*); //operator = char*

    friend string operator+ (const string& s1, const string& s2);
    friend string operator+(const string& stra, const char* pc);
    friend string operator+(const string& str, char c);
    inline size_t capacity() const; //getter capacity




  protected:
    char* a;
    int len;
    size_t capacity_; //attribut capacity
    static const size_t max_size = 100;


};

inline size_t string::capacity() const { //getter capacity
	return capacity_;
}


// A CHANGER ?
// - size de type size_t
// - normal que capacity dans le .h ?
// - Capacity dans constructor from cstring
// - Attention d'utiliser a et pas a_
