TESTDIR = testcase
CASE = 1

all:
	g++ Q2.cpp -o Q2

run:
	./Q2 $(TESTDIR)/$(CASE).in $(TESTDIR)/$(CASE).out

check:
	./verifier $(TESTDIR)/$(CASE).in $(TESTDIR)/$(CASE).out

clean:
	rm -f Q2