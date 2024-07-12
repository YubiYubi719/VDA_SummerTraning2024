#!/bin/bash
PATNUM=5

make > make.log

if [ -d "outputResult" ]; then
    rm -rf outputResult
fi
if [ -d "checkResult" ]; then
    rm -rf checkResult
fi
mkdir outputResult
mkdir checkResult
# self-testing
for((i = 1; i <= ${PATNUM}; i = i+1)) do
    ./Q1 testcase/${i}.in outputResult/${i}.out
    ./verifier testcase/${i}.in outputResult/${i}.out  > checkResult/check.log
    if grep -i -q "congratulations, correct answer!" "checkResult/check.log"; then
        echo -e "\033[0;34mPass  \033[m  \033[0;32mPattern No.$i "
    else
        echo -e "\033[31m--- Check Fail ---\033[0m"
        rm -f make.log
        exit
    fi
done

rm -f make.log