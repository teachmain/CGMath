#pragma once
template <int N, class T> class vec{
    public:
        static const int size = N;
        vec<N,T>();
        vec<N,T>(vec<N,T> &&);
        ~vec<N,T>();
    private:
        
};
using vec2  = vec<2,double>;
using vec3  = vec<3,double>;
using vec4  = vec<4,double>;