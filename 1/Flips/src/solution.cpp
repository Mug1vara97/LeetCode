#include "solution.h"

int Solution::minFlips(int a, int b, int c) {
    int flips = 0;

    for (int i = 0; i < 32; i++) {
        int bit_a = (a >> i) & 1;
        int bit_b = (b >> i) & 1;
        int bit_c = (c >> i) & 1;

        if ((bit_a | bit_b) != bit_c) {
            if (bit_a != bit_b) {
                flips++;
            } else {
                if (bit_a == 1) {
                    flips += 2;
                } else {
                    flips++;
                }
            }
        }
    }

    return flips;
}