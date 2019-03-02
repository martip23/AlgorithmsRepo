#!/bin/bash

echo "
Name: Patrick Martinez

Serial Number: 32

Assignment Number: 2

Due Date: 2/27/2019

The function of this script is to:

	1. Make directory by checking existence.
	2. Test if file exists. If it exists, then read the file, display number of
		words, number of lines in the file and its contents. Display a message
		if it does not exist.
	3. Append \"Learning Scripts and Shell Programming\" to an existing file.
		Display a message if it does not exist.
	4. Delete an existing file.
	5. Parse current date.
	9. Exit.
"

#Prompt script
prompt() {
	read -p "Enter your choice: " choice
	echo
}

#Make directory by checking existence
#Takes name and creates directory or already exists
checkDirectoryExistence() {
	if [ -d "$1" ]; then
		echo "Directory $1 already exists."
	else 
		mkdir $1
		echo "Directory created: $1"
	fi
	echo
}

#Pass file name
#If file does not exist state so.
#If file exists display num of words and lines, display contents
checkFileExistence() {
	if [ -e "$1" ]; then
		linesAndWords[0]=$(wc -l < "$1")
		linesAndWords[1]=$(wc -w < "$1")
		echo "Number of lines and words: ${linesAndWords[*]}
		"
		cat $1
		echo "
		"
	else
		echo "File does not exist"
		echo
	fi
}

#Pass file name
#If file exists, append script
#If file does not exist, display a message
appendScript() {
	if [ -e "$1" ]; then
		wordsToAdd=(Learning Scripts and Shell Programming)
		$(echo ${wordsToAdd[*]} >> $1)
	else
		echo "File does not exist"
		echo
	fi
}

#Pass file name
#If file exists, it will be deleted
#If file DNE, display message
deleteFile() {
	if [ -e "$1" ]; then
		$(rm $1)
	else
		echo "File does not exist"
		echo
	fi
}

#Take in choice and run relevant functions
while [ "$choice" != "9" ]
do
	prompt
	case $choice in 
	1)	read -p "Enter name of the directory: " name
		echo
		checkDirectoryExistence "$name"
		;;
	2)	read -p "Enter file name: " name
		echo
		checkFileExistence "$name"
		;;
	3)	read -p "Enter file name: " name
		echo
		appendScript "$name"
		;;
	4) 	read -p "Enter the name of file to be deleted: " name
		echo
		deleteFile "$name"
		;;
	5) 	echo "Current date is: $(date +%d-%m-%y)"
		echo "Current time is: $(date +%H:%M:%S)"
		echo
		;;
	9)	;;
	*)	echo "Invalid entry"
		echo
		;;
	esac
done

echo "Patrick Martinez 2-27-2019"

