#include <vec.h>
#include <cstdio>
#include <cstring>
template class vec<2,double>;

template<int N,class T>
vec<N,T> :: vec(){
    payload = new T[size];
    printf("构造0x%x, payload 0x%x\n",this,payload);
}
template<int N,class T>
vec<N,T> :: vec(const vec<N,T> & b){
    printf("拷贝构造\n");
    this->payload = new T[size];
    memcpy(this->payload,b.payload,size*sizeof(T));
}

template<int N,class T>
void vec<N,T> :: clean(){
    payload = nullptr;
}

template<int N,class T>
vec<N,T> :: vec(vec<N,T> && b){
    this->payload = b.payload;
    b.clean();
    printf("移动构造\n");
}

template<int N,class T>
vec<N,T> :: ~vec(){
    delete[] payload;
    printf("析构0x%x, payload 0x%x\n",this,payload);
}

template<int N,class T>
vec<N,T>& vec<N,T>::operator = (const vec<N,T> & b){
    printf("=\n");
    memcpy(this->payload,b.payload,size*sizeof(T));
    return *this;
}
template<int N,class T>
vec<N,T>& vec<N,T>::operator = (vec<N,T> && b){
    printf("移动赋值\n");
    this->payload = b.payload;
    b.payload = nullptr;
    return *this;
}