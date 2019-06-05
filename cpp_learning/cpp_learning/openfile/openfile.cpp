//
//
//  Created by fkxie on 2019/5/6.
//  Copyright © 2019年 fkxie. All rights reserved.
//
#include "headfile.h"

#define MAXPATH 200

using namespace std;

int main(int argc, const char * argv[]) {
    char cur_path[MAXPATH];
    string file = "/Users/fkxie/Desktop/Directory/cpp/cpp_learning/cpp_learning/cpp_learning/openfile/POSCAR";
    string pa = pwd();
    
    getcwd(cur_path, MAXPATH);   // get current path
    
    fstream infile;
    infile.open(file.data());
    cout<<infile.is_open()<<endl;
    assert(infile.is_open());
    string s;
    while (getline(infile, s))
    {
        if (s != "")
            cout<<s<<endl;
    }
    infile.close();
    printf("current working directory is : %s \n", cur_path);
    return 0;
}
