//
// Created by SATHVIK on 23-06-2024.
//

#ifndef RUBIKSCUBE_H
#define RUBIKSCUBE_H
#include <bits/stdc++.h>
using namespace std;

class RubiksCube {
    enum FACE {
        FRONT,LEFT,RIGHT,UP,BACK,DOWN
    };
    enum COLOR {
        WHITE,RED,BLUE,ORANGE,YELLOW,GREEN
    };
    enum MOVE {
        F,FPRIME,F2,
        L,LPRIME,L2,
        R,RPRIME,R2,
        U,UPRIME,U2,
        D,DPRIME,D2,
        B,BPRIME,B2
    };

    [[nodiscard]] virtual COLOR getColor(FACE face,unsigned row,unsigned col) const=0;

    static char getColorLetter(COLOR color);

    [[nodiscard]] virtual bool issolved() const=0;

    static string getMove(MOVE ind);

    RubiksCube &move(MOVE ind);

    RubiksCube &invert(MOVE ind);

    void print() const;

    vector <MOVE> randomShuffleCube(int times);

    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;

    [[nodiscard]] string getCornerColorString(uint8_t ind) const;

    [[nodiscard]] uint8_t getCornerIndex(uint8_t ind) const;

    [[nodiscard]] uint8_t getCornerOrientation(uint8_t ind) const;
};
#endif //RUBIKSCUBE_H
