|* ***************************************************************************** *|
|*                                                         _____    ____         *|
|*                                                      \| _____    ____ |\      *|
|*       Encryption Program::Version 1                         /|+/|/            *|
|*                                                             \|/+|\            *|
|*   By: Willem Smith <jsjohn1951@gmail.com>                   /|+/| *********** *|
|*           42 Abu Dhabi Student                       ___    \|/+| Encryption  *|
|*                                                      \  \__ /+-/ Encryption   *|
|*   Created: 2022/01/24 16:08:58 by wismith             \ ____ _/ ************* *|
|*                                                                               *|
|* ***************************************************************************** *|

Run in Terminal:

	$ make
	$ ./encrypt

Program to encrypt numbers presented in a string after it encounters a '\t' 
character. The encryption will continue until it encounters characters that are 
not characters '0' and '9' and between characters '0' and '9' on the ascii table.
The string must end in 3 non numeric ascii characters: e.g. the characters ZAF or 
GPU would constitute a good ending that may represent some unique data (like 
country of origin). 
/* Remember that space is a non numeric character too ;) */

The data to be encrypted should be placed in 'Decrypted.txt' found in the '/txt' 
directory. For demonstration purposes I've formatted mine to include a name of 
person followed by a colon, the '\t' character, and random numbers followed by 
ZAF.

The program will only encrypt the numbers after the '\t' characters; nothing more
nothing less.

If an 'encrypted.txt' file is present within the '/txt' directory it will write 
the updated encrypted data to the file. If it's not present it will create a new 
file, however it will not include permission to read the file.
Use:

		$ chmod u+rw txt/encrypted.txt

This command will allow you to read and write to the file. This only has to be done
once after the file is created.