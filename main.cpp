

//read all data from file into an array of size determined by the file size, maybe 2d array for stereo audio

//do whatever data type converting neccesary

//run functions on it to add reverb/echo, etc. and copy to new array

//write data in new array to new file

//normalization: get largest value in array, do the required peak sound - largest val, then add that result to all values in array

//reverser: just reverse the array

//echo: apply a delay effect with decreasing magnitude to each section of audio

//low pass filter: tune down all audio above a certain threshold to be below that threshhold, seems like reverse normalization
