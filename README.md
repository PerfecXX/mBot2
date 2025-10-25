# mBot2 Python

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




