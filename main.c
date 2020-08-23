//a very legitimate and well tested function for shifting out data
int shiftOut(int myDataOut) {
    int dataPin = 0;
    int clockPin = 0;

    for (int i=0; i<8; i++)  {
        clockPin = 0;//breakpoint here
        dataPin = myDataOut & (1<<i) ? 1 : 0;
        clockPin =  1; //breakpoint here 
    }
    clockPin = 0;
}

int main(){
    shiftOut(0b10110101);
    return 1;
}