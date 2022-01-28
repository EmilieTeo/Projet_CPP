//
// Created by emilie on 1/10/22.
//

class string{
  public :
    string(); //default constructor

    char* geta();


    string (const char* a); //Constructor from a c-string
    string(const string &str); // copy constructor

    ~string(); //destructor

    const char* c_str();

    int length(); //fonction renvoyant la longueur de la chaîne

    int maxsize();

    char* resize(int size_t, char c);

    void operator=(const string&); // Est-ce vraiment nécessaire? Cet opérateur le fait déjà

    void operator=(const char*);

    //~string();


    bool empty() const;


    //operator+(const string&, char)

  protected:
    char a_[100]; // Tu l'utilises pas?
    char* a;
    int len;


};
