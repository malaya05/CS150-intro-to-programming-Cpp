/**
 *  @author Alaya
 *  @date fall 2016
 *  @file main.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "cs150check.h"           // Always include this

string STUDENT = "malaya";  // Add your Blackboard login name
bool TESTING = true;             // Change to true for simple IO tests

// Include your own header files here
     const int FILM_COAST = 10;
     const int SITCOMS_COAST = 3;

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
    /*
        With the hot new mobile game (Android/IOS) Angry Nerds, you not only score
points, but can also earn online coupons depending on how well you play the
game. You can redeem the coupons on the new video-sharing site Aflicks. (Another
one of Ben's great investments.)
For 10 coupons you can download full-length, current feature film. For 3 coupons,
you can download a half-hour episode of a "classic" 1960's situation comedy. You
prefer current feature films to old television reruns. Write a program that inputs
the number of coupons you have won and prints out how many feature films and
television sitcoms you can get if you spend all of your coupons on films first and
any remaining coupons on sitcoms.
-------------------------------------------------------------------------------
    sgilbert-H02-Angry Nerds
------------------------------------------
Number of coupons to redeem: 18
With 18 coupons you can watch the following.
Films, sitcoms, left-over coupons [1, 2, 2]

    */
    
    // into
    cout << STUDENT << "-H02-Angry Nerds" << endl;
    cout << "------------------------------------------" << endl;
    //input part 
    cout << " Enter how many coupons you have to redeem: ";
    int coupon;
    cin >> coupon;
    
    int films, sitcoms, rcoup;
    // proces 
    films   = coupon / FILM_COAST;

   rcoup = coupon % FILM_COAST;
  
    sitcoms = rcoup / SITCOMS_COAST;
    
    rcoup %= SITCOMS_COAST;

    // output
    cout << "With " << coupon << " coupons you can watch the following." << endl;
    cout << "Films, sitcoms, left-over coupons [" << films 
         << ", " << sitcoms << ", " << rcoup << "]" << endl;
    
    
    
    return 0;
}

