* Program and process
* compile and Link
* Build Process
* Make / Makefile
* git
* git init ,git status ,git log ,git add ,git commit
* Modular programs
    * Libraries
    * Standard libraries (linux - lib.a and libc.so)
    * User libraries / #rd Party library
* Two Types
    * static
    * Dynamic (Shared Objects)=> *.so
* Static Library
    * ar x  (extract)
    * ar crv libname.a 1.o 2.o .......n.o
    * lib function embedded in a binary
    * multiple copies of library function loaded in the memory
     
* Dynamic library
    * gcc -o libname.so -shared -fPIC  
    * lib function reference definition embedded in a binary
    * Single copy of library function loaded in the memory 

* PID ,PPID ,UID 
* getpid() ,getppid()
* man pages

* fork - creating a new process
* parent and child relationship

* Psuedo parallelism
* True parallelism

* ltrace
* strace
* Program using system call -> write a string inside a file

* Library 
    * User space
    * Maybe Buffered I/O
    * Formatted I/O

* System
    * Kernel space
    * Not buffered I/O
    * No Formatted I/O

* open -  O_CREAT
* int - File descriptor
    * fd - represents an open file in the kernel
        