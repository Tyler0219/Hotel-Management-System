#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    int rooms = 42;
    int roomsSelection = 0;
    int roomCost = 0;

    m://menu
    cout << "Welcome To The Hotel Management System!\n";
    cout << "We have " << rooms - roomsSelection << " room(s) left!\n";
    cout << "1: Reserve a room\n"; 
    cout << "2: No thanks. \n";
    cout << "Please make your selection with the number 1 or 2: ";
    cin >> choice;

    // reservation choice
    switch (choice){
    case 1:// yes
        cout << "How many rooms would you like to reserve?\n";
        cout << "Enter Here: ";
        cin >> quant;
        if (rooms - roomsSelection >= quant){
            roomsSelection = roomsSelection + quant;
            roomCost = roomCost + quant;
            cout << "" << quant << "  room(s) have been reserved!\n\n";
        } else {
            cout << "Sorry only " << rooms - roomsSelection <<" room(s) are available.\n\n";
        }
        goto m; 

    case 2://no
        cout << "Have a nice day!\n"; 
        break;
    case 0:// a number not listed
        exit(0);
        default:
            cout << "Please choose  1 or 2.\n\n";
            goto m; 
    }
    
}