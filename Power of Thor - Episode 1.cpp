#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    int moveX, moveY;
    string move ;
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        moveX = initialTX-lightX;
        moveY = initialTY-lightY;
        if(moveX <= 0 && moveY <= 0){
            if((-moveX)>(-moveY)){
                move = "E";
                initialTX++;
            }
            else if((-moveX)<(-moveY)){
                move = "S";
                initialTY++;
            }
            else{
                move = "SE";
                initialTX++;
                initialTY++;
            }
        }

        if(moveX <= 0 && moveY > 0){
            if((-moveX)>=moveY){
                move = "E";
                initialTX++;
            }
            else if((-moveX)<moveY){
                move = "N";
                initialTY--;
            }
            else{
                move = "NE";
                initialTX++;
                initialTY--;
            }
        }

        if(moveX > 0 && moveY <= 0){
            if(moveX>(-moveY)){
                move = "W";
                initialTX--;
            }
            else if(moveX<(-moveY)){
                move = "S";
                initialTY++;
            }
            else{
                move = "SW";
                initialTX--;
                initialTY++;
            }
        }

        if(moveX > 0 && moveY > 0){
            if(moveX>=moveY){
                move = "W";
                initialTX--;
            }
            else if(moveX<moveY){
                move = "N";
                initialTY--;
            }
            else{
                move = "NW";
                initialTX--;
                initialTY--;
            }
        }
       cerr << "Debug messages "<< endl;
       // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << move << endl;
    }
}
