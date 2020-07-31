/* ============================================
|                  IACA Model                 |
|---------------------------------------------|
| Welcome to the IA's C Architecture model !  |
|                                             |
| In this file you will find everything you   |
| have to know about the IACA model.          |
|                                             |
| This model has been created to simplify     |
| the writing/reading of program files in C   |
| and to preserve a good understanding of     |
| what is happening inside computer.          |
|                                             |
| This is not modifying a lot of things but   |
| it makes easy for everybody to understand   |
| your code AND for you to debug it.          |
|                                             |
| A program file follows the IACA model if    |
| all of the following specifications are     |
| respected.                                  |
|                                             |
| IACA model specifications :                 |
|                                             |
| 1) The program is written in C in a .c file |
|    without any header.                      |
|                                             |
| 2) To include another IACA file, you only   |
|    have to #include "other.c".              |
|    Headers are accepted for standard        |
|    libraries only.                          |
|                                             |
| 3) The program is either an runable file    |
|    (with a main() function) or a utility    |
|    file (without any main() function).      |
|                                             |
| 4) If a functionnality in a runable file    |
|    should to be shared with another one,    |
|    the functionnality has to be placed in   |
|    an utility file to make it shareable.    |
|                                             |
| 5) The code has to be CLEAR and CLEAN,      |
|    easy to understand for everybody.        |
|    The code has to be structured in BLOCKS  |
|    (an example of the structure is given    |
|    at end of this file).                    |
|    If you can recognize all the sections    |
|    (BLOCKS) of your code by looking at it   |
|    with eyes almost closed, that means      |
|    that your code is CLEAR.                 |
|                                             |
| 6) A code file should not exceed 1000 lines |
|    except if most of it is composed with    |
|    "referencing" code.                      |
|    "referencing" code is code that ONLY     |
|    consists in associating values to other  |
|    values (basically System/utilities.c :   |
|    charToInt() function).                   |
|                                             |
| 7) IACA recognizes 2 type of errors :       |
|    RUNTIME ERROR : execution continues      |
|    FATAL ERROR   : execution stops          |
|    When an error occurs, the program must   |
|    print to screen a sequence like this :   |
|    "ERROR_TYPE > file.c : func() : details" |
|    RUNTIME ERRORS can be disabled by :      |
|    #define RUNTIME_ERROR_DISABLE.           |
|                                             |
| That's it for all the IACA model            |
| specifications.                             |
|                                             |
| Here is some recommendations to help you    |
| understand the IACA philosophy :            |
|                                             |
| - Your code can be separated in 4 BIG       |
|   BLOCKS separated by 6 carriage returns :  |
|   // ------------ importations ------------ |
|   // ------------ declarations ------------ |
|   // ------------ functions ------------    |
|   // ------------ execution ------------    |
|                                             |
| - Each big block is separated in multiples  |
|   BLOCKS separated by 3 line feeds :        |
|   //section1                                |
|   //section2                                |
|   //...                                     |
|                                             |
| - Each function can have a SHORT(I insist)  |
|   description of what it is doing situated  |
|   near the function name.                   |
|                                             |
| - The clearer is your code, the better it   |
|   will work !                               |
|                                             |
| That's it for the IACA philosophy !         |
|                                             |
| Contact : i.a.sebsil83@gmail.com            |
| YT: https://www.youtube.com/user/IAsebsil83 |
| GitHub repo : https://github.com/iasebsil83 |
|                                             |
| Let's Code !                         By I.A.|
============================================ */
