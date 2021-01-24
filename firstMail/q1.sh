#!/bin/bash

#Write a shell script to print the "day" for given "date"

echo -n "Enter date in YY/MM/DD format:"
read d

echo "You Entered: $d"

date -d "$d" +%A
