/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x6C];
    s32 x6C;
    char *x70;
} SM;

extern int func_00333600(int);
void func_003394E0(s32, s32, s32, s32);
extern char func_0032C9B0[];

s32 func_0032CA30(SM *arg0, s32 arg1) {
    if (func_00333600(0xA) == 0) {
        return 0;
    }
    arg0->x6C = 1;
    arg0->x70 = func_0032C9B0;
    func_003394E0(arg1, 1, 0, 2);
    return 1;
}
