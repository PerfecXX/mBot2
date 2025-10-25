# mBot2

This repository contains a collection of programming examples for controlling the mBot2 robot and CyberPi main control board. It serves as a dedicated resource for developers who want to write custom code for these devices, beyond the mBlock environment.

---

## Language and Platform Support

| Platform / Hardware Support | MicroPython | Arduino (PlatformIO) | Recommended IDE/Tool |
| :-------------------------- | :---------- | :------------------- | :------------------------------------------------------------- |
| **CyberPi** | ✅ | ✅ | MicroPython: **mBlock 5** / Arduino: **VS Code (PlatformIO)** |
| **mBot2 Shield** | ✅ | ❌ | MicroPython: **mBlock 5** |
| **Pocket Shield** | ✅ | ❌ | MicroPython: **mBlock 5** |
| **mBuild Modules** | ✅ | ❌ | MicroPython: **mBlock 5** |

---

## Important Notes

1.  **CyberPi API Support:**
    * **MicroPython:** Provides **Full API Support** for all CyberPi features and functionalities.
    * **Arduino (PlatformIO):** Supports fewer features and some functionalities may be unavailable compared to the MicroPython API.
2.  **Firmware Overwriting Risk:**
    * Using **MicroPython** **will NOT overwrite** the current CyberPi firmware.
    * Using **Arduino (PlatformIO)** **will overwrite** the device's firmware. This means the **CyberPiOS will be inaccessible**, and you may lose compatibility with certain accessories (e.g., Bluetooth Controller, Bluetooth Dongle). Any files previously saved on the board will also be lost upon flashing.

## Example Code

| Category | Platform / Hardware | MicroPython Examples | Arduino (PlatformIO) Examples |
| :--- | :--- | :--- | :--- |
| **CyberPi Core** | **CyberPi** | [RGB LED](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/01-RGB%20LED), [Sensing](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/02-Sensing), [Display](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/03-Display), [Audio](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/04-Audio), [Motion Sensing](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/05-Motion%20Sensing), [WIFI](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/06-WIFI), [LAN](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/07-LAN), [Cloud](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/08-Cloud), [AI](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/cyberpi/09-AI) | [Project Template](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/00-Project%20Template), [RGB LED](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/01-RGB%20LED), [Sensing](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/02-Sensing), [Display](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/03-Display), [Audio](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/04-Audio), [Motion Sensing](https://github.com/PerfecXX/mBot2/tree/main/example/arduino/cyberpi/05-Motion%20Sensing) |
| **Extension & Shield** | **Extension** | [Upload Mode Broadcast](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/extension/01-upload_broadcast), [MQTT](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/extension/02-mqtt) | ❌ |
| | **mBot2 Shield** | [mBot2 Chassis](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mBot2/01-mBot2%20Chassis), [mBot2 Extension Port](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mBot2/02-mBot2%20Extension%20Port) | ❌ |
| | **Pocket Shield** | [CyberPi Pocket Shield]() | ❌ |
| **Modules** | **mBuild Module** | [Ultrasonic Sensor 2](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mbuild/01-Ultrasonic%20Sensor2), [Quad RGB Sensor](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mbuild/02-Quad%20RGB%20Sensor), [Bluetooth Controller](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/gamepad), [Smart Camera](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mbuild/10-Smart%20Camera), [Science Sensor](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mbuild/08-Science%20Sensor), [More](https://github.com/PerfecXX/mBot2/tree/main/example/micropython/mbuild) | ❌ |


---

## 4. Projects

This section features integrated and larger-scale projects built using the code examples in this repository. These projects demonstrate practical applications and complex functionalities of the mBot2 and CyberPi.

Click [**Here**](https://github.com/PerfecXX/mBot2/tree/main/project) to explore more projects!

---

## 5. Tools

A collection of utility scripts, debugging aids, and essential tools needed for firmware management, flashing, or advanced development outside the standard mBlock environment.

Click [**Here**](https://github.com/PerfecXX/mBot2/tree/main/tools) to explore more tools!

---
