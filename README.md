# Q1
## Probelm Description
Given an array of strings *strs*, group the anagrams together. You can return the answer in *any order*.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

    Input: strs = ["eat","tea","tan","ate","nat","bat"]
    Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:

    Input: strs = [""]
    Output: [[""]]

Example 3:

    Input: strs = ["a"]
    Output: [["a"]]

## What You Should Do

Please finish your code inside the file Q1.cpp. After finishing, you can use following command to check your answer.

## Execution

```makefile
$ make
$ make run  # Use make run to run specific testcase, remember to change variable *CASE* inside Makefile
```

## Verifier
You can use *verifier* to check whether your answer is corrent
```makefile
$ make check # Use make check to check specific testcase, remember to change variable *CASE* inside Makefile
```

## AutoChecker
After finish coding, you can also use 01_autoCheck.sh to test all the patterns.

```makefile
$ ./01_autoCheck
```