#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisible(int n, int d){
    return (n % d == 0);
}

bool isPrime(int n){
    int x = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            x++;
        }
        if (x > 2){
            return false;
        }
    }
    if (n < 2 ){
        return false;
    }
    return true;
}

int nextPrime(int n){
    int j = n+1;
    while (isPrime(j)){
        j++;
    }
    return j;
}

int countPrimes(int a, int b){
    int x = 0;
    for (int i = a; i <= b; i++){
        if (isPrime(i)){
            x++;
        }
    }
    return x;
}

bool isTwinPrime(int n){
    int x = 0;
    if (isPrime(n)){
        if(isPrime(n+2) || isPrime(n-2)){
            return true;
        }
    } else {
        return false;
    }
    return 0;
}

int nextTwinPrime(int n){
    int x = 1;
    while (isPrime(n)){
        if (isTwinPrime(n+x)){
            return n+x;
        } else {
            x++;
        }
    }
    return 0;
}

int largestTwinPrime(int a, int b){
    int z = -1;
    for (int i = a; i <= b; i++){
        if (isTwinPrime(i)){
            z = i;
        }
    }
    return z;
}

