# Monitoring system with arduino

This monitoring system has various features such as burglar alarm, gas leak alarm and temperature/humidity sensor.


## Components Used

- Arduino UNO
- LCD 16x2
- Buzzer
- IR sensor 
- DHT22 sensor
- MQ6 sesnor
- 
## Circuit Diagram

![circuit diagram](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/circuit-diagram.jpg)

## Block diagram

![Block diagram](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/blockdigram.jpg)

## Description

- For the burglar alarm, we have used IR sensor. So if someone tries to enter your 
  house, the IR sensor will pick up the heat signatures and immediately set the buzzer on.

- For the gas leak alarm, we have used MQ6 sensor which mainly detects LPG, butane.

- For the temperature and humidity sensing, we have used DHT22 sensor that picks up the 
  temperature and humidity % from the surroundings and displays it on the LCD screen.
  
## Project photos

- Ir sensor with buzzer
![ir](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/irsensor.jpeg)

- MQ6 with led

![mq6](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/mq6.jpeg)

- DHT22 with lcd

![dht22](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/dht22.jpeg)

![lcd](https://raw.githubusercontent.com/yashkathe/Monitoring-system-with-arduino/master/assets/dht22-wlcd.jpeg)


## Folder structure

1. `DHT22:` 
This code makes use of dht22 sensor to measure temperature , humidity and heat index. 

2. `DHT22_with_Lcd:`
This code does has the same function as that of previous code , the only difference is that temperature and humidity is also displayed to lcd. 

3. `IR:`
Simple code which uses IR sensor to detect movement.

4. `MQ6:`
MQ6 sensor is the main sensing component which is used in a gas detection appliance. So this code helps alert us if there is a gas leak. 

5. `ir+mq6:`
Just a combined code for both ir and mq6.

## Feedback

If you have any feedback, please reach out to me at katheyash@yahoo.com
