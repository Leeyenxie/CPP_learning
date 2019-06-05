//
//  headfile.h
//  cpp_learning
//
//  Created by fkxie on 2019/6/5.
//  Copyright © 2019年 fkxie. All rights reserved.
//

#ifndef headfile_h
#define headfile_h

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <stdio.h>
#include <unistd.h>

#endif /* headfile_h */

#define LEN 200

using namespace std;
string pwd()
{
    char path[LEN];
    getcwd(path, LEN);
    return path;
}
