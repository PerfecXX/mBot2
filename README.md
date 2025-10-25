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

## Example Code Structure

<table width="100%">
    <thead>
        <tr>
            <th>Category</th>
            <th>Platform / Hardware</th>
            <th>MicroPython Examples</th>
            <th>Arduino (PlatformIO) Examples</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><b>CyberPi Core</b></td>
            <td><b>CyberPi</b></td>
            <td>
                <ul>
                    <li>[RGB LED](link/to/CyberPi/RGB_LED)</li>
                    <li>[Sensing](link/to/CyberPi/Sensing)</li>
                    <li>[Display](link/to/CyberPi/Display)</li>
                    <li>[Audio](link/to/CyberPi/Audio)</li>
                    <li>[Motion Sensing](link/to/CyberPi/Motion_Sensing)</li>
                    <li>[WIFI](link/to/CyberPi/WIFI)</li>
                    <li>[LAN](link/to/CyberPi/LAN)</li>
                    <li>[Cloud (IoT)](link/to/CyberPi/Cloud)</li>
                    <li>[AI](link/to/CyberPi/AI)</li>
                </ul>
            </td>
            <td>
                <ul>
                    <li>[Project Template](link/to/CyberPi/Arduino_Template)</li>
                    <li>[RGB LED](link/to/CyberPi/Arduino_RGB_LED)</li>
                    <li>[Sensing](link/to/CyberPi/Arduino_Sensing)</li>
                    <li>[Display](link/to/CyberPi/Arduino_Display)</li>
                    <li>[Audio](link/to/CyberPi/Arduino_Audio)</li>
                    <li>[Motion Sensing](link/to/CyberPi/Arduino_Motion_Sensing)</li>
                </ul>
            </td>
        </tr>
        <tr>
            <td rowspan="3"><b>Extension & Shield</b></td>
            <td><b>Extension</b></td>
            <td>
                <ul>
                    <li>- [Upload Mode Broadcast](link/to/Extension/Upload_Mode_Broadcast)</li>
                    <li>- [MQTT](link/to/Extension/MQTT)</li>
                </ul>
            </td>
            <td>❌</td>
        </tr>
        <tr>
            <td><b>mBot2 Shield</b></td>
            <td>
                <ul>
                    <li>- [mBot2 Chassis](link/to/mBot2/Chassis)</li>
                    <li>- [mBot2 Extension Port](link/to/mBot2/Extension_Port)</li>
                </ul>
            </td>
            <td>❌</td>
        </tr>
        <tr>
            <td><b>Pocket Shield</b></td>
            <td>
                <ul>
                    <li>- [CyberPi Pocket Shield](link/to/PocketShield/CyberPi_Pocket_Shield)</li>
                </ul>
            </td>
            <td>❌</td>
        </tr>
        <tr>
            <td><b>Modules</b></td>
            <td><b>mBuild Module</b></td>
            <td>
                <ul>
                    <li>[Ultrasonic Sensor 2](link/to/mBuild/Ultrasonic_Sensor2)</li>
                    <li>[Quad RGB Sensor](link/to/mBuild/Quad_RGB_Sensor)</li>
                    <li>[Bluetooth Controller](link/to/mBuild/Bluetooth_Controller)</li>
                    <li>[Smart Camera](link/to/mBuild/Smart_Camera)</li>
                    <li>[Science Sensor](link/to/mBuild/Science_Sensor)</li>
                    <li>[More](link/to/mBuild/More)</li>
                </ul>
            </td>
            <td>❌</td>
        </tr>
    </tbody>
</table>
