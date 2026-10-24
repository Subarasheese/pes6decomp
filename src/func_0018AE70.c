/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x1C];
    s16 a;
    u8 pad1E[0x26];
    s16 b;
    u8 pad46[0x26];
    s16 c;
    u8 pad6E[0x26];
    s16 d;
} Bars;

extern Bars *D_00520128[];
extern s16 D_0051FFB2[];
Bars *func_00153FE0(s32, s32);

void func_0018AE70(void) {
    Bars *bars;

    if (D_00520128[0] != NULL) {
        return;
    }
    bars = func_00153FE0(D_0051FFB2[0], 0xA0);
    D_00520128[0] = bars;
    if (bars != NULL) {
        bars->a = 0;
        bars->b = 0;
        bars->c = 0;
        bars->d = 0;
    }
}
