# embedded_projects
embedded c projects 
# 🔥 Industrial Fire and Gas Monitoring System

This project is a real-time embedded system designed to monitor **fire** and **gas leaks** in industrial environments using an **8051 microcontroller**. It alerts the user via an **LCD display** and a **buzzer** for immediate awareness of any hazard.

---

## 🛠️ Features

- ✅ Fire detection using flame sensor
- ✅ Gas leakage detection using gas sensor (like MQ2)
- ✅ LCD display to show alert messages
- ✅ Buzzer alarm for audible warning
- ✅ Simple and efficient Embedded C code
- ✅ Built using 8051 microcontroller (AT89C51)

---

## ⚙️ Components Used

| Component               | Description                              |
|------------------------|------------------------------------------|
| AT89C51 (8051 MCU)     | Main microcontroller                     |
| 16x2 LCD Display       | Displays fire/gas status messages        |
| MQ2 Gas Sensor         | Detects presence of flammable gas        |
| Flame Sensor           | Detects fire or flame                    |
| Buzzer                 | Alerts during hazard                     |
| Resistors, Wires, Breadboard | Supporting components               |

---

## 📐 Working Principle

1. The system continuously monitors input from the **fire** and **gas** sensors.
2. If any hazard is detected:
   - A warning message is shown on the LCD.
   - The buzzer is activated for audio alert.
3. If no danger is present:
   - The LCD shows "No Fire" and "No Gas".
   - The buzzer remains OFF.

---

## 📂 Code Structure

- `main()` initializes the LCD and sensors.
- `firecheck()` checks flame sensor and updates LCD + buzzer.
- `gascheck()` checks gas sensor and updates LCD + buzzer.
- `cmd()` and `dat()` control LCD commands and data.
- `str()` prints strings to LCD.
- `delay()` provides basic timing.

---

## 📷 Project Snapshot

> Add circuit diagram or Proteus simulation screenshot here.

---

## 🔧 Future Improvements

- GSM module integration to send SMS alerts
- IoT module (ESP8266/ESP32) for remote monitoring
- EEPROM logging of hazard events
- Mobile app integration for live alerts

---

## 🧑‍💻 Developed By

**Ashwin Sampathkumar**  
[🔗 LinkedIn](https://www.linkedin.com/in/ashwin-sampathkumar/) | [🐱 GitHub](https://github.com/Ashwin540)

---

## 📄 License

This project is open-source and free to use for educational purposes.
