# Quadrupedal-Robot-Cat
A repo for a quadrupedal robot cat project. This project is under development.

# Peripherals & Features
  - Distance Sensors (VL53L0X)
  - SPI LCD Display (ILI9341)
  - 16 Channel PWM Controller (PCA9685)
  - I2S Microphone (SPH0645LM4H)
  - I2S Audio Amplifier (MAX98357)
  - Capacitive Touch Sensors
  - IMU / Accelerometer (optional)(MPU6050)
  - NRF24L01 Remote Control (NRF24L01)
  - Wi-Fi access (ESP-01)
  - SD Card

# Remote Controller
  - Joystick
  - NRF24L01 Module
  - IMU / Accelerometer (optional)(MPU6050)

# TO-DO 
The following drivers needs to be developed
  - [ ] Distance Sensors (VL53L0X)
  - [ ] SPI LCD Display (ILI9341)
  - [ ] 16 Channel PWM Controller (PCA9685)
  - [ ] I2S Microphone (SPH0645LM4H)
  - [ ] I2S Audio Amplifier (MAX98357)
  - [X] Capacitive Touch Sensors
  - [X] PID Control for servos
  - [ ] IMU / Accelerometer (optional)(MPU6050)
  - [ ] NRF24L01 Remote Control (NRF24L01)
  - [ ] Wi-Fi access (ESP-01)

# Development Roadmap
1. Develope all necessary mechanical components
Progress:
    - [X] Legs
    - [ ] Back
    - [ ] Neck & Head
    
2. Develope the joint motor driver
Progress:
  - [X] Schematic
  - [X] PCB Layout
  - [X] Order & Assembly

3. Develope the Mainboard
Progress:
  - [ ] Schematic
  - [ ] PCB Layout
  - [ ] Order & Assembly

4. Develope the low level firmwares
Progress:
  - [X] PWM generations (timers & PCA9685)
  - [X] PID Controls
  - [ ] NRF24L01 communciation
  - [ ] SPI Display to display bitmaps
  - [ ] I2S Speaker to play audio file
  - [ ] Distance sensors to read the distance
  - [ ] Leg trajectory planning
