//
// Created by emilie on 1/10/22.
//

#include "string.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

string::string(){
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

string::~string(){
}

int string::length(){
  int len = 0;
  int i =0;
  while (this->a[i]!='\0'){
    if(a[i]!=(char)0){
      len = len+1;
    i = i+1;
    }
  }
  return len;
}

int string::maxsize(){
  return sizeof(this->a);
}

char* string::resize(int size_t, char c){
  int sizeinit = this->length();
  cout<<sizeinit<<endl;
  int i = 0;
  if(size_t< sizeinit){
    this->a[size_t]='\0';
    }
  else{
    while (i<(size_t-sizeinit)){
      this->a[i+sizeinit]= c;
      std::cout<<this->a[sizeinit+i]<<std::endl;
      std::cout << i+sizeinit << std::endl;
      i++;
    }
    if (this->a[i+sizeinit]!= '\0'){
      this->a[i+sizeinit]= '\0';
      }
  }
  return this->a;

}

void string::operator=(const string& str){
  int i =0;
  while (i<str.length()){
   this->a[i] = str.geta()[i];
   i++;
 }
}

void string::operator=(const char* s){
  int i =0;
  while (i<sizeof(s)){
   this->a[i] = s[i];
   i++;
 }
  if(a[i]!='\0'){
    a[i]='\0';
  }
  cout<<i<<endl;
}
