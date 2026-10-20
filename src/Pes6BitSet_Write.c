/* compiler: mwcc-3.0.1b210 */
/* Sets (value != 0) or clears one bit. The sentinels 0x1EEE and 0x1FFF are
 * ignored, and the bound check accepts bitIndex == bitCount. Returns 1 only
 * when a bit was set. */
#include "pes6/bitset.h"
int Pes6BitSet_Write(struct Pes6BitSet *set, int bitIndex, int value) {
    if (bitIndex != 0x1EEE) {
        if (bitIndex != 0x1FFF) {
            if (bitIndex > set->bitCount) return 0;
            if (value) {
                set->words[bitIndex >> 5] |= 1U << (bitIndex & 31);
                return 1;
            }
            set->words[bitIndex >> 5] &= ~(1U << (bitIndex & 31));
            return 0;
        }
        return 0;
    }
    return 0;
}
