#!/bin/bash

IFS=":"
for i in $PATH
do
    echo $i
done
