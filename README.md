# 🌦️ Arduino-Based Weather Station

This project is a basic but functional weather station that measures **temperature**, **humidity**, and **atmospheric pressure** using an Arduino Uno and commonly available sensors. Data is displayed live on a small LCD screen.

> 📌 Developed by Aditya Chavan.  
> I led the hardware, software, and integration while collaborating with friends who supported the components and logistics.

---

## 🔧 Hardware Used

- Arduino UNO  
- DHT11 sensor (Temperature + Humidity)  
- I2C LCD Display  
- Breadboard + Jumper wires  
- Power supply (USB or 9V)

---

## 🔌 Pin Connections

| Component | Arduino Pin |
|----------|--------------|
| DHT11     | Digital Pin 2 |
| LCD       | I2C (A4 = SDA, A5 = SCL) |

---

## 💡 What It Does

- 📟 Displays temperature (°C), humidity (%), and pressure (hPa) on an LCD.
- 🌀 Updates every 2 seconds.
- 🧩 Simple modular code with sensor libraries.

---

## 📁 Project Files

- `code/` – Full Arduino code used in the project.
- `images/` – Add your setup, LCD readings, etc.
- `report/` – Contains the final project documentation PDF.
- `notes/` – Place for debugging notes or future ideas.

---

## 🔍 Applications

- ✅ Basic weather forecasting  
- ✅ Smart agriculture environments  
- ✅ Home automation systems  
- ✅ Educational demos and prototypes  

---

## 📄 Report

You can read the final project documentation here:  
📎 [`report/WEATHER STATION PROJECT.pdf`](./report/WEATHER%20STATION%20PROJECT.pdf)

---

## 🧠 Learnings & Reflection

This project helped me understand:
- Real-world sensor integration with microcontrollers.
- Displaying real-time data on LCD using I2C.
- Modular coding and using sensor libraries effectively.

Though simple in scope, this project laid the foundation for future work in environmental data collection and IoT.

---

## 🙋‍♂️ Author

**Aditya Chavan**  
Lead Developer & Integrator

