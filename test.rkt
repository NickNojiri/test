#lang racket
(define a ' (1 4 2 4))
(define double-second
  (lambda (b)
    (cons (first b)
          (cons (first (rest b))(rest b)))))

(define three-or-more
  (lambda (lis)
    (cond
      ((empty? lis) ' ())
      ((empty? (rest lis))'())
      ((empty? (rest (rest lis))) '())
      (else (cons (first lis)
            (cons (first (rest lis))
                  (cons (first (rest (rest lis))) ' () )))))))

(double-second '(1 2 3))
(double-second a)

(three-or-more ' ( 1 1  ) )
(three-or-more ' ( 1 1 1 ) )
(three-or-more ' ( 1 1 1 1 ) )