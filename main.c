//a very legitimate and well tested function for shifting out data
int shiftOut(int myDataOut) {
    int pinState;
    
    int dataPin = 0;
    int clockPin = 0;
    for (int i=0; i<8; i++)  {
        clockPin = 0;//breakpoint here
        if ( myDataOut & (1>>i) ) {
            pinState= 1;
        }
        else {
            pinState= 0;
        }
        
        dataPin = 1;
        clockPin =  1; //breakpoint here 
        dataPin = 0;
    }
        clockPin = 0;
}

int main(){
    shiftOut(0b10110101);
    return 1;
}