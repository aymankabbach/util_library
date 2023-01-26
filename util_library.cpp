#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{ 
    srand (time(NULL));
    cout<<clsUtil::generate_random_lower_character()<<endl;
    cout<<clsUtil::generate_random_lower_character()<<endl;
    cout<<clsUtil::generate_random_lower_character()<<endl;
    cout<<clsUtil::generate_random_lower_character()<<endl;
    system("pause");
    return 0;
}
