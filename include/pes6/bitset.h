#ifndef PES6_BITSET_H
#define PES6_BITSET_H

/* Partial layout established by the initializer and bit lookup. The backing
 * words belong to the caller; metadata meanings remain unknown. This is a
 * descriptive view, not an identified original C++ class. */
struct Pes6BitSet {
    int wordCount, bitCount;
    unsigned int *words;
    unsigned char metadata[4];
    unsigned char unknown10;
    char padding11[3];
    int unknown14;
};

#ifdef __cplusplus
extern "C" {
#endif
int Pes6BitSet_Initialize(struct Pes6BitSet *, int bitCount, unsigned int *words);
/* Sentinel 0x1FFF always matches. Other keys preserve the arithmetic result:
 * bit 31 of a word yields -1 when set; other set bits yield 1. */
int Pes6BitSet_Lookup(struct Pes6BitSet *, int bitIndex);
#ifdef __cplusplus
}
#endif

#endif
