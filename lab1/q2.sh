#!/bin/bash

#Write a shell program with at least 30 lines excluding comments.

while [ 1 ]
do 

printf "\nChoose an option\n1.Read file\n2.Delete file\n3.Check if file is present\n4.Append to file, if file exists.\n5.To close program\n"

read k

case $k in 
1)
file='book.txt'
while read line; do
echo $line
done < $file ;;
 
2)
echo "Enter filename to remove"
#press y to confirm rm command.
read fn
rm -i $fn ;;
 
3)
filename='book.txt'
if [ -f "$filename" ]; then
echo "File exists"
else
echo "File does not exist"
fi ;;

4)
echo "Before appending the file"
cat book.txt
#keeps on appending chocolate if executed multiple times.
echo "chocolate">> book.txt
echo "After appending the file"
cat book.txt;;

5)
break ;;

*)
echo "Please select from above choices";;
esac
done

