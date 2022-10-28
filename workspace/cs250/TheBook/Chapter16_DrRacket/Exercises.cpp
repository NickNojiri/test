/*Chapter 16: Exercises
For these exercises, you should use ONLY the functions included in the slides (both Racket 1 and 2), unless otherwise indicated.

Your functions need to pass ONLY the test cases listed below. It is not necessary to do more testing.

Exercise 1
Let b be a non-null list containing at least two atoms. Write a function double-second that evaluates to a new list obtained from the list b by ‘doubling’ the second atom in b.

Test cases:

(double-second '(1 2))       => '(1 2 2)
(double-second '(1 2 3 4))   => '(1 2 2 3 4)
Exercise 2
Let s be a list. Write a function three-or-more that evaluates to the list of the first three elements (in order) if s contains three or more elements, and evaluates to the null list otherwise.

Test cases:

(three-or-more '())              => '()
(three-or-more '(1))             => '()
(three-or-more '(1 2))           => '()
(three-or-more '(1 2 3))         => '(1 2 3)
(three-or-more '(1 2 3 4 5 6))   => '(1 2 3)
Exercise 3
Define a function third-element that takes a list m and returns its third element. If there is no third element, return the empty list.

Test cases:

(third-element '())                           => '()
(third-element '(1))                          => '()
(third-element ‘(1 2 ))                       => '()
(third-element '(1 2 3 4))                    => 3
(third-element '(1 2 3 4 5))                  => 3
(third-element '((1 2) (3 4) (5 6) (7 8)))    => '(5 6)*/