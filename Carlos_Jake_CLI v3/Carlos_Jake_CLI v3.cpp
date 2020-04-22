 //
//  main.cpp
//  carlosProgress
//
//  Created by Andrea Lopez on 10/21/19.
//  Copyright © 2019 Carlos Lopez. All rights reserved.
//

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Shephard_CLI.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream> // std::cout, std::cin
#include <stdio.h>
#include <fstream>    //std::ofstream, std::ifstream
#include <string>    // strings
using namespace std;

//global scope variables
const int pastureSizeX = 17; // number of columns
const int pastureSizeY = 17;  // number of rows
const int shephardPositionY = 0; //x position of shephard
const int shephardPositionX = 0; // y position of shephard
char pasture[pastureSizeX][pastureSizeY];
char shephardCharacter = '#'; // represents the shephard
char trapCharacter = 'T'; //T is laying down traps
int trapPositionX =1;  //initializer
int trapPositionY =1;  // initializer
int playerGuess = 0; //used in if statements of sheepMoving

//variables for the sheep positions in the array
int sheep1PositionY = 9; //x position of sheep 1
int sheep1PositionX = 3; //y position of sheep 2
char sheep1Character = '$'; //represents the sheeps

int sheep2PositionY = 12;
int sheep2PositionX = 15;
char sheep2Character = '$';

int sheep3PositionY = 14;
int sheep3PositionX = 14;
char sheep3Character = '$';

int sheep4PositionY = 7;
int sheep4PositionX = 14;
char sheep4Character = '$';

int sheep5PositionY = 4;
int sheep5PositionX = 14;
char sheep5Character = '$';


// this class will get the players input for trap location
class sheepTrapClass{
    
public:
    int createTrapFunction(){
        cout << "Enter X axis for next Trap:   ";
        cin >> trapPositionY ;
        cout  << "Enter Y axis for next Trap:   ";
        cin >> trapPositionX;
        cout << endl;
        //This is for ease of readability
        cout<< "-------------------------------------------------------" << endl;
        
        return 0;
    }
};

//this class places all the sheep in a location on the array
struct sheepPositionClass: public sheepTrapClass{
 
    //places the position of he sheeps with the $ character
    int sheepPositionFunction(){
        
        pasture[sheep1PositionX][sheep1PositionY] = sheep1Character;
        pasture[sheep2PositionX][sheep2PositionY] = sheep2Character;
        pasture[sheep3PositionX][sheep3PositionY] = sheep3Character;
        pasture[sheep4PositionX][sheep4PositionY] = sheep4Character;
        pasture[sheep5PositionX][sheep5PositionY] = sheep5Character;
        
        return 0;
    }
};

//changes the location variables of all the sheep in the array
class sheepMoving{
public:
    
    int movingFunction(){
        if (playerGuess == 1) { // playerGuess starts at 0 and is incremented in the main class
            sheep1PositionX = sheep1PositionX - 1;
            sheep1PositionY = sheep1PositionY - 3;
            
            sheep2PositionX = sheep2PositionX - 4;
            sheep2PositionY = sheep2PositionY - 3;
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 2) {
            sheep1PositionX = sheep1PositionX - 1;
            sheep1PositionY = sheep1PositionY - 3;
            
            sheep2PositionX = sheep2PositionX - 4;
            sheep2PositionY = sheep2PositionY - 3;
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 3) {
            sheep1PositionX = sheep1PositionX - 1; // last guess before sheep 1 reaches shephard
            sheep1PositionY = sheep1PositionY - 3;
            
            sheep2PositionX = sheep2PositionX - 4;
            sheep2PositionY = sheep2PositionY - 3;
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 4) {
            
            sheep2PositionX = sheep2PositionX - 4;   //last guess before sheep 2 reaches shephard
            sheep2PositionY = sheep2PositionY - 3;
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3; // last guess before sheep 5 reaches shephard
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 5) {
            
            sheep2PositionX = sheep2PositionX - 4;
            sheep2PositionY = sheep2PositionY - 3;
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 6) {
            
            sheep3PositionX = sheep3PositionX - 2;
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2; // last guess before sheep 4 reaches shephard
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        if (playerGuess == 7) {
            
            sheep3PositionX = sheep3PositionX - 2;  //last guess before sheep 3 reaches shephard
            sheep3PositionY = sheep3PositionY - 2;
            
            sheep4PositionX = sheep4PositionX - 2;
            sheep4PositionY = sheep4PositionY - 1;
            
            sheep5PositionX = sheep5PositionX - 3;
            sheep5PositionY = sheep5PositionY - 1;
        }
        return 0;
    }
};



// create and print a two dimensional array
class createPastureClass: public sheepPositionClass{
    
    public :
    
    int createPastureFunction()
    {
        //cout << "createPasturefunction" << endl;
        for(int x = 0; x < pastureSizeX; x++){
            
            for (int y = 0; y < pastureSizeY; y++) {
                
                pasture[x][y] = '_';
                pasture[1][0] = '1'; //this series of numbers changes array values and helps with readablility
                pasture[2][0] = '2';
                pasture[3][0] = '3';
                pasture[4][0] = '4';
                pasture[5][0] = '5';
                pasture[6][0] = '6';
                pasture[7][0] = '7';
                pasture[8][0] = '8';
                pasture[9][0] = '9';
                pasture[10][0] = '0';
                pasture[11][0] = '1';
                pasture[12][0] = '2';
                pasture[13][0] = '3';
                pasture[14][0] = '4';
                pasture[15][0] = '5';
                pasture[16][0] = '6';
            }
        }
        // these display the sheep position class and stores values to the sheep in the array
        pasture[shephardPositionX][shephardPositionY] = shephardCharacter;    // Displays # at  0, 0
        pasture[trapPositionX][trapPositionY] = trapCharacter;    //Displays T
        //this calls the sheep position class and stores values to the sheep in the array
        sheepPositionClass sheepsSpot;
        sheepsSpot.sheepPositionFunction();
        
        return 0;
    }
    //this prints out the aray row by row and gives it the proper spacing and seperation with pipes
    int printPastureFunction(){
        
        for(int x = 0; x < pastureSizeY; x++){
            
            for (int y = 0; y < pastureSizeX; y++) {
                
                cout << "|"<< pasture[x][y] << "|";
                
            }
            
            cout << " " << endl;
        }       
        return 0;
    }
};

//This class appends the players name to a csv file
struct playerNameClass{
    
    int playerNameFunction(){
		string name;

		cout << "What is your name? \n";

		ofstream fout;
		ifstream fin;
		//opens the file
		fin.open("Name&Score.csv");
		cin >> name;
		//ios::app appends to the csv file
		fout.open("Name&Score.csv", ios::app);
		//output name and a comma to seperate the values
		if (fin.is_open())
			fout << name + ',';
		fin.close();
		fout.close();

        
        return 0;
    }
};

//this class is changed by other classes and when either lives or sheepRemaining is 0 the main loop will stop
class scoreClass{
  
public:
    
    int lives =3;
    int sheepRemaining =5;
    
    int printScoreFunction(){
        std::cout << "Lives Remaining:" <<lives<< endl;
        std::cout << "Sheep Remaining:"<< sheepRemaining<<endl;
        
        return 0;
    };
};


class sheepCatcherClass: public sheepPositionClass, public scoreClass{
    public:
	int sheepCaughtFunction(){
		//when trap is equal to a sheep position it will deduct from sheepRemaining (above) and change the sheep to an X and move it
        if ( (pasture[trapPositionX][trapPositionY]==pasture[sheep1PositionX][sheep1PositionY]) )
        {
            cout<< "CAUGHT A SHEEPIE"<< endl;
			scoreClass::sheepRemaining--;
			sheep1Character = 'X';
			sheep1PositionY = 17;
			sheep1PositionX = 17;
			cout << "There are " << sheepRemaining << " sheep remaining."<<endl;
			
        }
        else if ( (pasture[trapPositionX][trapPositionY]==pasture[sheep2PositionX][sheep2PositionY]) )
        {
            cout<< "CAUGHT A SHEEPIE"<< endl;
			scoreClass::sheepRemaining--;
			sheep1Character = 'X';
			sheep1PositionY = 18;
			sheep1PositionX = 17;
			cout << "There are " << sheepRemaining << " sheep remaining."<<endl;
			
        }
        else if ( (pasture[trapPositionX][trapPositionY]==pasture[sheep3PositionX][sheep3PositionY]) )
        {
            cout<< "CAUGHT A SHEEPIE"<< endl;
			scoreClass::sheepRemaining--;
			sheep1Character = 'X';
			sheep1PositionY = 16;
			sheep1PositionX = 17;
			cout << "There are " << sheepRemaining << " sheep remaining."<<endl;
			
        }
        else if ( (pasture[trapPositionX][trapPositionY]==pasture[sheep4PositionX][sheep4PositionY]) )
        {
            cout<< "CAUGHT A SHEEPIE"<< endl;
			scoreClass::sheepRemaining--;
			sheep1Character = 'X';
			sheep1PositionY = 15;
			sheep1PositionX = 17;
			cout << "There is " << sheepRemaining << " sheep remaining."<<endl;
			
        }
        else if ( (pasture[trapPositionX][trapPositionY]==pasture[sheep5PositionX][sheep5PositionY]) )
        {
            cout<< "CAUGHT A SHEEPIE"<< endl;
			scoreClass::sheepRemaining--;
			sheep1Character = 'X';
			sheep1PositionY = 14;
			sheep1PositionX = 17;
			cout << "YOU GOT ALL THE SHEEP! YOU'RE SAFE NOW!!'"<<endl;
			
        }
        //if trap location does not match any  sheep position 
        else{
        	cout << "YOU MISSED" << endl;
		}
        
        return 0;
    }
};
class shephardAttackedClass: public sheepPositionClass, public scoreClass{
	public:
	int shephardHitFunction(){
		
		//very similar to sheepCatcherClass (above). if sheep position is 0,0 it will deduct from lives
		if (pasture[shephardPositionX][shephardPositionY] == pasture[sheep1PositionX][sheep1PositionY])
		{
			cout << "OUCH CHARLIE, YOU BIT MY FINGER!"<< endl;
			scoreClass::lives--;
			cout << "There are " << lives << " lives remaining!" << endl;
		}
		else if (pasture[shephardPositionX][shephardPositionY] == pasture[sheep2PositionX][sheep2PositionY])
		{
			cout << "OUCH CHARLIE, YOU BIT MY FINGER AGAIN!"<< endl;
			scoreClass::lives--;
			cout << "There are " << lives << " lives remaining!" << endl;
		}
		else if (pasture[shephardPositionX][shephardPositionY] == pasture[sheep3PositionX][sheep3PositionY])
		{
			cout << "OUCH CHARLIE, YOU BIT MY FINGER AGAIN!"<< endl;
			scoreClass::lives--;
			cout << "There are " << lives << " lives remaining!" << endl;
		}
				else if (pasture[shephardPositionX][shephardPositionY] == pasture[sheep4PositionX][sheep4PositionY])
		{
			cout << "OUCH CHARLIE, YOU BIT MY FINGER AGAIN!"<< endl;
			scoreClass::lives--;
			cout << "There are " << lives << " lives remaining!" << endl;
		}
				else if (pasture[shephardPositionX][shephardPositionY] == pasture[sheep5PositionX][sheep5PositionY])
		{
			cout << "OUCH CHARLIE, YOU BIT MY FINGER AGAIN!"<< endl;
			scoreClass::lives--;
			cout << "There are " << lives << " lives remaining!" << endl;
		}
}
};
    

int main()
{
    //intro story printout with instructions
    cout << "************************************************************************" << endl;
    cout << "**  The rules of the game are simple: Don't let the sheep get to you  **" << endl;
    cout << "**       Every turn you will guess where the sheep will be next       **" << endl;
    cout << "** Enter in where you want the trap to be: 0 - 17 on the X and Y axis **" << endl;
    cout << "**  You have 3 lives and there are 5 sheep              GOOD LUCK!    **" << endl;
    cout << "************************************************************************" << endl;

	//instance of the player name class and runs the function to write to a CSV file
    playerNameClass name;
    name.playerNameFunction();
    
    //instance of the score class
    scoreClass counter;
    counter.lives;
    counter.sheepRemaining;
    
    //using the abvove instance to compare variables to 0
    while (counter.lives > 0 || counter.sheepRemaining > 0) { 
       
        // an array that is above the main array. it is not effected by any part of this program
        char horizontalArray[55]= {'|','0','|','|','1','|','|','2','|','|','3','|','|','4','|','|','5','|','|','6','|','|','7','|',
									'|','8','|','|','9','|','1','0','|','1','1','|','1','2','|','1','3','|','1','4','|','1','5','|',
									'1','6','|'};
		cout << horizontalArray << endl;
        
        //instance of create pasture where it also prints the pasture
        createPastureClass matrix;
        matrix.createPastureFunction();
        matrix.printPastureFunction();
        
        //instance of the trap class that calls for the player's trap guess
        sheepTrapClass trap;
 		trap.createTrapFunction();
        //instance of the class that checks if trap is equal to sheep
        sheepCatcherClass caughtSheep;
        caughtSheep.sheepCaughtFunction();
        //instance of the class that checks if sheep is equal to shephard
        shephardAttackedClass livesLost;
        livesLost.shephardHitFunction();
        //a counter that goes through the sheep movements (found near the top)
        playerGuess++;
        
        //runs the sheepMoving function
        sheepMoving sh1;
        sh1.movingFunction();    
    }
    return 0;
    }

