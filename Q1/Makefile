TESTDIR = testcase
CASE = 1

all:
	g++ Q1.cpp -o Q1

run:
	./Q1 $(TESTDIR)/$(CASE).in $(TESTDIR)/$(CASE).out

check:
	./verifier $(TESTDIR)/$(CASE).in $(TESTDIR)/$(CASE).out

clean:
	rm -f Q1 testcase/*.out