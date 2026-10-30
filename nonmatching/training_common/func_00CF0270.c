/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00CEAD10(void);
extern void func_001B7A60(s32);
extern int func_002646D0(int);
extern s32 func_001BE4D0(s32);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE42B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CE4470();                            /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CF0D20(s32);                         /* extern */
M2C_UNK func_00CF0DC0(s32);                         /* extern */
M2C_UNK func_00CF0F40(s32);                         /* extern */
extern void *D_003E7E1C;
extern char D_00CF9FA0[];
extern M2C_UNK func_00CEFF30;

s32 func_00CF0270(s32 arg0) {
    s32 temp_v1;

    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00CF0D20(arg0);
        func_00CE9B20();
        func_001B6460(0);
        func_001B7A60(0);
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
            func_00CE44F0(arg0);
        } else {
            func_00CE4470();
            func_00CE4540(arg0);
            if (func_00CEAD10() == 0x111) {
                M2C_FIELD(D_003E7E1C, M2C_UNK **, 0x188) = &func_00CEFF30;
            }
        }
        break;
    case 2:
        func_00CF0DC0(arg0);
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
        func_00CE42B0(((void *)D_00CF9FA0), 5);
        func_00CF0F40(arg0);
        func_001B6460(1);
        func_001B7A60(1);
        func_002646E0(arg0);
        break;
    }
    return 0;
}
