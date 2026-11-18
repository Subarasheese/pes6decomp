/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 lo : 6;
    u8 b6 : 1;
} Flags;

s32 sceDmaSync(s32, s32, s32);
void sceDmaSend(s32, s32);
extern s32 D_003E9788;

void func_00121490(s32 a0) {
    do {
    } while (sceDmaSync(D_003E9788, 1, 4) != 0);
    ((Flags *)D_003E9788)->b6 = 0;
    sceDmaSend(D_003E9788, a0);
}
