//
// Created by emilie on 1/10/22.
//

class string{
    public :
        string(); //default constructor
        char* geta();
        //MyClass (const char* a); //Constructor from a c-string
        string(const string &a); // copy constructor
        ~string(); //destructor

    protected:
        char a_[100];

};