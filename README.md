# IoT-Based Predictive Maintenance System

## Project Overview
This project simulates an IoT-based predictive maintenance system using ESP32 to monitor motor temperature and vibration levels.

## Components Used
- ESP32
- Two potentiometers (simulated sensor inputs)
- Green, Yellow, and Red LEDs
- Buzzer
- 220Ω resistors
- Wokwi simulator

## Working Principle
- **NORMAL:** Green LED turns ON.
- **WARNING:** Yellow LED turns ON when temperature reaches 60°C or vibration reaches 60%.
- **CRITICAL:** Red LED and buzzer activate when temperature reaches 80°C or vibration reaches 80%.

## Tools and Technologies
- Arduino C++
- ESP32
- Wokwi
- GitHub

## Project Status
Completed as a virtual simulation using Wokwi. Real motor testing and physical sensor integration are future enhancements.
https://wokwi.com/projects/477956351496602625

## Python Data Analysis

- Analyzed sample temperature and vibration readings using Python.
- Classified motor conditions as Normal, Warning, and Critical.
- Generated temperature, vibration, and combined monitoring graphs using Matplotlib.
- Created a summary report of motor condition readings.
- Tools used: Python, Google Colab, Matplotlib.

**Note:** The analysis uses sample data for demonstration and is not connected to live sensor readings.

## Future Enhancement

Connect real sensor data to the Python analysis for live monitoring and predictive maintenance.
