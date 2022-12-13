# Lists are "mutable" -- they can be mutated, or changed, both by
# changing individual indices, or by adding or removing values.

faculty = ["Bo", "Frank", "Alvaro", "Birgit"]
print(faculty)

# We've already seen this:
faculty[0] = "Mehrdad"

# This is called "mutation". It changes one aspect of the variable faculty,
# but doesn't create a brand new object. faculty still points to the same
# object it used to point to, but that object has mutated.


# Other means of mutating lists:

# .append(x): given a new value x, add x to the end of the list.
faculty.append("Anthony")
print(faculty)

# faculty now has 5 elements, and has been mutated by appending the new value.


# This might seem similar to the following code:
x = 10
print(x)
x = 20
print(x)

# That might look like mutation, because x changed from 10 to 20... but it's
# not! The = means that we have *reassigned* x, not *mutated* it. x used to
# point to the object "10"; now it points to a different object "20".
# This is subtle, but important, and we'll cover it again later.


# .remove(x): find the first element equal to x, and remove it from the list
faculty.remove("Frank")
print(faculty)


# .pop(): remove the last item in the list
faculty.pop()
print(faculty)


# .pop(i): remove the item at index i
faculty.pop(0)
print(faculty)


# .insert(i, x): insert x into the list before index i
faculty.insert(1, "Neal")
print(faculty)


