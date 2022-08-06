#ifndef MATHLAW_H
#define MATHLAW_H

#include <cstdint>
#include <iostream>
#include <array>

// insert code here 

namespace mathlaw {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // algebra section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace algebra {

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // calculus section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace calculus {

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // discrete section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace discrete {

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // geometry section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace geometry {

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // number section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace number {
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Eratosthenes Table : Prime Numbers
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /**
         *
         * @tparam T
         */
        template<typename T>
        struct Entry {
            T number_m;
            bool isPrime_m;
        };

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        class EratosthenesTable {
        public:
            EratosthenesTable();
            void PrintTable();
            T GetPrimeNumber(T primeIndex);
            T GetPrimeCount();
        private:
            void FillTable();
            void CrossTable();
            void ReorderTable();
            std::array<Entry<T>,N-1> entries_m; // range is [2 ; N] => (N-2+1 = N -1) numbers
            T primeCount_m{0};


        };

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        EratosthenesTable<T,N>::EratosthenesTable() {
            FillTable();    // fill the eratosthenes table with numbers [2 ; N]
            CrossTable();   // set the status for all prime numbers while counting them
            ReorderTable(); // reorder the table so that all prime numbers are in order
        }

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        void EratosthenesTable<T,N>::PrintTable() {
            for(T i = 0; i < primeCount_m; i++){
                std::cout << unsigned(GetPrimeNumber(i)) << " is prime!" << std::endl;
            }
        }

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        void EratosthenesTable<T,N>::FillTable() {
            for(T i = 0; i < entries_m.size(); i++){
                entries_m[i].isPrime_m = false;
                entries_m[i].number_m = i+2;
            }
        }

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        void EratosthenesTable<T,N>::CrossTable() {
            for(T i = 0;i < entries_m.size(); i++){
                for(T j = 0; j <= i; j++){
                    if(i == j){
                        if(entries_m[i].number_m == 1){
                            entries_m[i].isPrime_m = false;
                        }
                        else{
                            entries_m[i].isPrime_m = true;
                            primeCount_m++;
                        }
                    }
                    else{
                        if((entries_m[j].number_m != 1) && (entries_m[i].number_m % entries_m[j].number_m == 0)){
                            break;
                        }
                    }
                }
            }
        }

        /**
         *
         * @tparam T
         * @tparam N
         */
        template<typename T,T N>
        void EratosthenesTable<T,N>::ReorderTable(){
            T index = 0;
            for(T i = 0; i < entries_m.size();i++){
                if(entries_m[i].isPrime_m){
                    Entry<T> temp = entries_m[index];
                    entries_m[index] = entries_m[i];
                    entries_m[i] = temp;
                    index++;
                }
                if(index>=primeCount_m){
                    break;
                }
                else{
                    // continue
                }
            }
        }

        /**
         *
         * @tparam T
         * @tparam N
         * @param primeIndex
         * @return
         */
        template<typename T,T N>
        T EratosthenesTable<T,N>::GetPrimeNumber(T primeIndex) {
            T primeChecked = 0;
            T result = 1;    // <-- 1 is not prime so good candidate here
            if(primeIndex < primeCount_m){
                for(T i = 0; i < N; i++){
                    if(entries_m[i].isPrime_m){
                        if(primeIndex == primeChecked){
                            result = entries_m[i].number_m;
                            break;
                        }
                        else {
                            primeChecked++;
                        }
                    }
                }
            }
            else{
                // Nothing to do
            }
            return result;
        }

        /**
         *
         * @tparam T
         * @tparam N
         * @return
         */
        template<typename T,T N>
        T EratosthenesTable<T,N>::GetPrimeCount() {
            return primeCount_m;
        }


        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Fibonacci Table : Fibonacci Numbers
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // statistics section
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    namespace statistics {

    }
}
#endif
