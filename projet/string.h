//
// Created by emilie on 1/10/22.
//

class string{
    public :

        char* geta();

        //-------------
        //Constructors
        //-------------
        string();                   //default constructor
        string(const string& a);    //copy constructor
        string(const char* a);      //Constructor from a c-string

        //-----------
        //Destructor
        //-----------
        ~string();

        //--------
        //Getters
        //--------

        //--------
        //Setters
        //--------

        //--------
        //Methods
        //--------
        bool empty() const;


        //----------
        //Operators
        //----------



    protected:
      //-----------
      //Attributes
      //-----------
        char a_[100];

};
