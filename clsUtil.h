#pragma once
#include <iostream>
#include <bits/stdc++.h>
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
    static short generate_random_number(short from,short to)
    {
        short random_number=rand()% to;
        while (random_number<from)
        {
            random_number=rand()% to; 
        }
        return random_number;
    }
};