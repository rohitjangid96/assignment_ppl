# assignment_ppl
These repository contain two programs of ppl assignment i.e Question 1 and Question 2

------------------------------------------------------------------------------------------------------------------------------------
Question 1 : Adding two infinite numbers 
------------------------------------------------------------------------------------------------------------------------------------
-->
I have made this program  in c++ by using singly linked list. Two numbers were taken in two linked list and there 
addition was displayed to the user.
for taking input insertBeg() was used and for displaying traverse() was used, the addition logic was wriiten in main().

------------------------------------------------------------------------------------------------------------------------------------
Question 2 : You have create a program that asks the user to enter the line they want to make use of, for e.g. if user choose “f”, 
then only lines containing “f” in the beginning will be pasted into an another file result.txt, rest all the lines will be omitted. 
In case of above sample only the following lines will be appeneded:

“f”: “something/Sent/IMG-20160923-WA0003.jpg”, 
“f”: “something/Sent/IMG-20161019-WA0010.jpg”,
Now you have to clean the starting “f”: and ending  , from the result.txt to create another file cleaned.txt. The output of the same will 
be as below:

“something/Sent/IMG-20160923-WA0003.jpg”
“something/Sent/IMG-20161019-WA0010.jpg”
Finally the program will ask user to associate a program with this file. For e.g. if user enters “python”, then final file should be like:

python “something/Sent/IMG-20160923-WA0003.jpg”
python “something/Sent/IMG-20161019-WA0010.jpg”
which will be stored in an auto-executable windows file final.bat
--------------------------------------------------------------------------------------------------------------------------------------
-->
The input.txt was given , the choice of the user was taken which decides the desired line to be copied into result.txt file.
now the file is cleaned using substr() function , and the end "," was deleted using the replace() function and written in new file called 
Cleaned.txt. Now in the cleaned.txt file the desired word is taken from the user and it is simply concatenated in the file and we have the
new autoexecutable file naming final.bat
