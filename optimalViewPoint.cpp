/**
 **************************************************
 *  @author : CHOUENYIB ALI
 *  
 *  @last_edition : 17 - 11 -12
 *
 *  @filename : optimalViewPoint.cpp
 *
 *  @description:
 *            ___________________________________________________________________________________
 *  ---------| S É L E C T I O N      O P T I M A L E     D E     P O I N T       D E     V U E |---------
 *  ---------|                                                                                  |---------
 *  ---------|      P O U R    L A     V I S U A L I S A T I O N       V O L U M I Q U E        |---------
 *  ---------+----------------------------------------------------------------------------------+---------
 **/

#include "lo3v.h"

using namespace cimg_library;
 
//Constructor & Destructor
OptimalViewPoint::OptimalViewPoint () {
    this->seuil = 0;
}

OptimalViewPoint::OptimalViewPoint (const CImg<float> & _voxel) {
    this->voxel = _voxel;
    this->seuil = 0;
}


OptimalViewPoint::OptimalViewPoint (const CImg<float> & _voxel, const double _seuil) {
    this->voxel = _voxel;
    this->seuil = _seuil;
}

OptimalViewPoint::~OptimalViewPoint () {
    //
}

//Properties
CImg<float> OptimalViewPoint::getVoxel () const {
    return this->voxel;
}

void OptimalViewPoint::setVoxel (const CImg<float> & _voxel) {
    this->voxel = _voxel;
}

double OptimalViewPoint::getSeuil () const {
    return this->seuil;
}

void OptimalViewPoint::setSeuil (const double _seuil) {
    this->seuil = _seuil;
}

std::vector<float> OptimalViewPoint::getViewPoints() const {
    return this->tabOfViewPointsValues;
}
    
