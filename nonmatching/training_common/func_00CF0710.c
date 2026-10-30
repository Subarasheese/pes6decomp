/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CE44E0(void);
extern int func_002646D0(int);
extern s32 func_001BE4D0(s32);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE42B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CE43E0();                            /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00CEF6A0();                            /* extern */
M2C_UNK func_00CEF820(s32);                         /* extern */
M2C_UNK func_00CEF840(s32);                         /* extern */
M2C_UNK func_00CEF850(s32);                         /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB324;
extern char D_00CF9F50[];
extern M2C_UNK func_00CE9930;

s32 func_00CF0710(s32 arg0) {
    s32 temp_v1;

    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00CEF820(arg0);
        func_00CE9B20();
        func_00CEF6A0();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
            func_00CE44F0(arg0);
        } else {
            func_00CE4540(arg0);
        }
        break;
    case 2:
        func_00CEF840(arg0);
        D_003EB324 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_001BE4D0(0) != 0) {
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0(arg0);
        }
        break;
    case 0:
        func_00CE43E0();
        func_00CE44E0();
        func_00CE42B0(((void *)D_00CF9F50), 4);
        func_00CE9B20();
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) D_003EB324;
        func_00CE9F00(1, 9, &func_00CE9930);
        func_002646E0(arg0);
        func_00CEF850(arg0);
        break;
    }
    return 0;
}
