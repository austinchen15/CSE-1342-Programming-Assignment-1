//
//  main.cpp
//
//  CSE 1342 CHENAS Project 1
//
//  Created by Austin Chen on 2/1/16.
//
//  This project contains three functions: randomint, rectangle drawing, and FizzBuzz.
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int main() {
    
    // Declare all variables used
    bool quit = false;
    int menuInput;
    int randLow;
    int randHigh;
    int randNum;
    int rectNum1 = 0;
    int rectNum2 = 1;
    
    
    
    while (quit == false)
    {
        // Opening menu prompt
        string quitVar = ""; // Reset nonstatic quitVar variable at each iteration
        cout << "Welcome to my program! Please choose one of the menu options below." << endl;
        cout << "1. Generate a random number" << endl;
        cout << "2. Print a rectangle" << endl;
        cout << "3. FizzBuzz" << endl;
        cout << "4. Quit" << endl;
        cout << "" << endl;
        cout << "Enter choice here: " << endl;
        
        // Gather user menu choice input
        cin >> menuInput;
        
        // Error check whether user entered an integer out of the menu's range
        if ( !((menuInput == 1) || (menuInput == 2) || (menuInput == 3) || (menuInput == 4)) )
            cout << "Error, please try again" << endl;
        
        // Main menu choices
        else
        {
            // 1. Generate a random number
            if (menuInput == 1)
            {
                // Instructional prompt
                cout << "Enter your random number lower bound (inclusive): " << endl;
                cin >> randLow;
                cout << "Enter your random number upper bound (inclusive): " << endl;
                cin >> randHigh;
                randNum = rand() % (randHigh) + (randLow); // Using rand function to return random number
                cout << "Your random number is: " << randNum << endl;
                
                // Ask if user wishes to return to main menu (with input error checking)
                while ( !(quitVar == "y" || quitVar == "n") )
                {
                    cout << "Would you like to return to the main menu (y/n)?" << endl;
                    cin >> quitVar;
                    if (quitVar == "y")
                        cout << endl;
                    else if (quitVar == "n")
                        return 0;
                }
            } // Generate a random number
            
            // 2. Print a rectangle
            else if (menuInput == 2)
            {
                // Reset rectangle values
                rectNum1 = 0;
                rectNum2 = 1;
                
                // While loop to check whether user inputs numbers between 4 and 15 (inclusive)
                while ( ((rectNum1 < 4) || (rectNum1 > 15)) || ((rectNum2 < 4) || (rectNum2 > 15)) )
                {
                    // Gather user input
                    cout << "Enter two different numbers between 4 and 15 (inclusive). " << endl;
                    cout << "Your first number (height): " << endl;
                    cin >> rectNum1;
                    cout << "Your second number (width): "  << endl;
                    cin >> rectNum2;
                    
                    // If user inputs out of bound numbers, loop will repeat.
                    if ( (rectNum1 < 4) || (rectNum1 > 15) || (rectNum2 < 4) || (rectNum2 > 15) )
                    {
                        cout << "Error: Please enter two new numbers. " << endl;
                    }
                }
                
                cout << "With your height " << rectNum1 << " and width "  << rectNum2 << " , your rectangle is: " << endl;
                // Program will print "i to rectNum1" number of rows
                for (int i = 0 ; i < rectNum1 ; i++)
                {
                    // Program will print "j to rectNum2" number of columns
                    for (int j = 0 ; j < rectNum2 ; j++)
                    {
                        // No endl; so that asterisks can appear on the same line
                        cout << "*";
                        // If j reaches the end of the specified column length, program will begin at the next line.
                        if (j == (rectNum2 - 1))
                            cout << endl;
                    }
                }
                
                // Ask if user wishes to return to main menu (with input error checking)
                while ( !(quitVar == "y" || quitVar == "n") )
                {
                    cout << "Would you like to return to the main menu (y/n)?" << endl;
                    cin >> quitVar;
                    if (quitVar == "y")
                        cout << endl;
                    else if (quitVar == "n")
                        return 0;
                }
            } // Print a rectangle
            
            // FizzBuzz
            else if (menuInput == 3)
            {
                // For loop to print 100 integer values
                for (int i = 1 ; i <= 100 ; i++)
                {
                    // FizzBuzz first checks for multiples of BOTH 4 and 7, as multiples of both 4 and 7 are rarer than each respective value individually.
                    if ( i % 4 == 0 && i % 7 == 0 )
                        cout << "FizzBuzz" << endl;
                    // Then checks for multiples of 4
                    else if (i % 4 == 0)
                        cout << "Fizz" << endl;
                    // Then checks for multiples of 7
                    else if (i % 7 == 0)
                        cout << "Buzz" << endl;
                    // If no matches are found, prints the number
                    else
                        cout << i << ". " << endl;

                }
                
                // Ask if user wishes to return to main menu (with input error checking)
                while ( !(quitVar == "y" || quitVar == "n") )
                {
                    cout << "Would you like to return to the main menu (y/n)?" << endl;
                    cin >> quitVar;
                    if (quitVar == "y")
                        cout << endl;
                    else if (quitVar == "n")
                        return 0;
                }
            } // FizzBuzz
            
            // Quit
            else if (menuInput == 4)
                return 0;
            
            
        } // main error catching 'else' loop
        
    } // main while loop
    
} // main
