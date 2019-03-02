#include <iostream>
#include <stdio.h>
#include <vector>
#include <random>
#include <ctime>


class Solution {
private:

    void add_matrices (std::vector<std::vector<int> > &A, std::vector<std::vector<int> > &B, std::vector<std::vector<int> > &C, int n) {
        auto size = A.size();
        for (auto i = 0; i < size; i++)
            for (auto j = 0; j < size; j++)
                C[i][j] = A[i][j] + B[i][j];
    }

    void subtract_matrices (std::vector<std::vector<int> > &A, std::vector<std::vector<int> > &B, std::vector<std::vector<int> > &C, int n) {
        auto size = A.size();
        for (auto i = 0; i < size; i++)
            for (auto j = 0; j < size; j++)
                C[i][j] = A[i][j] - B[i][j];
    }

    int make_n_power2 (int n) {
        //Input: n, an integer
        //Output: m, where m is the first power of 2 greater than or equal to n

        if ((n & (n - 1)) == 0)
            return n;

        auto next_power2 = 1;
        while (next_power2 < n) next_power2 <<= 1;

        return next_power2;
    }

    int make_nxn_power2 (std::vector<std::vector<int> > &A) {
        //Input: nxn matrix
        //Output: m, where m is the first power of 2 greater than or equal to n
        //Internal: if n < m : resize matrix A to mxm, padded with 0s

        int n = A.size();
        auto m = make_n_power2(n);
        if (n < m) {
            A.resize(m);
            for (auto i = 0; i < m; ++i)
                A[i].resize(m, 0);
        }

        return m;
    }


public:

    void strassen (std::vector<std::vector<int> > &X, std::vector<std::vector<int> > &Y, std::vector<std::vector<int> > &Z, int n) {
        if (n == 1) {
            // base case
            
            Z[1][1] = X[1][1] * Y[1][1];
            return;
        }
        // Enforce invariant: n must be power of 2
        // n & (n-1) == 0 for all n | n = 2^i for some non-negative integer i
        if ((n & (n - 1)) != 0) {
            make_nxn_power2(X);
            make_nxn_power2(Y);
            n = make_nxn_power2(Z);
        }
        auto m = n >> 1;
        std::vector<std::vector<int> >
            /*sub-matrices of X*/
            A(m, std::vector<int>(m)), B(m, std::vector<int>(m)),
            C(m, std::vector<int>(m)), D(m, std::vector<int>(m)),

            /*sub-matrices of Y*/
            E(m, std::vector<int>(m)), F(m, std::vector<int>(m)),
            G(m, std::vector<int>(m)), H(m, std::vector<int>(m)),

            /*sub-matrices of Z*/
            /*(cleverly chosen) additions/subtractions*/
            Z00(m, std::vector<int>(m)), Z01(m, std::vector<int>(m)),
            Z10(m, std::vector<int>(m)), Z11(m, std::vector<int>(m)),

            /*temporary matrices for intermediate results*/
            T1(m, std::vector<int>(m)), T2(m, std::vector<int>(m)),

            /*(cleverly chosen) products*/
            P1(m, std::vector<int>(m)), P2(m, std::vector<int>(m)),
            P3(m, std::vector<int>(m)), P4(m, std::vector<int>(m)),
            P5(m, std::vector<int>(m)), P6(m, std::vector<int>(m)),
            P7(m, std::vector<int>(m));

        //Divide X and Y into sub-matrices
        for (auto i = 0; i < m; ++i) {
            for (auto j = 0; j < m; ++j) {
                //your code here
            }
        }


        //Compute products
        //Think of function calls like assembly instructions

        //P1 = A * (F - H)
        //your code here
        
        //P2 = (A + B) * H
        //your code here
        
        //P3 = (C + D) * E
        //your code here
        
        //P4 = D * (G - E)
        //your code here
        
        //P5 = (A + D) * (E + H)
        //your code here
        
        //P6 = (B - D) * (G + H)
        //your code here
        
        //P7 = (A - C) * (E + F)
        //your code here
        


        //Compute additions/subtractions of products

        //Z00 = P5 + P4 + P6 - P2
        //your code here
        
        //Z01 = P1 + P2
        //your code here
        
        //Z10 = P3 + P4
        //your code here
        
        //Z11 = P1 - P3 + P5 - P7
        //your code here

        //merge sub-matrices of Z
        for (auto i = 0; i < m; ++i) {
            for (auto j = 0; j < m; ++j) {
                //your code here
            }
        }
    }

    void populate_matrix (std::vector<std::vector<int> > &A, int max_val, int len) {
        for (auto i = 0; i < len; ++i) {
            for (auto j = 0; j < len; ++j) {
                A[i][j] = rand() % (max_val + 1);
            }
        }
    }

    void print_matrix (const std::vector<std::vector<int> > &A, int n) {
        for (auto i = 0; i < n; ++i) {
            for (auto j = 0; j < n; ++j) {
                printf ("%d ", A[i][j]);
            }
            printf ("\n");
        }
        printf ("\n");
    }

    void print_matrix_vect_form (const std::vector<std::vector<int> > &A, int n) {
        printf ("{");
        for (auto i = 0; i < n; ++i) {
            if (i) printf (" ");
            printf ("{");
            for (auto j = 0; j < n; ++j) {
                printf ("%d, ", A[i][j]);
            }
            printf ("\b\b \b}");
            if (i < n - 1) printf (",\n");
        }
        printf ("};\n\n");
    }

    void naive_matrix_mult (std::vector<std::vector<int> > &X, std::vector<std::vector<int> > &Y, std::vector<std::vector<int> > &Z, int n) {
        if ((n & (n - 1)) != 0) {
            make_nxn_power2(X);
            make_nxn_power2(Y);
            n = make_nxn_power2(Z);
        }
        for (auto i = 0; i < n; ++i) {
            for (auto j = 0; j < n; ++j) {
                Z[i][j] = 0;
                for (auto k = 0; k < n; ++k)
                    Z[i][j] += X[i][k] * Y[k][j];
            }
        }
    }
};