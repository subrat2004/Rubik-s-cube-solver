#ifndef RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
#define RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
//you're starting a C++ header file for a Rubik's Cube solver.
//This guard ensures that if the symbol RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H is not defined, the contents of the file will be included. After the #define statement, the header file contents can be written. Finally, the #endif directive closes the include guard.
#include<bits/stdc++.h>
using namespace std;
class RubikCube{
 public: enum class FACE{
         UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
 };
 enum class Moves{
     L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
 };
 enum class Color_faces{
     WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
 };
 //virtual functions
 //A pure virtual function is a virtual function that is declared in a base class but has no implementation in that class. It is denoted by appending = 0 to the end of the function declaration.

//The purpose of a pure virtual function is to provide an interface or contract that derived classes must adhere to. It specifies that any class derived from the base class must override and provide its own implementation for that particular function.

//function returning color of cell[i][j]
//unsigned used to avoid passing of -ve
virtual Color_faces getcolor(FACE face,unsigned row,unsigned col) const=0;
  static char getColorLetter(Color_faces color);

    /*
     * Returns true if the Rubik Cube is solved, otherwise returns false.
     */
    virtual bool isSolved() const = 0;

    /*
     * Returns the move in the string format.
     */
    static string getMove(Moves ind);
    //print the Rubik's cube in planar format
   void print() const{
    
   };
    /*
     * Randomly shuffle the cube with 'times' moves and returns the moves performed.
     */
    vector<Moves> randomShuffleCube(unsigned int times);
    //perform moves in rubic cube
    RubikCube &moved(Moves ind);
//inverting the moves


};
void solve()
{
}
signed main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int t;cin>>t;while(t--)
solve();
 }
// Header file contents go here

#endif // RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
