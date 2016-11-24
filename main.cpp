/**
 **************************************************
 *  @author : CHOUENYIB ALI
 *  
 *  @last_edition : 17 - 11 -12
 *
 *  @filename : main.cpp
 *
 *  @description:
 *            ___________________________________________________________________________________
 *  ---------| S É L E C T I O N      O P T I M A L E     D E     P O I N T       D E     V U E |---------
 *  ---------|                                                                                  |---------
 *  ---------|      P O U R    L A     V I S U A L I S A T I O N       V O L U M I Q U E        |---------
 *  ---------+----------------------------------------------------------------------------------+---------
 *
 *  @compilation:
 *      g++ (Linux version) : g++ -o main optimalViewPoint.cpp main.cpp -O2 -L/usr/X11R6/lib -lm -lpthread -lX11
 *      g++ (Mac OS X version) : g++ -o main optimalViewPoint.cpp main.cpp -O2 -lm -lpthread -L/usr/X11R6/lib -lm -lpthread -lX11 (non testé)
 *      g++ (MingW windows version) : g++ -o main.exe optimalViewPoint.cpp main.cpp -O2 -lgdi32 (non testé)
 *
 *  @execution:
 *      ./main image3d_name.hdr
 **/
 
#include "lo3v.h"

using namespace cimg_library;

int main(int argc, char ** argv) 
{
    int test = 5;
    std::cout << " jusqu'ici, ça va :) ! 5/" << test << std::endl;
    
    return EXIT_SUCCESS;
}
