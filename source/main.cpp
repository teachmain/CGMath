#include <vec.h>
#include <iostream>
#include <utility>
vec2 test(vec2& a){
    vec2 result;
    result.payload[0] = 1.0;

    return result;
}
int main(){
    vec2 a;
    a.payload[0] = 1.0;
    a.payload[1] = 2.0;
    vec2 b;
    const vec2 &c = a;
    b = c;
}