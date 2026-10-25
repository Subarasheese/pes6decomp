/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 lo : 6;
    u8 b6 : 1;
} Flags;

s32 func_001024C8(s32, s32, s32);
void func_00102228(s32, s32);
extern s32 D_003E9788;

void func_00121490(s32 a0) {
    do {
    } while (func_001024C8(D_003E9788, 1, 4) != 0);
    ((Flags *)D_003E9788)->b6 = 0;
    func_00102228(D_003E9788, a0);
}
