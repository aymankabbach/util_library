#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{ 
    int x=2;
    int y=3;
    clsUtil::swap(x,y);
    cout<<"x "<<x<<" "<<"y "<<y<<endl;
    system("pause");
    return 0;
}
