# Smart Weather Station-Non Mechanical Rainguage & Wind sensor


Currently,weather elements wind and rain are monitored using mechanical instruments like tipping buckets and cup anemometer which require regular
maintenence .
This project aims at producing locally maintainable  weather stations at cheaper cost ,low power capabilities while ensuring accurate and dependable 
results using Machine Learcning(ML) at the Edge.
![Non mechanical Raingauge-PoC](https://raw.githubusercontent.com/diyaup/Smart_Weather_Station/main/Images%26Videos/Untitled%20design(2).png)
![Non mechanical Wind sensor-PoC](https://raw.githubusercontent.com/diyaup/Smart_Weather_Station/main/Images%26Videos/Untitled%20design(1).png)

# List of Parameters recorded
# RAIN
- Loudness measurement
- Sound measurement
# WIND
- Ultrasonic Duration measurement

# Prerequisites
  - Arduino IDE [Tested]
  - Edge Impulse Software [Tested]

# Getting Started
  # RAIN
  - Connect the Components as shown in the [Wiring Diagram](https://github.com/diyaup/Smart_Weather_Station/blob/main/Hardware/Rain/circuit_diagram.pdf)
  - Upload the [Data Collection Module](https://github.com/diyaup/Smart_Weather_Station/tree/main/Software/Rain/data%20collection%20module) script to Arduino BLE Sense board.
  - Once the data collection Completed
  - Preprocess the data with required timestamp and labels.
  - Import the data into Edge Impulse software
  - Data Training
  - Impulse Designing
  - Model Training
  - Performance Evaluation
  - Deployment on board [Edge module](https://github.com/diyaup/Smart_Weather_Station/tree/main/Software/Rain/edge%20module)
  
    # WIND
  - Connect the Components as shown in the [Wiring Diagram](https://github.com/diyaup/Smart_Weather_Station/blob/main/Hardware/wind/m/circuit%20dia.pdf)
  - Upload the [Data Collection Module](https://github.com/diyaup/Smart_Weather_Station/blob/main/Software/wind/data%20collection%20module/test_with_oppsite_direction.ino) script to Arduino BLE Sense board.
  - Once the data collection Completed
  - Preprocess the data with required timestamp and labels.
  - Import the data into Edge Impulse software
  - Data Training
  - Impulse Designing
  - Model Training
  - Performance Evaluation
  - Deployment on board [Edge module](https://github.com/diyaup/Smart_Weather_Station/tree/main/Software/wind/edge%20module)


# Contributing
Instructions coming up soon.

# License
This project is licensed under the MIT License - see the LICENSE.md file for details
