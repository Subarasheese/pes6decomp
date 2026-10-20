/* compiler: mwcc-3.0.1b210 */
/* 0x1FFF is the unconditional-match sentinel. Preserve the arithmetic
 * shift of the masked word: a set bit31 returns -1 rather than 1. */
#include "pes6/bitset.h"
int Pes6BitSet_Lookup(struct Pes6BitSet *set, int bitIndex) {
    int result;
    if (bitIndex == 0x1FFF) {
        result = 1;
    } else {
        int bitInWord = bitIndex & 31;
        unsigned int *words = set->words;
        unsigned int bitMask = 1U << bitInWord;
        result = (int)(bitMask & words[bitIndex >> 5]) >> bitInWord;
    }
    return result;
}
