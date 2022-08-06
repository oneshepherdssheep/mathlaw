//
// Created by oneshepherdssheep on 06/08/2022.
//

#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include "mathlaw.h"

/**
 * @brief TEST_CASE : List of prime numbers from [1-100]
 */
TEST_CASE("List of prime numbers from [1-100]","[prime_numbers]") {
    mathlaw::number::EratosthenesTable<uint8_t,100> eratosthenesTable100;
    
    // Prime count test
    REQUIRE(eratosthenesTable100.GetPrimeCount() == 25);

    // Prime value test
    REQUIRE(eratosthenesTable100.GetPrimeNumber(0) == 2);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(1) == 3);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(2) == 5);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(3) == 7);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(4) == 11);

    REQUIRE(eratosthenesTable100.GetPrimeNumber(5) == 13);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(6) == 17);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(7) == 19);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(8) == 23);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(9) == 29);

    REQUIRE(eratosthenesTable100.GetPrimeNumber(10) == 31);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(11) == 37);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(12) == 41);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(13) == 43);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(14) == 47);

    REQUIRE(eratosthenesTable100.GetPrimeNumber(15) == 53);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(16) == 59);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(17) == 61);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(18) == 67);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(19) == 71);

    REQUIRE(eratosthenesTable100.GetPrimeNumber(20) == 73);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(21) == 79);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(22) == 83);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(23) == 89);
    REQUIRE(eratosthenesTable100.GetPrimeNumber(24) == 97);
}