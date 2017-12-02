#include<iostream>
#include "array.h"

template<typename T>
myarray<T>::~myarrary() {
	delete md;
}

template<typename T>
myarray<T>::myarray() {
	md = new T(1);
}

template<typename T>
myarray<T>::myarray(int n) {
	md = new T(n);
}

template<typename T>        
T &myarray<T>::operator[](int n) {
	return md[n];
}

template<typename T>        
const T &myarray<T>::operator[](int n) const{
	return md[n];
}

template<typename T>       
void myarray<T>::insert(const T &m, int n){
	md[n] = m;
}

template<typename T>
void myarray<T>::resize(int n){
	if (n==msize)
		return;
	T *t = md;
	md = new T[n];
	copy(t, n>msize?msize:n);
	delete t;

	msize = n;
}

template<typename T>
void myarray<T>::copy(T *data, int n){
	for(int i=0;i<n;i++) {
		md[i]= data[i];
	}
}

template<typename T>
myarray<T>::myarray(const myarray &data){
	md = data.md;
	msize = data.msize;
}

template<typename T>
myarray<T> &myarray<T>::operator=(const myarray &data){
	md = data.md;
	msize = data.msize;
}

int main() {
	myarray<int> *ma = new myarray<int>(10);
	for(int i=0;i<10;i++) {
		ma->insert(i,i);
	}
	for(int i=0;i<10;i++) {
		std::cout<<(*ma)[i]<<std::endl;
	}

}


