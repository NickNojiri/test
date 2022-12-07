/**
 * @file algo.h
 * @author <nnojiri>
 * @version <SS2022 tth-aft>
 */
// Complete the interface file
#ifndef AlGO_H
#define ALGO_H


/** the Ancient Algorithms Libary
*/
namespace aa{
    /**
     * Greatest Common Divisr (Euclid's algorithm).
     * @param a the first number.
     * @param b the second number
     * @return the lagregest number that they evenly divide by
     * @code{.cpp}
     * @endCode
     */
    int gcd(int a, int b);
    /**
     * Square root using Newtons's method.
     * @param num the number to compute must be >= 0 ;
     * @return the square.
     * @code{.cpp}
     * @endCode
     */
    double sqrt(double n );
    /**
    * calc an approx of pi form 300/100
    * @param[in out] n is a unsigned ref
    * @param[in-out] d is a unsigned ref
    */
    void pi(unsigned& n, unsigned& d);
}

#endif