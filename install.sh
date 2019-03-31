#!/usr/bin/bash

if [ ! -e /usr/include/array2d ]; then
    mkdir /usr/include/array2d
fi


cp functions.c /usr/include/array2d
cp functions.h /usr/include/array2d
cp settings.h /usr/include/array2d
cp array2d.h /usr/include/