# 📟 Arduino Potentiometer Voltage Display

> An Arduino project that reads the analog voltage from a potentiometer connected to **A3** and displays the measured voltage in real time on a **16×2 LCD** using the **Adafruit LiquidCrystal** library.

---

## 📖 Overview

This project continuously reads the analog value from a potentiometer, converts it into voltage, and displays the result on a 16×2 LCD. It also features a simple startup splash screen displaying the developer's name before switching to the live voltage display.

---

## ✨ Features

- 📟 Real-time voltage monitoring
- 🎚️ Reads analog input from **A3**
- 🔢 Converts ADC values into voltage
- 📺 Displays voltage on a **16×2 LCD**
- 🚀 Startup splash screen
- ⚡ Updates every **100 ms**
- 🧩 Simple and beginner-friendly Arduino project

---

## 🛠️ Components Required

| Component | Quantity |
|-----------|:--------:|
| Arduino Uno/Nano/Mega | 1 |
| 16×2 LCD (I2C/Adafruit LiquidCrystal compatible) | 1 |
| 10kΩ Potentiometer | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### Potentiometer

| Potentiometer Pin | Connect To |
|-------------------|------------|
| Left Pin | GND |
| Middle (Wiper) | A3 |
| Right Pin | 5V |

### LCD

Connect the LCD according to your Adafruit LiquidCrystal/I2C module configuration.

---

## 📂 Project Workflow

```text
Power ON
    │
    ▼
Display Developer Name
    │
    ▼
Show "POT VOLTAGE"
    │
    ▼
Read Analog Value (A3)
    │
    ▼
Convert to Voltage
    │
    ▼
Display on LCD
    │
    └───────────────↺ Repeat Every 100 ms
```

---

## 🧮 Voltage Calculation

The analog input is converted into voltage using:

```cpp
float volt = val / 204.6;
```

A more accurate equivalent formula is:

```cpp
float volt = val * 5.0 / 1023.0;
```

Where:

- **0** → **0V**
- **1023** → **5V**

---

## 📸 LCD Output

### Startup Screen

```text
  DEVELOPED BY
 TANVIR HUSSAIN
```

After 5 seconds

```text
  POT VOLTAGE
      2.84
```

---

## 📁 Library Used

- 📚 Adafruit LiquidCrystal

Install it from the Arduino Library Manager before uploading the sketch.

---

## 🚀 Getting Started

1. Clone this repository.
2. Open the `.ino` file in the Arduino IDE.
3. Install the required library.
4. Connect the hardware.
5. Select your Arduino board and COM port.
6. Upload the code.
7. Rotate the potentiometer and observe the voltage on the LCD.

---

## 📌 Notes

- Designed for **5V Arduino boards**.
- Uses analog pin **A3**.
- LCD refreshes every **100 ms**.
- Voltage range is approximately **0V–5V**.

---

## 👨‍💻 Developer

**Tanvir Hussain**

🌐 GitHub: https://github.com/TanvirCodeStorm

---

## 📜 License

This project is licensed under the **MIT License**.

Feel free to use, modify, and share it with proper credit.

---

⭐ If you found this project useful, consider giving it a **Star** on GitHub!
