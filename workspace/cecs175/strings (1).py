# String review from the reading

name = "Neal"
# Draw name's layout in memory.




# Now tell me what these lines print:
print(len(name))


print(name[0])


# What do we call the 0?

# How do we access the LAST character in the string?




# Python is unusual: it allows negative indexes, which count from
# the right end instead of the left.
print(name[-1])
# Same as:
print(name[len(name) - 1])


# Although we can access at an index, we can't modify at an index.
# name[0] = 'D' # not allowed



# Strings can be compared with == and !=.
if name == "Neal":
    print("Hi, Neal!")
else:
    print("I don't know who you are!")


# Individual characters can be compared, too.
other_name = "Neil"
if other_name[2] == "i":
    print("You spell your name wrong,", other_name, "!")


# We can use a loop to iterate over each individual
# character of a string.
for i in range(len(name)): # what does this do?
    print(name[i])


# CHALLENGE: write a loop that prints the string backwards.
print("BACKWARDS")





# CHALLENGE: write a loop that prints every other letter of the string.
print()
print("EVERY OTHER")







# CHALLENGE: write a loop that prints out all the consonants in
# the string.
print("CONSONANTS ONLY")

















