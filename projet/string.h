//
// Created by emilie on 1/10/22.
//

class string{
    public :
        string(); //default constructor
        char* geta();
        string (const char* a); //Constructor from a c-string
      //  string(const string &a); // copy constructor
        ~string(); //destconstructorructor
        int length();//fonction renvoyant la longueur de la chaîne
        int maxsize();
        char* resize(int size_t, char c);
        void operator=(const string&);
        void operator=(const char*);

//        operator+(const string&, char)

    protected:
        char a_[100];
        char* a;


};
