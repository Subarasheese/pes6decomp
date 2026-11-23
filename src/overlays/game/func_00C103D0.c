/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s16 counter;
    u8 reserved02[0x2f2];
} GameCounter;
extern GameCounter D_00CBD8EC[];
void func_00C103D0(s32 index) { ++D_00CBD8EC[(u8)index].counter; }
