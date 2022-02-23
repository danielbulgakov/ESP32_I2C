#include <ESP32_Display.h>
#include <ESP32_Time.h>
#include <ESP32_NTP.h>
#include <ESP32_Gyro.h>
#include <ESP32_Check.h>



// SDA - 21 // SCL - 22 //

#include <Adafruit_Sensor.h>
#include <Wire.h>



ESP32_Display ESP32_display;
ESP32_Gyro ESP32_gyro;
ESP32_Time ESP32_time;





void setup () {
  
  Serial.begin(115200);
  ESP32_display._init_();
  ESP32_time._init_();
  ESP32_gyro._init_(0x69);
  
  //ESP32_time.SyncTime();


  








  ESP32_display.PrintText("Time!", WHITE, 3, 5,5);


  // ESP32_time.GetCurrentTimeString();
  // Serial.println("after");
  // delay(2000);


  // CHECK_I2C_ID();
  

}

void loop () {


  ESP32_display.PrintText(ESP32_time.GetCurrentDateString(), WHITE, 2, 1,1);
  // ESP32_gyro.SerialPrint();
  Serial.println(ESP32_gyro.AccelData());
  Serial.println(ESP32_gyro.GyroData());

  // delay(500);



  delay(500); // wait 5 seconds for the next I2C scan


}
