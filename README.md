----------------------------------
Linuxbuild of IfcPlusPlus (Ifc++)
----------------------------------

master
============
clone of the original SVN-Repository of Fabian Gerold  http://ifcplusplus.googlecode.com/

which has Linux support built in sinc R53 (June, 3. 2014)


IfcPLusPlus
============
open source software to view ifc-files on Linux
https://github.com/berndhahnebach/IfcPlusPlus

The Repository is based on the work done by Fabian Gerold 
http://code.google.com/p/ifcplusplus/

The cmake files taken form Sylvian Marie from VTREEM
https://github.com/VTREEM/IFCPlusPlus/

Find a forum thread about this Linux build at
http://www.forum.freecadweb.org/viewtopic.php?f=23&t=5101


Packagelist
===========
Tested on Debian Jessie
$ apt-get install cmake git 
$ apt-get install libboost-dev libopenscenegraph-dev libqt4-dev

Internal Carve of IfcPlusPlus is used.


IfcPLusPlus
===========
get source code, change branch and build
$ git clone git://github.com/berndhahnebach/IfcPlusPlus/   ifcplusplus-code
$ cd ifcplusplus-code
$ mkdir build
$ cd build
$ cmake ../
$ make
$ cd Release
$ ./IfcPlusPlusViewer

Yeah, it runs on Linux !!!
