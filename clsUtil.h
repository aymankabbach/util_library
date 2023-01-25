#pragma once
#include <iostream>
#include <vector>

using namespace std;

class clsUtil
{
public:
    static void swap(int &x, int &y)
    {
        int number=0;
        number=x;
        x=y;
        y=number;
    }
};