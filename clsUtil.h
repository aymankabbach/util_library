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
    static char generate_random_lower_character()
    {
        vector <char> alphabet={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        short random_position=rand()%alphabet.size();
        while (random_position<=0)
        {
            random_position=rand()%alphabet.size();
        }
        return alphabet[random_position-1];
    }
};