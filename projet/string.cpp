#include "string.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;


//CONSTRUCTORS
string::string() {                    // Default Constructor
  a=nullptr;
  capacity_=0;
}


string::string(const string &str){    //Copy constructor
  len = str.length();
  capacity_=str.capacity();
  int i = 0;
  size_t l = str.length();
  a = new char[l];
  while (i < l && i< max_size){
    a[i] = str.a[i];
    i++;
  }
  a[i] = '\0';
}


string::string(const char* str){      //Constructor from c-string
  a = new char[sizeof(str)];
  capacity_= sizeof(str);
  int i=0;
  while (str[i]!='\0' && i< max_size){
    i+=1;
  }
  int size=i;
  memcpy(a,str, size);
  this->a[size]='\0';
}



//DESTRUCTOR
string::~string(){
	delete [] a;
}



//METHODS
const char* string::c_str(){        //c_str()
    return a;
}


size_t string::size() const{        //size()
    int size = 0;
    int i = 0;
    while (this->a[i]!='\0'){
      size++;
      i++;
    }
    return size;
}


void string::clear(){               //clear()
    this -> len = 0;
    this -> a[0] = '\0';
}


bool string::empty() const{        //empty()
	bool res;
	if (size()==0){
	  res=true;    //1 if true
	}
	else {
		res=false;   //0 if false
	}
	return res;
}


size_t string::length() const{     //length
  int len = 0;
  int i = 0;
  while (this->a[i]!='\0'){
    len++;
    i++;
  }
  return len;
}


size_t string::maxsize() const{      //maxsize()
	return max_size;     //variable max_size statique choisie arbitrairement
}


char* string::resize(int size_t, char c){       //resize()
  int sizeinit = this->length();
  int i = 0;
  if(size_t< sizeinit){
    this->a[size_t]='\0';
  } else {

    while (i<(size_t-sizeinit) && (i+sizeinit)<max_size){
      this->a[i+sizeinit]= c;
      i++;
    }
    this->a[i+sizeinit]= '\0';
    }
    return this->a;
}


void string::reserve(std::size_t n){       //reserve()
  if(n>capacity_ && n< max_size){
    char* res= a;
    a= new char [n+1];
    capacity_=n;
    for (size_t i=0; i<=n;++i){
        a[i]=res[i];
    }
    delete [] res;

  }
}



//OPERATORS =
string& string::operator=(const string& str){        //ooperator=(const string& str)
  int i = 0;
  size_t l = str.length();
  while (i<=l && i< max_size) {
    char lettre = str.a[i];
    a[i]= lettre;
    i++;
  }
  a[i]='\0';
  return *this;
}


string string::operator=(const char* s){             //operator=(const char* s)
  if(a != nullptr){
    delete [] a;
  }
  int size_s = string(s).length();
  if(size_s > 0 && size_s<=string(s).maxsize()){
    a = new char [size_s+1];
    for (int i = 0 ; i<=size_s+1 ; i++){
      a[i] = s[i];
    }
  }
  else{
    a = nullptr;
  }
  return *this;
}


string& string::operator=(char c){                 //operator=(char c)
    if (this -> len !=1){
        delete[] a;
    }
    len =1;
    a = new char [len+1];
    a[1] = '\0';
    a[0] = c;
    return *this;
}


//OPERATORS +
string operator+(const string& stra, const char* pc){       //operator+(const string& stra, const char* pc)
    int lenTot = stra.size() + strlen(pc);
    char* newString = new char [lenTot + 1];
    int i=0;
    while(i < lenTot && i< stra.max_size){
      if (i < stra.size()){
        newString[i] = stra.a[i];
      }
      else{
        newString[i] = pc[i-stra.size()];
      }
      i++;
    }
    newString[i]='\0';
    string concatenate (newString);
    return newString;
}


string operator+(const string& s1, const string& s2) {      //operator+(const string& s1, const string& s2)
  char* chaine=new char[s1.size()+s2.size() +1];
  if(s1.size()+s2.size()>s1.maxsize()){
    for(int i=0; i<s1.size(); ++i){
      chaine[i]=s1.a[i];
    }
    for(int j=0; j<=s2.size();++j){
      chaine[j+s1.size()]=s2.a[j];
    }
    string concatenate (chaine);
  }
  return chaine;

}


string operator+(const string& str, char c){               //operator+(const string& str, char c)
    int l = str.size() + 1;
    char* newS = new char [l + 1];
    int i=0;
    while(i < l && (i+1)< str.max_size){
      newS[i] = str.a[i];
      i++;
    }
    newS[i] = c;
    newS[i+1] = '\0';
    string concatenate (newS);
    return newS;
}
