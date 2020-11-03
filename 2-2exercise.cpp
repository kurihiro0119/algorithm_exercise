#include <iostream>
#include <stdio.h>

int main()
{
    int N = 6;
    for (int i=0; i < N; ++i){
        for(int j= i + 1; j < N; ++j){
            for(int k = j + 1; k< N; ++k){
    std::cout << i << std::endl;
    std::cout << j << std::endl;
    std::cout << k << std::endl;
    std::cout << "-------" << std::endl;

                        }
        }
    }
}