#include <Servo.h>
Servo kiri;
Servo kanan;
void setup() {
Serial.begin(9600);
kiri.attach(2);
kanan.attach(3);
kiri.write(88);
kanan.write(88);
}

void loop() {
  if(Serial.available()){
    int data=Serial.read();
    if (data=='1'){
      kiri.write(0);
      kanan.write(0);
    } if (data=='2'){
      kiri.write(180);
      kanan.write(180);
    }if (data=='3'){
      kiri.write(180);
      kanan.write(0);
    }if (data=='4'){
      kiri.write(0);
      kanan.write(180);
    }if (data=='0'){
      kiri.write(88);
      kanan.write(88);
    }
  }

}
