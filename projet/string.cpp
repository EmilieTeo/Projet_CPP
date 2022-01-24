//
// Created by emilie on 1/10/22.
//

#include "string.h"




string::string() {
    a_[0] = 'H';
    a_[1] = 'E';
    a_[2] = 'L';
    a_[3] = 'L';
    a_[4] = 'O';
    a_[5] = '\0';

}

char* string::geta(){
    return this -> a_;
}




//MyClass::MyClass(string a){
//    a_ = a;
//}


string::string(const string &a){
    a_[0]= a.a_[0];
    a_[1]= a.a_[1];
    a_[2]= a.a_[2];
    a_[3]= a.a_[3];
    a_[4]= a.a_[4];
    a_[5] = a.a_[5];
}


string::~string(){

}