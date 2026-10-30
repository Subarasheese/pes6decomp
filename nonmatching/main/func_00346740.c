/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern s32 func_00310960(void);
extern s32 func_00333370(void);
extern int func_00310980(void);
extern s32 func_0030F140(void);
extern u32 func_00333620(s32, u8);
extern s32 func_0030F560(void);
extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_003486C0(void *);                          /* extern */
s32 func_009B4650();                                /* extern */
extern char D_003E61B0[];
extern M2C_UNK func_003463D0;
extern M2C_UNK func_003468C0;

s32 func_00346740(void *arg0) {
    s32 temp_s1;
    s32 var_v0;

    func_00333620(0xE, func_0030F140() != 0);
    if ((M2C_FIELD(arg0, s32 *, 0x2C) == 0) && (func_00333600(0xE) != 0) && (func_00333370() == 0) && (func_003486C0(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    }
    if ((func_00333600(0xE) != 0) && (M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        temp_s1 = func_00310960();
        var_v0 = temp_s1 - func_00310980();
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if ((var_v0 < 7) && (func_00333370() == 0) && (func_0030F140() != 0) && ((func_009B4650() & 0xFF) == 1)) {
            func_00338A60(func_00338AD0(0x8000001D, &func_003463D0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
        }
    }
    if (func_0030F560() != 0) {
        func_00333620(0xA, 0U);
        func_00333620(0xE, 0U);
        func_003387D0(arg0, (s32) &func_003468C0);
        return 1;
    }
    return 0;
}
