/* Fan and Solderstation controller
 * 
 * When solderstation is turned on, and temperature rises, a red LED will blink (faster when hotter.
 * When a setpoint temperature has been reached, the fan will turn on (100% at shortly, then slower), 
 * and a green LED will turn on.
 * When the soldering iron is removed from its holder, the fan speed will be set to a higher speed
 * When the temperature falls below the setpoint again (hysteresis!), the fan is turned off.
 * Fan speed is measured...
 * 
 * Guide: https://github.com/ostaquet/Arduino-Nano-33-IoT-Ultimate-Guide
 * IMU: https://github.com/sparkfun/SparkFun_LSM6DS3_Arduino_Library
 * 
 */


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
