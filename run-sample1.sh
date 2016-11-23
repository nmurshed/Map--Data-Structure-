#!/bin/bash

EXEC=runmap
MAIN=sample1
MAPPER=roadmap
CC=gcc

rm -f $EXEC

$CC -o $EXEC $MAIN.c $MAPPER.c

if [[ $? -eq 0 ]]
then
	./$EXEC
fi
