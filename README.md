# ShallysOS
A simple operating system built following the guides of:

* http://www.cs.bham.ac.uk/~exr/lectures/opsys/10_11/lectures/os-dev.pdf
* https://github.com/cfenollosa/os-tutorial

## Inspiration
Because why not. OS's are sooo cool. I feel like as a student you learn so much about theory in school but you never get the opportunity to apply your knowledge so I thought "Hey, I just took a course on Operating Systems why not build an OS?"

## Current Progress
Currently all i have is a simple shell that echos back what the user enters on the keyboard. So what happens is when the user types something we will call kernel, telling it that the user has input something and print it to the screen. 

So after, i implement a filesystem i can expand on this and add some basic commands like mkdir, cd, ls, pwd, etc.

![ScreenShot](https://github.com/ShallyBanh/WhereAmI/blob/master/docs/currentProgress.png)

## Building and Running ShallysOs

The tools use to build ShallysOS are:
* gcc
* gmp
* mpfr
* libmpc
* nasm
* qemu

To run just run
> make

and then after run 

> qemu-system-x86_64 os-image.bin


and ShallysOS should boot up

## ToDo 
- Implement file system
- Add basic commands
- Fix booting issues
- Memory management
- Networking
- And maybe a basic interpreter  