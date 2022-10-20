# String slices

# A "slice" is a portion of an existing string, designated with a start index
# and an end index. The slice creates a copy of the string starting at the given
# index, and copying all characters in the string up to but not including the
# end index.

st = "CECS 174 is so much fun"
department = st[0:4]
# First number is the start index; second is the end index (remember, not inclusive).
# Another way:
department = st[:4]
# With no start index, we start at 0.
print(department)

course_num = st[5:8]
print(course_num)

print(st)

feeling = st[12:] # with no end index, we go to the last character
print(feeling)

# Remember: a slice does NOT MODIFY the original string. It just copies some indexes
# into a new string.
