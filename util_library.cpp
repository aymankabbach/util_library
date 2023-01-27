#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{ 
    srand (time(NULL));
    clsUtil::generate_random_keys(10);
    system("pause");
    return 0;
}
