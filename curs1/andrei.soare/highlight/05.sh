andrei@andrei-vm:~/work$ ls
hello.c
andrei@andrei-vm:~/work$ make hello.o
cc    -c -o hello.o hello.c
andrei@andrei-vm:~/work$ make hello
cc   hello.o   -o hello
andrei@andrei-vm:~/work$ ls
hello  hello.c  hello.o
