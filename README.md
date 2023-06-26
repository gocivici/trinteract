# Trinteract

[![License: CERN-OHL-S](https://img.shields.io/badge/Hardware%20License-CERN--OHL--S%20v2-blueviolet)](https://ohwr.org/cern_ohl_s_v2.pdf)
[![License: MIT](https://img.shields.io/badge/Software%20License-MIT-yellow)](https://opensource.org/licenses/MIT)
[![License: CC BY-SA 4.0](https://img.shields.io/badge/Documentation%20License-CC_BY--SA_4.0-lightgrey)](https://creativecommons.org/licenses/by-sa/4.0/)





This repository contains all the files and documentation for Trinteract, An open-source Arduino-compatible 3DOF Human Interface Device (HID). In other words a joystick that's capable of moving in all 3 Dimensions. Trinteract uses a 3D magnetometer and a Neodymium magnet to detect motion in 3D space.  [Visit the DIY guide](https://www.instructables.com/Trinteract-an-Open-source-3D-Input-Device/)

[Watch the Demo here](https://youtu.be/YoGgdORVARs)

File structure:
+  `Software` contains the arduino code and necessary drivers 
+  `PCB` contains the KiCAD PCB files and gerber files for manufacturing
+  `docs` contains the source code for the documentation website build with [Sphinx](https://www.sphinx-doc.org/en/master/index.html)
+  `CAD` contains all fusion360 CAD files and print ready .stl files  


![](media/attached.jpg)

![](media/trinteractbase.gif)

Before Assembly            |  Assembled
:-------------------------:|:-------------------------:
![](media/notassembled.jpg)  |  ![](media/assembled.jpg)

<p align="center" width="100%">
    <img src="media/oshwDark.png">
</p>
<p align="center" width="100%">
<a href="https://certification.oshwa.org/ee000001.html">[OSHW] EE00001 | Certified open source hardware</a>
</p>