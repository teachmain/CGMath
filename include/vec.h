#pragma once
template <int N, class T> class vec{
    public:
        static const int size = N;
        T *payload= nullptr;
        vec();
        vec(vec<N,T> &&);
        vec(const vec<N,T> &);
        void clean();
        ~vec();
        vec<N,T>& operator = (const vec<N,T> &);
        vec<N,T>& operator = (vec<N,T> &&);
        vec<N,T> operator + (const vec<N,T> &);
    private:
        
};

using vec2 = vec<2,double>;