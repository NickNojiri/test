/*Chapter 16: Exercises Solution
Solution to Exercise 1
(define double-second
    (lambda (b)
      (cons (first b)
            (cons (first (rest b)) (rest b)))))
Solution to Exercise 2
(define three-or-more
  (lambda (s)
    (cond
      ((empty? s) '())
      ((empty? (rest s)) '())
      ((empty? (rest (rest s))) '())
      (else (cons (first s)
                  (cons (first (rest s))
                        (cons (first (rest (rest s))) '())))))))
Solution to Exercise 3
(define third-element
  (lambda (lis)
    (cond
      ((empty? lis) '())
      ((empty? (rest lis)) '())
      ((empty? (rest (rest lis))) '())
      (else (first (rest (rest lis)))))))*/