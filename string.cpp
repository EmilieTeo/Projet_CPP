//
// Created by emilie on 1/10/22.
//

#include "string.h"



char* string::geta(){
    return this -> a_;
}

//MyClass::MyClass(string a){
//    a_ = a;
//}


//------------
//Constructors
//------------

  string::string() {              //Default constructor
      a_[0] = 'H';
      a_[1] = 'E';
      a_[2] = 'L';
      a_[3] = 'L';
      a_[4] = 'O';
      a_[5] = '\0';
  }

string::string(const string &a){  //Copy constructor

      a_[0]= a.a_[0];
      a_[1]= a.a_[1];
      a_[2]= a.a_[2];
      a_[3]= a.a_[3];
      a_[4]= a.a_[4];
      a_[5] = a.a_[5];
  }

string::string (const char* ch){  //Constructor from a c-string

}

//-----------
//Destructor
//-----------

string::~string(){
	delete [] a;
}


//--------
//Methods
//--------

bool string::empty() const{   //empty(), test if string is empty
	if (size()==0){
	  return(true);
	}
	else {
		return(false);
	}
}




//----------
//Operators
//----------
