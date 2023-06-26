
//int pinarray[24]={2,3,4,5,6,7,8,9,10,11,12,13,54,55,56,57,58,58,60,61,62,63,64,65};//PIN MAP
uint8_t pinarray[24]={22,23,24,25,26,27,28,29,30,31,32,33,54,55,56,57,58,59,60,61,62,63,64,65};//PIN MAP
uint8_t valuearray[24];

void setup() {
 Serial.begin(9600);
//for(int i=0;i<=(sizeof(pinarray)-1);i++){pinMode(i,INPUT_PULLUP)}
for(int i=0;i<=23;i++){pinMode(i,INPUT);}
 }

void loop() {
 for(int i=0;i<=23;i++){
  valuearray[i]=0;
  valuearray[i]=digitalRead(i);
  }
if(Serial.available() > 0) {
if(Serial.read()=='r')
{
  for(int i=0;i<=23;i++){Serial.print(valuearray[i]);Serial.print(';');}
  Serial.print('e');
}
}


//Serial.println(digitalRead(54));
}
