//
//
//  Created by fkxie on 2019/5/6.
//  Copyright © 2019年 fkxie. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

#define MAXPATH 80

using namespace std;

int main(int argc, const char * argv[]) {
    string file="/Users/fkxie/Desktop/Directory/GAP/devel/POSCAR";
    fstream infile;
    infile.open(file.data());
    cout<<infile.is_open()<<endl;
    assert(infile.is_open());
    string s;
    while (getline(infile, s))
    {
        cout<<s<<endl;
    }
    infile.close();
    return 0;
}
