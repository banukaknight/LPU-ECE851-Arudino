void segON(int []);
void segOFF();
  
const int sA=2;
const int sB=3;
const int sC=4;
const int sD=5;
const int sE=6;
const int sF=7;
const int sG=8;

// for CC True
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
  // put your setup code here, to run once:
  pinMode(sA,OUTPUT);
  pinMode(sB,OUTPUT);
  pinMode(sC,OUTPUT);
  pinMode(sD,OUTPUT);
  pinMode(sE,OUTPUT);
  pinMode(sF,OUTPUT);
  pinMode(sG,OUTPUT);
}

void loop() {
  //Display ECE851
  segON(sE);
  segOFF();


  
  delay(3000);
}

void segON(int charArr[]){
    for (int i=0; i<7; i++) {
      uint8_t LEDis = charArr[i]==1 ? HIGH : LOW;
      digitalWrite(pins_arr[i], LEDis);
    }
    delay(1000); //wait 1 second till moving to next task
}

void segOFF(){
    for (int i=0; i<7; i++) {
      digitalWrite(pins_arr[i], LOW);
    }
}
