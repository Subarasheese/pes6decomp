/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9300(int);
extern void func_002E9200(int);
extern int func_002E8BD0(void);
extern void func_002E91B0(int);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_0065E780[];
extern char D_0065E784[];
extern char D_0065E788[];
extern char D_0065E78C[];
extern char D_0065E790[];
extern char D_0065E798[];
extern char D_0065E7A0[];
extern char D_0065E7A1[];
extern char D_0065E7A2[];
extern char D_0065E7B0[];
extern char D_0065E7D2[];

void func_00653F60(void) {
    if (func_002E8BD0() == 0x48) {
        func_001C48E8(((void *)D_0065E780), 0, 0x24);
        (*(s32 *)D_0065E780) = 0;
        (*(s32 *)D_0065E784) = 0;
        (*(s8 *)D_0065E7A0) = 0;
        (*(s8 *)D_0065E7D2) = 0;
        func_002E9200(0);
        func_002E91B0(2);
    }
    if (func_002E8BD0() == 0x49) {
        func_001C48E8(((void *)D_0065E780), 0, 0x24);
        (*(s32 *)D_0065E788) = 0;
        (*(s32 *)D_0065E790) = 0;
        (*(s32 *)D_0065E798) = 0;
        (*(s32 *)D_0065E78C) = 0;
        (*(s8 *)D_0065E7A1) = 0;
        (*(s8 *)D_0065E7A2) = 0;
    }
    func_001C48E8(((void *)D_0065E7B0), 0, 0x28);
    func_002E9300(0);
}
