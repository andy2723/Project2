#include <iostream>
#include <string>
#include <cassert>

#include "Functions2.h"

 //test functions 
int main(){
    int x = 20;
    int y = 20;
    int result = multiply_and_explain(x, y);
    assert(result == 400);
    x = -20;
    y = 20;
    result = multiply_and_explain(x,y);
    assert(result == -400);
    x = -20;
    y = -20;
    result = multiply_and_explain(x,y);
    assert(result == 400);
return 0;
}


