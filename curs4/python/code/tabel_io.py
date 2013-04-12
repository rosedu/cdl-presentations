file = open("alice.txt","r")  # open for reading
file = open("output.txt","w") # open for writing
file = open("output.txt","a") # open for appending
file.close()                  # close file
text = file.readlines()       # read all lines
line = file.readline()        # read next line
file.writelines(text)         # write list to file
file.write(line)              # write one line to file 
