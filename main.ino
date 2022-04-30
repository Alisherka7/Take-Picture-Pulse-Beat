volatile int BPM;                   // 심박수 저장
volatile int Signal;                // 심장박동센서에서 측정되는 값 저장
volatile int IBI = 600;             // 심박수 측정 시 사용되는 시간 변수(심장이 몇초마다 뛰는지 측정)
volatile boolean Pulse = false;     // 유저의 심박수가 측정되면 True, 아무것도 측정되지 않으면 False
int sum = 0;
int count = 0;
int average = 0;
void setup(){
  Serial.begin(115200);            // 통신 속도 : 115200 
  interruptSetup();                 // 센서의 신호를 2ms마다 읽어 심박수로 변환하는 함수
}

void loop(){
  // BPM -> 심박수
//  Serial.println(BPM);
  delay(500);
  Serial.print("심박수 -> ");
  Serial.println(BPM);
  
  if(BPM >= 110 and BPM <= 130)
  {
      delay(2000);
      Serial.write("shoot");
      delay(3000);
      Serial.println();
  }
  
}
