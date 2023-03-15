# Openframework 1: Boids

### Video link: https://www.youtube.com/watch?v=tgUVefU8bUI

This code implements two Boids classes where Boids have position, velocity and movement rules including separation, coalescence and alignment. Boids can interact with other Boids to calculate the direction of their movement by calculating the distance between them. This Boid class also has the ability to maintain boundaries to avoid Boids flying off the screen. In addition, the code includes a number of helper functions, such as setting and getting weights and thresholds.

<img width="1014" alt="1" src="https://user-images.githubusercontent.com/115119995/225199057-147392f6-f671-42f2-82d6-ad3013762c75.png">

——————————————————————————————————————————————————————————

# Openframework 2
### Video link: https://youtu.be/0-5rDZttEf0

This code is a video processing application based on the openFrameworks library that uses a computer camera to capture video and convert the pixels in the video frames into ASCII character graphics. The program uses some common openFrameworks functions and objects, such as ofVideoGrabber for capturing video, ofPixelsRef for getting pixel data and ofTrueTypeFont for drawing ASCII characters. The program also uses a number of openFrameworks functions to set the window size, set the background colour, resize characters, display video settings and so on. In addition, the program contains a number of mouse and keyboard event handler functions.

<img width="639" alt="3" src="https://user-images.githubusercontent.com/115119995/225196520-2d5be189-ae9a-4b0e-ac3b-fd3db71e1f60.png">
<img width="640" alt="4" src="https://user-images.githubusercontent.com/115119995/225196525-bb885c24-4064-44eb-abba-3c08dbf36c29.png">
<img width="639" alt="5" src="https://user-images.githubusercontent.com/115119995/225196532-c6551f19-9e03-45d4-a8d8-ac9c9bbdbd09.png">

——————————————————————————————————————————————————————————

# Python 1: Decoding challenge
### Video link: https://youtu.be/sfg9Q8UYJT8

I have created code for a number guessing game which includes two different functions guessNumber and asciiGuess. guessNumber generates a random integer between 1 and maxValue and then asks the user to guess the number within maxTime attempts. Each time the user enters an integer, they are prompted with an error if it is not a number, if they guess correctly the game is over, if they guess incorrectly they are prompted with a number that is too big or too small. If the user has used up all the times and has not guessed, the game is over.

The asciiGuess function is similar to the guessNumber function in that it asks the user to guess a number within maxTime attempts, but the number is the ASCII code for the character '1'. Each time the user enters an integer, an error is indicated if it is not a number, if it is correct it ends the game, if it is wrong it indicates whether the number is too big or too small. If the user has used up all the times and has not guessed, the game will be prompted to end and the correct answer will be displayed.

<img width="706" alt="截屏2023-03-15 04 41 05" src="https://user-images.githubusercontent.com/115119995/225208533-89c37a5a-8d65-4ed1-aff4-1f20c0126bd1.png">

——————————————————————————————————————————————————————————

# Python 2: Average picture

The function of this code is to read 50 images from a folder and calculate their average pixel value and finally display the average image. It uses the os module in Python to manipulate files and directories, and the matplotlib and numpy modules to manipulate image and array data. It uses list parsing to get the full paths of all image files with a .jpg suffix and reads them as numpy arrays for statistical processing. Finally, it uses the imshow function to display the average image.

![未标题-1](https://user-images.githubusercontent.com/115119995/225207973-5e03546d-9c1d-424d-8c1a-a1dee7020e77.png)





