#!/bin/zsh
GREEN="\033[0;32m"
RED="\033[1;31m"
YELLOW="\033[1;33m"
NC="\033[0m"

COMPARE_FILES(){
	arg1=$1
	arg2=$2
	result=$(diff $arg1 $arg2)
	if [[ -n "$result" ]]
	then
		echo -n "${RED}[ NOT OK! ]${NC} "
		echo $result
	else
		echo -n "${GREEN}[ OK! ]${NC} "
	fi
}

COMPARE_FILES sample_c sample_ft
rm sample_c sample_ft
