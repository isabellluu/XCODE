//
//  main.c
//  test
//
//  Created by Luu, Isabel on 10/3/18.
//  Copyright © 2018 Luu, Isabel. All rights reserved.
//

/* Pseudocode Lab 8
 
 Step 1: 2 leg lengths, hypotenuse, sidelengths square
 
 Step 2:
 double hypotenuse;
 double legssquared;
 float leg_a;
 float leg_b;
 
 Step 3/4:
 I. Set up Code and Gain data from user
 a. Include math libary
 b. Prompt and save user's input for one leg length
 c. Prompt and save user's input for another leg length
 
 II. Calculate Data
 a. Call function ABC
 b. Place equation in ABC
 c. Call function sqrt
 d. Place equation in sqrt
 
 III. Display results
 a. Use printf to display the hypotenuse 
 */

#include <stdio.h>
#include <math.h>

double abc (float, float);
double sqrt (double x);

int main() 
{
    //Step 2:
    double hypotenuse;
    double legssquared;
    float leg_a;
    float leg_b;
    
    /*Step 3/4
     I. Set up code and gain data from user
     a. Include math libary
     
     b. Prompt and save user's input for one leg length */
    printf("Input the length of one leg of a right triangle: ");
    scanf("%f", &leg_a);
    
    //c. Prompt and save user's input for another leg length
    printf("Input another length of a leg of a right triangle: ");
    scanf("%f", &leg_b);
    
    /*II. Calculate Data
     a. Call function ABC
     ABC
     b. Place equation in ABC
     c. Call function sqrt
     d. Place equation in sqrt  */
    
    return 0;
}

/************************************* function ABC *************************************/
int abc()
{
    //define variables
    float squaredleg;
    float leg1;
    float leg2;
    
    squaredleg = (leg1)*(leg1) + (leg1)*(leg1);
    
    return(squaredleg);
}

