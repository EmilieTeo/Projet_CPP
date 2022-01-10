//
// Created by emilie on 1/10/22.
//

#include "MyClass.h"



string::string() {
    a_[0] = 'H';
    a_[1] = 'E';
    a_[2] = 'L';
    a_[3] = 'L';
    a_[4] = 'O';
}

char* string::geta(){
    return this -> a_;
}




//MyClass::MyClass(string a){
//    a_ = a;
//}


//MyClass::MyClass(cosnst MyClass &a){
//    a_ = a.a_;
//}


string::~string(){

}