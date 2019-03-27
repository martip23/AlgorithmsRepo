foo()
{
	if [ "$1" -gt "1" ]; then
		i=`expr $1 - 1`
		j=`foo $i`
		k=`expr $1 \* $j`
		echo $k
	else
		echo 1
	fi
}

while :
do
	echo "Enter a number:"
	read x
	foo $x
done

exit 0