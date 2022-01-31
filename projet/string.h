#include <cstddef>


class string{
  public :

    //CONSTRUCTORS
    string();                   //Default constructor
    string (const char* a);     //Constructor from a c-string
    string(const string &str);  //Copy constructor

    //DESTRUCTOR
    ~string();

    //METHODS
    size_t size() const;                  //Return length of string
    void clear();                         //Clear string
    bool empty() const;                   //Test if string is empty
    size_t length() const;                //Return length of string
    size_t maxsize() const;               //Return maximum size of string
    void reserve(size_t n);               //Request a change in capacity
    char* resize(int size_t, char c);     //Resize string
    const char* c_str();                  //Get C string equivalent
    char* geta();
    int getlen();

    //OPERATORS =
    string& operator=(const string&);
    string& operator=(char c);
    string operator=(const char*);

    //OPERATORS +
    friend string operator+ (const string& s1, const string& s2);
    friend string operator+(const string& str, char c);
    friend string operator+(const string& stra, const char* pc);

    //GETTERS
    inline size_t capacity() const;


  protected:
    //ATTRIBUTS
    char a_[100];
    char* a;
    int len;
    size_t capacity_;
    static const size_t max_size = 100;



};

//GETTERS
inline size_t string::capacity() const {
	return capacity_;
}
