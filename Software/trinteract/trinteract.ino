#include <Joystick.h>
#include <Tlv493d.h>

Tlv493d Tlv493dMagnetic3DSensor = Tlv493d();
Joystick_ Joystick;

//defined values for calibration
float calX = 0;
float calY = 0;
float calZ = 0;
boolean calibrationState = false;
int calButton = 4;

void setup() {
//  uncomment the following line for debugging
//  Serial.begin(9600);
  pinMode(calButton, INPUT);
  
  Tlv493dMagnetic3DSensor.begin();
  Tlv493dMagnetic3DSensor.setAccessMode(Tlv493dMagnetic3DSensor.MASTERCONTROLLEDMODE);
  Tlv493dMagnetic3DSensor.disableTemp();
  
// set joystick axis range
  Joystick.setXAxisRange(-512, 512);
  Joystick.setYAxisRange(-512, 512);
  Joystick.setZAxisRange(-512, 512);

}

void loop() {
  // delay for measurment
  delay(Tlv493dMagnetic3DSensor.getMeasurementDelay());
  Tlv493dMagnetic3DSensor.updateData();

    // do calibration when button pressed
    if(digitalRead(calButton) || !calibrationState){
    calibrate();
    calibrationState = true;
    }

// map values from the sensor to joystick axis range
int y = map((calX-Tlv493dMagnetic3DSensor.getX()),32,-32,-512,512);
int x = map((calY-Tlv493dMagnetic3DSensor.getY()),32,-32,-512,512);
int z = map((calZ-Tlv493dMagnetic3DSensor.getZ()),-30,30,-512,512);

//    Serial.print(Tlv493dMagnetic3DSensor.getX());
//    Serial.print(Tlv493dMagnetic3DSensor.getY());
//    Serial.println(Tlv493dMagnetic3DSensor.getZ());

  Joystick.setXAxis(x);
  Joystick.setYAxis(y);
  Joystick.setZAxis(z);
//
//  if(z>10){
//  Joystick.setZAxis(z-10);
//  }
//  else if(z<-20){
//  Joystick.setZAxis(z+20);
//  } else {
//    Joystick.setZAxis(0);
//    }
  

  Joystick.sendState();

}

void calibrate(){
    calX = Tlv493dMagnetic3DSensor.getX();
    calY = Tlv493dMagnetic3DSensor.getY();
    calZ = Tlv493dMagnetic3DSensor.getZ();
//    Serial.print(calX);
//    Serial.print(calY);
//    Serial.println(calZ);
  }
