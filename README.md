# ESP8266--Projects

This repository contains three Arduino-based codes designed for the ESP8266.
Each sketch focuses on reading temperature data from a sensor (like DHT11/DHT22 or LM35), displaying it locally or sending it to a web server using Wi-F.

Although the code was written in the Arduino IDE, it is fully compatible with ESP8266 boards such as NodeMC

 *Requirements*
 
🧰 Hardware
| Component                         | Quantity | Description                   |
| --------------------------------- | -------- | ----------------------------- |
| ESP8266 (NodeMCU )                | 1        | Wi-Fi enabled microcontroller |
| DHT11 Sensor                      | 1        | Temperature & Humidity sensor |
| Jumper Wires                      | 3-4      | For connections               |
| Breadboard                        | 1        | Optional for prototyping      |

💻 Software
•Arduino IDE (v1.8+ or 2.x)</br>
•ESP8266 Board Package
(Install from Boards Manager → Search “ESP8266” → Install)

🧠 How It Works

•Initializes the DHT11 sensor on GPIO2.
•Reads humidity and temperature every 2 seconds.
•Checks for invalid readings (NaN).
•Displays the readings on the Serial Monitor.

Output Example
```cpp
DHT Sensor Ready...
Temperature: 27.4 °C | 81.3 °F   Humidity: 62 %
Temperature: 27.5 °C | 81.5 °F   Humidity: 61 %
```
*🧰Required Library*

•Make sure to install the DHT sensor library before uploading the code:
•Open Arduino IDE → Sketch → Include Library → Manage Libraries
•Search for "DHT sensor library

*🚀 Upload Steps*
```
1.)Connect your ESP8266 via USB.
2.)In Arduino IDE:
   Tools → Board → NodeMCU 1.0 (ESP-12E Module)
   Tools → Port → (select the correct COM port)
3.)Click Upload.
4.)Open Serial Monitor (Ctrl + Shift + M) and set baud rate to 115200.
```




