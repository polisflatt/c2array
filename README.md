
## c2arrays -- *2-dimensional arrays for C*

**Warning, this is just a proof of concept. Do not actually use this. C doesn't *actually* need these kinds of arrays.**
## Screenshots
*-- of it in action*
![enter image description here](https://i.ibb.co/wsbvbTz/2019-05-23-140315-356x323-scrot.png)
## Information
This library incorporates 2-dimensional arrays into C, which already exist, but are largely primitive and very hard to work with. This library attempts to fundamentally add these into C, while still bearing some resemblance to C. This library does not make life easier, but rather it only adds functionality into what is an already primitive, yet enjoyable, programming language.

The library is quite simple upon further examination. It simply relies off of splitting a string up by a delimiter in order to simulate a two dimensional array by splitting up a more primitive array into layers, which can be accessed as if they were 2nd dimensional array elements. Below is an illustration of how this works:

![](https://i.ibb.co/kB3sTLw/2019-05-23-135634-1340x301-scrot.png)
*As you can see, elements "1, 2, 3" are on the left side of the separator (which is 0xFFFF unless otherwise defined). The elements which are left to the separator are considered at element zero, while the "1, 2, 4" are on the right side of the separator, rendering them array element one)*

You may change the default separator, by changing it in *settings.h*, though it is not recommended, as you can accidentally (or purposefully?) change it to a usual character--and wreak havoc on text.
## Installation
Installation is quite simple. Just run *./install.sh* as root, and it is installed. You can now use it in C (and C++, but why?) by including *<array2d.h>*. We may get it on a package manager soon, but that is not likely. I may even create a makefile for this, but this is mostly a joke program so I don't really have the time investment and motivation to do so.

You can take a look at the functions in the header files. They are well commented and are, well, self-explanatory, relatively so. Program is licensed under MIT, which is a very liberty-assuring license; ergo, in simple words, it is the freedom to do what you want with the program, unless otherwise stated in the license.
