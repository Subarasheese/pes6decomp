/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#pragma opt_propagation off
#include "types.h"
typedef struct {
    u8 reserved[2];
    u8 pairFlags[496];
} LeaguePairFlags;
extern LeaguePairFlags *func_002260A0(void);
extern s32 func_009784B0(s32, s32);
static inline void clearPairFlag(s32 index) {
    if (index < 496) {
        LeaguePairFlags *league = func_002260A0();
        if (league)
            league->pairFlags[index] = 0;
    }
}
void func_00978600(s32 player) {
    s32 current = player & 255;
    if (current < 32) {
        s32 other = 0;
        do {
            if (other != current) {
                s32 pair = (u8)func_009784B0(player, other & 255);
                clearPairFlag(pair);
            }
            ++other;
        } while (other < 32);
    }
}
