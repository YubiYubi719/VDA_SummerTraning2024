#!/bin/bash
PATNUM=1000

if [ -d "outputResult" ]; then
    rm outputResult/*
    rmdir outputResult
fi
if [ -d "checkResult" ]; then
    rm checkResult/*
    rmdir checkResult
fi
mkdir outputResult
mkdir checkResult
# self-testing
for((i = 1; i <= ${PATNUM}; i = i+1)) do
    ./testcase/caseGen testcase/input.txt
    ./Q2 testcase/input.txt outputResult/output.txt 
    ./verifier testcase/input.txt outputResult/output.txt  > checkResult/check.log
    if grep -i -q "congratulations, correct answer!" "checkResult/check.log"; then
        echo -e "\033[0;34mPass  \033[m  \033[0;32mPattern No.$i "
    else
        echo -e "\033[31m--- Check Fail ---\033[0m"
    fi
done