# BioFactory
## Prerequisites
To compile this project, there are a bunch of programs needed. Since we are dealing with C++, a dedicated compiler is needed. The generated Makefiles deal with GNU g++. To run the Makefile, GNU make is also needed. Both are delivered by _build-essential_.
Our window is managed by Qt5, so the dedicated packages _qt5-default_ and _qt5-qmake_ for dealing with the **.pro**-files.
In order to render the OpenGL content, we will also need the development kit for GLEW, called _libglew-dev_.

    sudo apt install build-essential qt5-default qt5-qmake libglew-dev
