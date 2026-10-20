/* compiler: mwcc-3.0.1b210 */
/* Initialize the bitset view over caller-owned word storage. The metadata
 * bytes retain their observed defaults until their consumers are recovered. */
#include "pes6/bitset.h"
extern void *func_001C48E8(void *, int, unsigned int);
int Pes6BitSet_Initialize(struct Pes6BitSet *set, int bitCount, unsigned int *words) {
    set->wordCount = (bitCount - 1) / 32 + 1;
    set->bitCount = bitCount;
    set->words = words;
    set->metadata[0] = 255;
    set->metadata[1] = 255;
    set->metadata[2] = 255;
    set->unknown14 = 0;
    set->metadata[3] = 255;
    set->unknown10 = 0;
    func_001C48E8(set->words, 0, set->wordCount * 4);
    return 1;
}
