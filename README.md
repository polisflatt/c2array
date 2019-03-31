## c2arrays -- *2-dimensional arrays for C*

**Warning, this is just a proof of concept. Do not actually use this. C doesn't *actually* need these kinds of arrays.**

This library incorporates 2-dimensional arrays into C, which already exist, but are largely primitive and very hard to work with. This library attempts to fundamentally add these into C, while still bearing some resemblance to C. This library does not make life easier, but rather it only adds functionality into what is an already primitive, yet enjoyable, programming language.

The library is quite simple upon further examination. It simply takes advantage of the fact that certain characters (like 0xFFFF) are not used. Thus, the library uses them as if they were null-terminators, denoting the start and end of a string of text. In reality, the supposed arrays are just 1-dimensional. It would look something like this.

[1][2][3][4][5][0xFFFF][2][4][6][8], where 0xFFFF denotes the new array (index 1, in this case, where these are sets of numbers). 

You may change the default separator, by changing it in *settings.h*, though it is not recommended, as you can accidentally (or purposefully?) change it to a usual character--and wreak havoc on text.

Installation is quite simple. Just run *./install.sh* as root, and it is installed. You can now use it in C (and C++, but why?) by including *<array2d.h>*.

You can take a look at the functions in the header files. They are well commented and are, well, self-explanatory, to most people, of course. 
