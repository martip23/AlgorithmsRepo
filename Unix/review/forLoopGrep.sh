#!/bin/sh
for file in $(ls *.*);
do
	grep Fred $file
done
