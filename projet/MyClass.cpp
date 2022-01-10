//
// Created by emilie on 1/10/22.
//

#include "MyClass.h"



MyString::MyString() {
    a_[0] = 'H';
    a_[1] = 'E';
    a_[2] = 'L';
    a_[3] = 'L';
    a_[4] = 'O';
}

char* MyString::geta(){
    return this -> a_;
}




//MyClass::MyClass(string a){
//    a_ = a;
//}


//MyClass::MyClass(cosnst MyClass &a){
//    a_ = a.a_;
//}


MyString::~MyString(){

}