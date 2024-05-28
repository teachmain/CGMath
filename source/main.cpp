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
    b.payload[0] = 1.0;
    b.payload[1] = 2.0;
    b = a + a + b;
    printf("%lf,%lf\n",b.payload[0],b.payload[1]);
}