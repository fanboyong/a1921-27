all: listg.c sort.c stack.c
testlistg:  listg.c testlistg.c
	gcc listg.c testlistg.c -o testlistg
testsort:  sort.h sort.c testsort.c
        gcc sort.c testsort.c -o testsort
teststack:  stack.c teststack.c
        gcc stack.c teststack.c -o teststack
clean:
        rm testlistg
	rm testsort
	rm teststack
