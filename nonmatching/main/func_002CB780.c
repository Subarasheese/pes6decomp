/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001540B0(s32, s32);
extern void func_001540D0(s32);
extern void func_00153FA0(void *);
extern char D_005E3C9C[];
extern char D_005E3CA0[];

void func_002CB780(void) {
    s32 i;
    u8 *obj;
    s32 *p;

    obj = *(u8 **)D_005E3CA0;
    if (*(s32 *)D_005E3C9C != 0) {
        p = (s32 *)(obj + 4);
        for (i = 1; i < 0x1C; i++) {
            func_001540B0(i, *p);
            p++;
        }
        func_001540D0(*(s8 *)(obj + 0x70));
        *(u8 **)D_005E3CA0 = *(u8 **)(obj + 0x74);
        func_00153FA0(obj);
        *(s32 *)D_005E3C9C = *(s32 *)D_005E3C9C - 1;
    }
}
