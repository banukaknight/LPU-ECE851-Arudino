void segON(int);
void segOFF();
  
const int sA=2;
const int sB=3;
const int sC=4;
const int sD=5;
const int sE=6;
const int sF=7;
const int sG=8;

// for CommonCathode True
int arr_0[7] = { 1,1,1,1,1,1,0 };  // 0
int arr_1[7] = { 0,1,1,0,0,0,0 };  // 1
int arr_2[7] = { 1,1,0,1,1,0,1 };  // 2
int arr_3[7] = { 1,1,1,1,0,0,1 };  // 3
int arr_4[7] = { 0,1,1,0,0,1,1 };  // 4
int arr_5[7] = { 1,0,1,1,0,1,1 };  // 5
int arr_6[7] = { 1,0,1,1,1,1,1 };  // 6
int arr_7[7] = { 1,1,1,0,0,0,0 };  // 7
int arr_8[7] = { 1,1,1,1,1,1,1 };  // 8
int arr_9[7] = { 1,1,1,0,0,1,1 };  // 9

int arr_A[7] = { 1,1,1,0,1,1,1 };  // A
int arr_B[7] = { 0,0,1,1,1,1,1 };  // B
int arr_C[7] = { 1,0,0,1,1,1,0 };  // C
int arr_D[7] = { 0,1,1,1,1,0,1 };  // D
int arr_E[7] = { 1,0,0,1,1,1,1 };  // E
int arr_F[7] = { 1,0,0,0,1,1,1 };  // F

int pins_arr[7] = { sA,sB,sC,sD,sE,sF,sG }; //7-SEG Pins Array

void setup() {
  Serial.begin(9600);
  
  for(int i=0; i<7; i++){
     pinMode(pins_arr[i], OUTPUT);
  } //for loop to set pinmode of 7 pins
}

void loop() {
  //Display ECE851
  Serial.println("E");
  segON(arr_E);
  Serial.println("C");
  segON(arr_C);
  Serial.println("E");
  segON(arr_E);
  Serial.println("8");
  segON(arr_8);
  Serial.println("5");
  segON(arr_5);
  Serial.println("1");
  segON(arr_1);
  Serial.println("Program by Banuka");
  delay(3000); //give delay of 3 secodns after one cycle is finished
}

void segON(int charArr[]){
    for (int i=0; i<7; i++) {
     uint8_t LEDis = charArr[i] == 1 ? LOW : HIGH; //swap low & high for CC & CA
     digitalWrite(pins_arr[i], LEDis); //turn on only needed segments
    }
    delay(1000); //wait 1 second then turn off all segments
    for (int i=0; i<7; i++) {
      digitalWrite(pins_arr[i], LOW); //turn off each of 7
    }
} //function to turn on 7-seg by Banuka
