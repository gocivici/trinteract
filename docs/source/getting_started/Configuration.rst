Configuration
=============

The Arduino code for trinteract can be found in the Software folder in the github repository. You can download the latest version by clicking the following link: https://github.com/gocivici/trinteract/archive/refs/heads/master.zip

Different Magnet
----------------

the Arduino code comes configured and calibrated based on a 4x4mm neodymium magnet. If you want to use a different magnet or magnetic material like magnetic textiles etc. you have to
configure the range of the magnetic field in the Arduino code.

First uncomment the following lines to open the serial port:

.. code-block:: c++

  //  uncomment the following line for debugging
  Serial.begin(9600);

.. code-block:: c++

  Serial.print(Tlv493dMagnetic3DSensor.getX());
  Serial.print(Tlv493dMagnetic3DSensor.getY());
  Serial.println(Tlv493dMagnetic3DSensor.getZ());

Next, upload the code to arduino and launch the serial monitor to see the new values. Now move the magnet to the maximum and minimum ends to determine the range of values.

Replace ``xMin``, ``xMax``, ``yMin``, ``yMax``, ``zMin``, ``zMax`` with the new values.

.. code-block:: c++

  int y = map((calX-Tlv493dMagnetic3DSensor.getX()),yMax,yMin,-64,64);
  int x = map((calY-Tlv493dMagnetic3DSensor.getY()),xMax,xMin,-64,64);
  int z = map((calZ-Tlv493dMagnetic3DSensor.getZ()),zMin,zMax,-64,64);


The Button
----------

The button on trinteract is set up as a calibration button, however calibration is also implemented on boot so you can configure to use it to control something else. If you decide to do so you can 
comment the following line in the arduino code:

.. code-block:: c++

    // comment the following lines if you want to use the button for something else
    if(digitalRead(calButton) || !calibrationState){
      calibrate();
      calibrationState = true;
    }

