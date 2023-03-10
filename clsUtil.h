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
    static char generate_random_upper_character()
    {
        char letter=generate_random_lower_character();
        letter-=32;
        return letter;
    }
    static string generate_random_key()
    {
        string key;
        for (short x=0 ; x<12; x++)
        {
            key+=generate_random_upper_character();
            if (x==3 || x==7)
            {
                key+="-";
            }
        }
        return key;
    }
    static void generate_random_keys(short times)
    {
        for (short x=0;x<times ;x++)
        {
            cout<<generate_random_key()<<endl;
        }
    }
};