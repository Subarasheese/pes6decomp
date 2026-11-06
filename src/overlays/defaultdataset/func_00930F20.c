/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *func_001E7100(s32);
extern s32 func_0021E000(u32);
extern void func_001E7140(s32);
extern void func_001E75A0(s32, void *);
extern void func_00931010(void);
extern s32 D_003EAC68;
extern char D_009CA7A8[];

s32 func_00930F20(void) {
    s32 r = 0;
    s32 t;
    switch (D_003EAC68) {
    case 0:
    default:
        if (func_001E7100(func_0021E000(7)) == NULL) {
            func_001E75A0(func_0021E000(7), D_009CA7A8);
        }
        D_003EAC68 = 1;
        break;
    case 1:
        t = func_001E7100(func_0021E000(7)) != NULL;
        if (t) {
            D_003EAC68 = 2;
        }
        break;
    case 2:
        func_00931010();
        D_003EAC68 = 3;
    case 3:
        func_001E7140(func_0021E000(7));
    case 4:
        D_003EAC68 = 0;
        r = 1;
        break;
    }
    return r;
}
