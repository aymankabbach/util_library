#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{ 
    srand (time(NULL));
    cout<<clsUtil::generate_random_number(10,90)<<endl;
    system("pause");
    return 0;
}
