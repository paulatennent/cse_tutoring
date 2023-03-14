# Week 01 Tutorial

### Today we went over 
- Class introductions
- Course introduction
- What is an operating system? What is a terminal?
- Writing and compiling your first C program!
- Some useful commands for the terminal

### Command Cheat Sheet

    $ # this is a comment on the command line, since its a different language to c, we use a different syntax
    
    $ ls # prints the files and folders inside the current directory
    
    $ mkdir mydirectory # creates a directory called "mydirectory"
    
    $ touch myfile # creates a file called "myfile"
    
    $ cd COMP1511 # moves into the folder named "COMP1511"
    
    $ cd .. # moves to the parent folder
    
    $ mv file1 file2 # renames file1 to file2
    
    $ mv file1 mydirectory # moves file1 into "mydirectory"
    
    $ cp file1 file2 # copies the contents of file1 into file2 (will override any content in file2, or create the file if it doesn't exist
    
    $ pwd # prints the current working directory
    
    $ 1511 reset_dock # command created by 1511 if your VLAB dock is looking a bit funky

### Running and compiling code

To compile code, we use dcc, which converts code that a human can read and type, into code that a computer can read to execute (called an executable file).

    $ dcc helloworld.c -o helloworld

the "-o" is called a flag, when using different commands there could be various flags to give the command more information.

For the dcc command, the "-o" flag represents "I'm about to tell you what to name the executable file", and needs you to specify the name of the executable, which we type after the flag. So in the example above, the executable is called "helloworld".

If you leave out the "-o", the executable will be put in a file called "a.out".

To run our code, we can type

    $ ./helloworld

### Feedback (anonymous)

- [Feedback for the tutorial questions](https://docs.google.com/forms/d/e/1FAIpQLSdVYU-MbTp1fZuJdIXdH12f7V4KUM0gG9_TBkUDzaPHz-jGLw/viewform)
- [Feedback for Paula (or anything else)](https://forms.gle/3tPTJfUFtta682td6)

### Class Mascot

![](https://github.com/paulatennent/cse_tutoring/blob/master/_assets/f11_kora_cat.jpg)


### Very useful pie chart 
![](https://github.com/paulatennent/cse_tutoring/blob/master/_assets/favourite_plants.png)