#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{ 
    srand (time(NULL));
    cout<<clsUtil::generate_random_upper_character()<<endl;
    cout<<clsUtil::generate_random_key()<<endl;
    system("pause");
    return 0;
}
