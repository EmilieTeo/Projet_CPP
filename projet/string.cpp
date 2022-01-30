//
// Created by emilie on 1/10/22.
//

#include "string.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

string::string() {      // Default Constructor
  a=nullptr;

}


string::string(const string &str){      //Copy constructor
  len = str.length();
  //delete a;
  int i = 0;
  size_t l = str.length();
  a = new char[l];
  while (i < l){
    a[i] = str.a[i];
    i++;
  }
  a[i] = '\0';
}

string::~string(){    //destructor
	delete [] a;
}


const char* string::c_str(){        // c_str()
    return a;
}

int string::size() const{           // size()
    int size = 0;
    int i = 0;

    while (this->a[i]!='\0'){ // != null
        size++;
        i++;
    }
    return size;
}


void string::clear(){
    this -> len = 0;
    this -> a[0] = '\0';
}


string::string(const char* str){
  a = new char[10];
  int i=0;
  while (str[i]!='\0'){
    i+=1;
  }
  int size=i;
  memcpy(a,str, size);
  this->a[size]='\0';
}

char* string::geta(){
  return this -> a;
}

int string::getlen(){
  return this->len;
}


size_t string::length() const{
  int len = 0;
  int i = 0;

  while (this->a[i]!='\0'){ // != null
    len++;
    i++;
  }
  return len;
}


int string::maxsize(){
  return sizeof(this->a); // attention, sizeof(char* array) renvoie la taille de l'adresse de a, donc 4 octets
}

char* string::resize(int size_t, char c){
  int sizeinit = this->length();
  cout << "Initial size : " << sizeinit << endl;
  int i = 0;

  if(size_t< sizeinit){
    this->a[size_t]='\0';

  } else {

    while (i<(size_t-sizeinit)){
      this->a[i+sizeinit]= c;
      cout<< i+sizeinit << " -> " << this->a[sizeinit+i] << endl;
      i++;
    }

    if (this->a[i+sizeinit]!= '\0'){
      this->a[i+sizeinit]= '\0';
    }

    cout << "Final size : " << this->length() << endl;
  }

  return this->a;

}

string& string::operator=(const string& str){
//   delete a;
//   string news = str;
   int i = 0;
   size_t l = str.length();
//   a = new char[l];
   while (i<=l) {
    char lettre = str.a[i];
    a[i]= lettre;
    i++;
   }
   if(a[i]!= '\0'){
     a[i]='\0';
   }
   return *this;
}

void string::operator=(const char* s){
  int i =0;

  while (i<sizeof(s)){ // attention, sizeof(char* array) renvoie la taille de l'adresse de a, donc 4 octets en général
   this->a[i] = s[i];
   i++;
  }

  if(a[i]!='\0'){
    a[i]='\0';
  }

  cout<<i<<endl;
}

string& string::operator=(char c){
    if (this -> len !=1){
        delete[] a;
    }
    len =1;
    a = new char [len+1];
    a[1] = '\0';
    a[0] = c;

    return *this;
}

//string& string::operator+(const string& str, char c){
  //delete a;
//  size_t lstr = str.length();
//  size_t lc = sizeof(c)
//  size_t l = lstr + lc;
//  a = new char[l];
//  int i = 0;
//  int j = 0;
//  while (i<= l){
//    a[i]= str.a[i];
//    i++;
//  }
//  while (j<= lc){
  //  a[i+j] = c[j];
//    j++;
//  }
//  a[l]= '\0';
//  return this*;
//}








//--------
//Methods
//--------

bool string::empty() const{   //empty()
	bool res;
	if (size()==0){
	  res=true;    //1 if true
	}
	else {
		res=false;   //0 if false
	}
	return res;
}
