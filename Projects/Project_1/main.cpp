/* 
 * File:   main.cpp
 * Author: Adam
 *
 * Created on January 25, 2018, 1:22 PM
 */

//This program is a recreation of the game "Connect Four"

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;

int main() 
{
    char choice;//variable to hold user's menu selection
    do
    {
        //startup menu
        cout << "Time for a game of Connect Four! "<< endl << endl;
        cout << "To start, type 'a'." << endl;
        cout << "To register your name, type 'b'." << endl; //this feature will be moved to the end of the game in the complete version
        cout << "To see the last registered victor, type 'c'." << endl;
        cout << "To exit, type 'd'." << endl << endl;
        cin >> choice;//get the user's selection
        switch(choice)//determine the user's selection
        {
            case 'a'://start the game if "a" was selected
            {
                //construct the board
                char board[6][7];
                for (int i = 0; i <= 6; i++)
                {
                    board[0][i] = ' ';
                }
                for (int i = 0; i <= 6; i++)
                {
                    board[1][i] = ' ';
                }
                for (int i = 0; i <= 6; i++)
                {
                    board[2][i] = ' ';
                }
                for (int i = 0; i <= 6; i++)
                {
                    board[3][i] = ' ';
                }
                for (int i = 0; i <= 6; i++)
                {
                    board[4][i] = ' ';
                }
                for (int i = 0; i <= 6; i++)
                {
                    board[5][i] = ' ';
                }
                int column;//integer to hold column number
                int chip1 = 5;//integer to hold # chips in column 1
                int chip2 = 5;//integer to hold # chips in column 2
                int chip3 = 5;//integer to hold # chips in column 3
                int chip4 = 5;//integer to hold # chips in column 4
                int chip5 = 5;//integer to hold # chips in column 5
                int chip6 = 5;//integer to hold # chips in column 6
                int chip7 = 5;//integer to hold # chips in column 7
                int turn = 0;//integer to hold turn count
                int player;//integer to determine whose turn it is
                bool full = true;//determine if a column is full
                bool win1 = false;//determine if player 1 has won
                bool win2 = false;//determine if player 2 has won 
                while (turn < 42 && win1 == false && win2 == false)//continue the game until a player wins
                {
                    full = false;
                    if (turn % 2 == 0)
                    {//player 1's turn
                        cout << "Player 1, choose a column." << endl;
                    }
                    else
                    {//player 2's turn
                        cout << "Player 2, choose a column." << endl;
                    }
                    cin >> column;
                    if ((column <= 0) || (column >= 8))
                    {
                        full = true;
                    }
                    if (turn % 2 == 0)//determine player 1's move
                    {
                        if (column == 1)//if player 1 chose column 1...
                        {
                            if (chip1 == -1)//determine if column 1 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip1][0] = 'B';
                                chip1--;
                            }
                        }
                        else if (column == 2)//if player 1 chose column 2...
                        {
                            if (chip2 == -1)//determine if column 2 is full
                            {
                                    cout << "This column is already full." << endl;
                                    full = true;
                                }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip2][1] = 'B';
                                chip2--;
                            }
                        }
                        else if (column == 3)//if player 1 chose column 3...
                        {
                            if (chip3 == -1)//determine if column 3 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip3][2] = 'B';
                                chip3--;
                            }
                        }
                        else if (column == 4)//if player 1 chose column 4...
                        {
                            if (chip4 == -1)//determine if column 4 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip4][3] = 'B';
                                chip4--;
                            }
                        }
                        else if (column == 5)//if player 1 chose column 5...
                        {
                            if (chip5 == -1)//determine if column 5 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip5][4] = 'B';
                                chip5--;
                                }
                            }
                        else if (column == 6)//if player 1 chose column 6...
                        {
                            if (chip6 == -1)//determine if column 6 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip6][5] = 'B';
                                chip6--;
                            }
                        }
                        else if (column == 7)//if player 1 chose column 7...
                        {
                            if (chip7 == -1)//determine if column 7 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a black chip if possible
                            {
                                board[chip7][6] = 'B';
                                chip7--;
                            }
                        }
                        else 
                        {
                            cout << "Invalid input." << endl;
                        }
                    }
                    else//determine player 2's move
                    {
                        if (column == 1)//if player 2 chose column 1...
                        {
                            if (chip1 == -1)//determine if column 1 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip1][0] = 'R';
                                chip1--;
                            }
                        }
                        else if (column == 2)//if player 2 chose column 2...
                        {
                            if (chip2 == -1)//determine if column 2 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip2][1] = 'R';
                                chip2--;
                            }
                        }
                        else if (column == 3)//if player 2 chose column 3...
                        {
                            if (chip3 == -1)//determine if column 3 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip3][2] = 'R';
                                chip3--;
                            }
                        }
                        else if (column == 4)//if player 2 chose column 4...
                        {
                            if (chip4 == -1)//determine if column 4 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip4][3] = 'R';
                                chip4--;
                            }
                        }
                        else if (column == 5)//if player 2 chose column 5...
                        {
                            if (chip5 == -1)
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip5][4] = 'R';
                                chip5--;
                            }
                        }
                        else if (column == 6)//if player 2 chose column 6...
                        {
                            if (chip6 == -1)//determine if column 6 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip6][5] = 'R';
                                chip6--;
                            }
                        }
                        else if (column == 7)//if player 2 chose column 7...
                        {
                            if (chip7 == -1)//determine if column 7 is full
                            {
                                cout << "This column is already full." << endl;
                                full = true;
                            }
                            if (full == false)//place a red chip if possible
                            {
                                board[chip7][6] = 'R';
                                chip7--;
                            }
                        }
                        else if (isalpha(column))
                        {
                            full = true;
                        }
                    }
                    if (full == false)//update and display the board after each turn
                    {
                        for (int j = 0; j <= 5; j++){
                            cout << "+--+--+--+--+--+--+--+" << endl;
                            for (int i = 0; i <= 6; i++)
                            {
                                cout << "| " << board[j][i];
                            }
                            cout << "|" << endl;
                        }
                        cout << "+--+--+--+--+--+--+--+" << endl;
                    }
                    if (turn % 2 == 0)//switch between players after each turn
                    {
                        player = 0;
                    }
                    else
                    {
                        player = 1;
                    }
                    if (full == false)//increase the turn count
                    {
                        turn++;
                    }
                }
                break;
            }           
        case 'b'://register name of winner
        {//Reminder: this feature will be moved to the end of the game in the complete version
            cout << endl;
            ofstream outputFile;
            string name;
            
            outputFile.open("name.txt");
            cout << "Enter your name." << endl;
            cin >> name;
            
            outputFile << name << endl;
            
            outputFile.close();
            break;
        }
            case 'c'://display the last winner if "c" was selected
            {
                cout << endl;
                ifstream inputFile;
                string name;
            
                inputFile.open("name.txt");
                inputFile >> name;
                cout << "The last person to win was: " << name << endl;
              
                inputFile.close();
                break;
            }
            case 'd'://exit the program if "d" was selected
            {
                cout << endl;
                cout << "Exiting the program..." << endl;
                break;
            }
            default: cout << "Error.  Invalid choice." << endl;
        }
    }
    while (choice != 'd');//loop the menu unless "d" is chosen
    return 0;
}