#include <stdio.h>
//a very legitimate and well tested function for shifting out data
int shiftOut(int myDataOut) {
    int dataPin = 0;
    int clockPin = 0;

    for (int i=7; i>-1; i--)  { //reverse loop to go from Most significant bit first
        clockPin = 0;//breakpoint here
        dataPin = myDataOut & (1<<i) ? 1 : 0;
        clockPin =  1; //breakpoint here 
    }
    clockPin = 0;
}

int main(){
    shiftOut(0b11010101);
    return 0; //must return 0 to signal successful run
}