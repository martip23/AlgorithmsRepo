echo "
CS 4350 - Unix Systems Programming

Name: Patrick Martinez

Serial Number: 32

Assignment Number: 1

Due Date: 2/13/2019

The function of this script is to:

1. Display the numbers.
2. Add and multiply 3 numbers.
3. Find all odd and even numbers between 1 and the first argument.
4. Indicate whether the numbers that you entered from the keyboard is one-digit
number, two digit numbers or three-digit numbers.
5. Display all prime numbers between 1 and the second number.

The numbers are $1 $2 $3
"

sum=$(($1+$2+$3))
product=$(($1*$2*$3))

#Display sum and product
echo "
$1 + $2 + $3 = $sum

$1 * $2 * $3 = $product

All odd numbers between 1 and $1
"

#Display evens
for (( i = 2; i <= $1; i+=2))
do
    echo -n $i ""
done
echo "

All even numbers between 1 and $1
"

#Get and display odds
for (( i = 1; i <= $1; i+=2))
do
    echo -n $i ""
done
echo "
"

#Displays the length of passed value up to 3
function displayLength() 
{
    local i=${#1}
#   echo "In function i: " $i "\t'$1' = $1"
    case $i in
        1) echo "$1 is a one-digit number";;
        2) echo "$1 is a two-digit number";;
        3) echo "$1 is a three-digit number";;
        *) echo "$1 is out of range";;
    esac
}

#Display length of all numbers
displayLength $1
displayLength $2
displayLength $3

#Function to determine primeness
displayPrimesUpTo () {
    if($1 <= 1)
        return
    

    echo -n "2 "
    for (($i = 3; $i < $1; $i++))  
    do
        isPrime = 1
        for(($j = 2; $j < $1; j++)) 
        do
            if ($i % $j == 0)
                $isPrime=0
        if (isPrime==1)
            echo -n "$i "
}

echo "

End of script

Patrick Martinez - 2 - 18 - 2019
"

