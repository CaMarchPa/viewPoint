/**
 **************************************************
 *  @author : CHOUENYIB ALI
 *  
 *  @last_edition : 17 - 11 -12
 *
 *  @filename : lo3v.h
 *
 *  @description:
 *            ___________________________________________________________________________________
 *  ---------| S É L E C T I O N      O P T I M A L E     D E     P O I N T       D E     V U E |---------
 *  ---------|                                                                                  |---------
 *  ---------|      P O U R    L A     V I S U A L I S A T I O N       V O L U M I Q U E        |---------
 *  ---------+----------------------------------------------------------------------------------+---------
 **/
 
#ifndef OPTIMAL_VIEW_POINT_H
#define OPTIMAL_VIEW_POINT_H


#include <iostream>
#include "CImg.h"
#include <vector>

class OptimalViewPoint {
    
    // Attributes
        cimg_library::CImg<float> voxel;     // images 3D
        double seuil;   // seuil
        std::vector<float> tabOfViewPointsValues;       // tabOfViewPointsValues[i] £ [0.0 , 1.0] i = 0, 1, ..., n-1 | n = tabOfViewPointsValues.size()
        
    public:
        //Constructor & Destructor
        OptimalViewPoint ();
        OptimalViewPoint (const cimg_library::CImg<float> &);
//        OptimalViewPoint (const unsigned char *);
        OptimalViewPoint (const cimg_library::CImg<float> &, const double );
        
        ~OptimalViewPoint ();
        
        //Properties
        cimg_library::CImg<float> getVoxel () const;
        void setVoxel (const cimg_library::CImg<float> &);
        double getSeuil () const;
        void setSeuil (const double);
        std::vector<float> getViewPoints() const;
        
};

#endif //OPTIMAL_VIEW_POINT_H
