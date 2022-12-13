#lang racket

(define double-second
    (lambda (b)
      (cons (first b)
            (cons (first (rest b)) (rest b)))))
            
(define three-or-more
  (lambda (s)
    (cond
      ((empty? s) ' ())
      ((empty? (rest s)) ' ())
      ((empty? (rest (rest s))) ' ())
      (else (cons (first s)
                  (cons (first (rest s))
                        (cons (first (rest (rest s))) ' ())))))))
                        
(define third-element
  (lambda (lis)
    (cond
      ((empty? lis) ' ())
      ((empty? (rest lis)) ' ())
      ((empty? (rest (rest lis))) ' ())
      (else (first (rest (rest lis)))))))

 
(double-second ' (1 2))      
(double-second ' (1 2 3 4))

(three-or-more ' ())             
(three-or-more ' (1))            
(three-or-more ' (1 2))          
(three-or-more ' (1 2 3))        
(three-or-more ' (1 2 3 4 5 6))

(third-element ' ())                         
(third-element ' (1))                         
(third-element ' (1 2 ))                      
(third-element ' (1 2 3 4))                    
(third-element ' (1 2 3 4 5))                 
(third-element ' ((1 2) (3 4) (5 6) (7 8)))