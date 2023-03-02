#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("tests"){

    //Task A
    CHECK(isDivisible(100,25));
    CHECK(isDivisible(10,2));

    //Task B
    CHECK(isPrime(5));
    CHECK(isPrime(7));

    //Task C
    CHECK(nextPrime(12));
    CHECK(nextPrime(7));
    CHECK(nextPrime(21));

    //Task D
    CHECK(countPrimes(5,18));
    CHECK(countPrimes(2,5));

    //Task E
    CHECK(isTwinPrime(5));
    CHECK(isTwinPrime(13));

    //Task F
    CHECK(nextTwinPrime(5));
    CHECK(nextTwinPrime(23));

    //Task G
    CHECK(largestTwinPrime(5,18));
    CHECK(largestTwinPrime(14,16));
}