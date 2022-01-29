//
// Created by emilie on 1/10/22.
//

#include "string.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

string::string() {
  a=nullptr;
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

//int string::getlen(){
//  return this->len;
//}


int string::length(){
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

void string::operator=(const string& str){
   string news = str;
   int i = 0;
   int l = news.length();

   while (i<l) {
    char* lettre = news.geta();
    this->a[i] = lettre[i];
    i++;
   }
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

//-----------
//Destructor
//-----------

string::~string(){
	delete [] a;
}


//--------
//Methods
//--------

//bool string::empty() const{   //empty(), test if string is empty
//	if (size()==0){
//	  return(true);
//	}
//	else {
	//	return(false);
	//}
//}
