# Home Work 1

### Description

The goal of this project is to implement a C program that a variable number of keywords as command line argument, reads text from the standard input stream, searches the keywords in the input stream, and when the end of input stream is reached prints the number of times each keyword appears in the input text.

Read keywords, command-line arguments, search keywords, keyword count, c language.

### Prerequisites

Requirements for the software and other tools to build, test and push
- [Example 1]GCC compiler
- [Example 2]C language

## Running the tests

To compile the file 
    
    gcc wordCount.c

And to run the output file, Run the command lines as

    ./a.out or the in to from and it was is <tale.txt
    ./a.out it was for <tinTtale.txt

And to run the output file with the required paragraph

    ./a.out and is it
 
Press Enter, then type the required paragraph and to come out of the
command press CNTL+C or CNTL+C

### Sample Tests

So when you run the program with 
 ./a.out it was or <tale.txt

    it =2003
    was =1763
    or =358

## Authors

  - **Billie Thompson** - *Provided README Template* -
    [PurpleBooth](https://github.com/PurpleBooth)

See also the list of
[contributors](https://github.com/PurpleBooth/a-good-readme-template/contributors)
who participated in this project.

## Acknowledgments

  - To read the strings from the files the function used is getline.c
  - Referenced websites are Tutorialspoint, Delfstack, Quora, Geeksforgeeks, linuxhint,
  - stackoverflow, overiq, programiz.

[//]: #
  [tutorialspoint]:<https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm>
  [Quora]:<https://www.quora.com/How-do-you-dynamically-allocate-an-array-of-struct-pointers-in-C>
  [delfstack]:<https://www.delftstack.com/howto/c/c-array-of-structs/>
  [geeksforgeeks]:<https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/>
  [linuxhint]:<https://linuxhint.com/read-lines-stdin-c-programming/>
  [overiq]:<https://overiq.com/c-programming-101/the-strcmp-function-in-c/>
  [ibm]:<https://www.ibm.com/docs/en/i/7.3?topic=functions-strcspn-find-offset-first-character-match>
  [stackoverflow]:<https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input>
