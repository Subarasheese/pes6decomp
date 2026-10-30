/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern s32 func_00333370(void);
extern s32 func_0030F140(void);
extern s32 func_003389D0(s32, s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003E1508[];
extern s8 D_003E9F08;
extern M2C_UNK func_00315570;
extern M2C_UNK func_00319010;
extern M2C_UNK func_00319240;

s32 func_003193D0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if ((func_003389D0((s32) arg0, 0) == 0) && (func_00333370() == 0) && (M2C_FIELD(temp_s0, u8 *, 6) == 0)) {
        if (M2C_FIELD(temp_s0, u8 *, 7) != 0) {
            if (func_00341910(1, 5, 0xA) == 0) {
                D_003E9F08 = 1;
                func_003389F0(arg0, 0, 1);
            } else {
                D_003E9F08 = 1;
                func_003387D0(arg0, (s32) &func_00319240);
            }
        } else {
            func_00338A60(func_00338AD0(0x8000002E, &func_00319010, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1508)), arg0);
            func_003389F0(arg0, 0, 1);
        }
    }
    if (func_0030F140() == 0) {
        return 0;
    }
    if ((M2C_FIELD(temp_s0, u8 *, 8) == 0) && (M2C_FIELD(temp_s0, u8 *, 6) == 0) && (M2C_FIELD(temp_s0, u8 *, 7) == 0)) {
        func_00338A60(func_00338AD0(0x8000002F, &func_00315570, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1508)), arg0);
    }
    func_003387D0(arg0, (s32) &func_00319240);
    return 1;
}
