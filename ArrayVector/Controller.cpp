//
//  Controller.cpp
//  Array&Vector
//
//  Created by Denna, Zachary on 1/28/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//
#include <vector>

#include <iostream>

#include "Controller.hpp"
using namespace std;
void Controller:: start()
{
    vector<int> ints = {34,23,32,41,56};
    vector<string> words = {"defy", "explanation", "create", "insperation"};
    string Words[4];
    
    for(int I = 0; I<ints.size(); I++)
    {
        cout << ints[I] << endl;
    }
    for (int I = 0; I < 4; I++)
    {
        Words[I] = words[I];
        cout << Words[I] << endl;
    }
  
    //cout << "we got a Data Structurs app and this is it"<<endl;
}
