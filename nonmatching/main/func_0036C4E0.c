/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F2B0(void *);
extern int func_00333600(int);
extern s32 func_00325C20(s32);
extern s32 func_00338A20(void *, s32, s32);
extern s64 func_0030DA70(s32);
extern int func_0030E830(void);
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
s16 func_0030DAF0(M2C_UNK);                         /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00369250(s8 *, s32);                       /* extern */
u8 func_00BC8BC0();                                 /* extern */
extern char D_003E70F0[];
extern char D_0061EEB0[];
extern char D_0061EEB1[];
extern char D_0061EEB4[];
extern char D_0061EEB5[];
extern char D_0061EEB6[];
extern char D_0061EEBC[];
extern char D_0061EEBE[];
extern char D_0061EEC0[];
extern char D_0061EEC2[];
extern char D_00CBD390[];
extern M2C_UNK func_0036C410;

s32 func_0036C4E0(s32 arg0, s32 arg1, s8 arg2) {
    s32 sp5C;
    s8 temp_s0;
    void *temp_v0;

    if ((*(s32 *)D_00CBD390) == 0) {
        return 0;
    }
    if (func_00333600(0x16) == 0) {
        if (func_00341910(1, 5, 0xA) != 0) {
            func_0030F2B0(&sp5C);
            temp_s0 = func_0030E830() & 0xFF;
            switch (temp_s0) {                      /* irregular */
            case 2:
                if (sp5C == 2) {
                    return 0;
                }
            default:
block_20:
                func_001C48E8(((void *)D_0061EEB0), 0, 0x54);
                (*(s8 *)D_0061EEB0) = temp_s0;
                (*(s8 *)D_0061EEB1) = 0xFF;
                (*(u8 *)D_0061EEB4) = func_00BC8BC0();
                (*(s16 *)D_0061EEBC) = func_0030DAF0(0);
                (*(s16 *)D_0061EEBE) = func_0030DAF0(1);
                (*(s16 *)D_0061EEC0) = func_0030DA70(0);
                (*(s16 *)D_0061EEC2) = func_0030DA70(1);
                (*(s8 *)D_0061EEB6) = arg2;
                if (func_00325C20(arg1) != 0) {
                    (*(s8 *)D_0061EEB5) = 1;
                } else {
                    (*(s8 *)D_0061EEB5) = 0;
                }
                if ((s32) (*(u8 *)D_0061EEB4) < 2) {
                    return 0;
                }
                if (func_00369250(((void *)D_0061EEB0), arg0) == 0) {
                    return 0;
                }
                temp_v0 = func_00338AD0(0x3B, &func_0036C410, 3, ((void *)D_003E70F0));
                func_00338A20(temp_v0, (s32) ((void *)D_0061EEB0), 0);
                func_00338A20(temp_v0, arg0, 1);
                return 1;
            case 1:
            case 3:
                if ((u32) (sp5C - 1) < 2U) {
                    return 0;
                }
                goto block_20;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
