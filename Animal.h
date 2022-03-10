///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author David Paco <dpaco@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#pragma once
#include <string>

const float UNKNOWN_WEIGHT = -1;

enum Gender {
    UNKNOWN_GENDER,
    MALE,
    FEMALE
};

class Animal {
protected:
    static const std::string kingdom; // All Animals are Animalia
    std::string species;                           // Required
    enum Gender gender = UNKNOWN_GENDER;           // Default to UNKNOWN_GENDER
    float weight = UNKNOWN_WEIGHT;                 // -1 is Unknown. ALl other weights must be >0
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
