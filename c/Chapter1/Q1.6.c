#include "Chapter1.h"

/*
1*  2*  5*  4*  5
6   7*  8*  9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25

21  16  11  6   1
22  17  12  7   2
23  18  13  8   5
24  19  14  9   4
25  20  15  10  5

00 -> 0(N-1-0) -> (N-1-0)(N-1-0) -> (N-1-0)0
01 -> 1(N-1-0) -> (N-1-0)(N-1-1) -> (N-1-1)0
02 -> 2(N-1-0) -> (N-1-0)(N-1-2) -> (N-1-2)0
03 -> 3(N-1-0) -> (N-1-0)(N-1-3) -> (N-1-3)0

11 -> 1(N-1-1) -> (N-1-1)(N-1-1) -> (N-1-1)1
12 -> 2(N-1-1) -> (N-1-1)(N-1-2) -> (N-1-2)1

ij -> j(N-1-i) -> (N-1-i)(N-1-j) -> (N-1-j)i
*/

void rotateMatrix(int matrix[N][N]) {
    for (int i = 0; i <= N/2; i++) {
        for (int j = i; j < N - (i + 1); j++) {
            int p1 = matrix[i][j];
            int p2 = matrix[j][N-1-i];
            int p3 = matrix[N-1-i][N-1-j];
            int p4 = matrix[N-1-j][i];
            matrix[j][N-1-i] = p1;
            matrix[N-1-i][N-1-j] = p2;
            matrix[N-1-j][i] = p3;
            matrix[i][j] = p4;
        }
    }
}