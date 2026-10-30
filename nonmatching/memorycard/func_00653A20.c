/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002E9250(void);
extern int func_00223BE0(void);
extern int func_00223BC0(void);
extern u32 func_00639E90(void);
extern void func_0021DAF0(void *);
extern u8 func_002E9230(s32);
extern void func_002E91B0(int);
s32 func_00623200(u32, s32, M2C_UNK *, M2C_UNK);    /* extern */
s32 func_006238E0(s32);                             /* extern */
M2C_UNK func_0063A900();                            /* extern */
M2C_UNK func_00653BC0(M2C_UNK, s32, s32);           /* extern */
extern s16 D_003EA258;
extern s16 D_003EA25A;
extern char D_0065C0E0[];
extern char D_0065E780[];
extern char D_0065E784[];

s32 func_00653A20(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    switch ((*(s32 *)D_0065E784)) {                           /* irregular */
    default:
        if (func_002E9250() & 0xFF) {
            var_s1 = 1;
            M2C_FIELD(((void *)D_0065E780), s8 *, 0x20) = 1;
        } else {
            func_0063A900();
            D_003EA258 = 0;
            M2C_FIELD(((void *)D_0065E780), s32 *, 4) = 1;
            D_003EA25A = 0;
        case 1:
            if (func_006238E0((s32) D_003EA258) != 0) {
                func_0063A900();
                if ((func_002E9230(0) & 0xFF) != 1) {
                    M2C_FIELD(((void *)D_0065E780), s32 *, 4) = 2;
                case 2:
                    temp_v0 = func_00623200(func_00639E90(), (s32) D_003EA258, ((void *)D_0065C0E0), 0);
                    if (temp_v0 != 0) {
                        var_s1 = 1;
                        if (temp_v0 != 1) {
                            M2C_FIELD(((void *)D_0065E780), s8 *, 0x20) = 1;
                            func_0021DAF0(((void *)D_0065C0E0));
                        } else {
                            func_0021DAF0(((void *)D_0065C0E0));
                            M2C_FIELD(((void *)D_0065E780), s32 *, 4) = 3;
                        case 3:
                            temp_s1 = func_00223BE0();
                            func_00653BC0(0, temp_s1, func_00223BC0());
                            func_002E91B0(0);
                            M2C_FIELD(((void *)D_0065E780), s8 *, 0x20) = 0;
                            var_s1 = 1;
                            M2C_FIELD(((void *)D_0065E780), s32 *, 4) = 0;
                        }
                    }
                } else {
                    M2C_FIELD(((void *)D_0065E780), s8 *, 0x20) = 1;
                    var_s1 = 1;
                }
            }
        }
        break;
    }
    if (var_s1 == 1) {
        M2C_FIELD(((void *)D_0065E780), s32 *, 4) = 0;
    }
    return var_s1;
}
