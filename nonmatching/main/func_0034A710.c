/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern s32 func_00338720(void *, s32);
extern int func_0030F380(void);
extern s32 func_00341260(void *);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003E6228[];
extern M2C_UNK func_00336490;
extern M2C_UNK func_00349D90;
extern M2C_UNK func_0034A5F0;

s32 func_0034A710(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    temp_a0 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_a0, s8 *, 9) = 0;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *, void *), 4)(temp_a0, temp_s0);
    if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
        return 0;
    }
    if (func_0030F380() != 0) {
        temp_s2 = func_00333600(0xA);
        temp_s2_2 = temp_s2 | func_00333600(6);
        if ((func_00333600(5) | temp_s2_2) == 0) {
            if ((func_00341910(1, 5, 0xA) != 0) && (func_00341260(temp_s0 + 0xB4) != 0)) {
                temp_v0 = func_00338AD0(0x80000017, &func_00336490, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E6228));
                func_00338A60(temp_v0, arg0);
                func_003389F0(temp_v0, 2, M2C_FIELD(temp_s0, s32 *, 0x8C));
                func_003389F0(temp_v0, 3, 0);
            } else {
                temp_v0_2 = func_00338AD0(0x80000017, &func_00349D90, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E6228));
                func_003389F0(temp_v0_2, 2, M2C_FIELD(temp_s0, s32 *, 0x8C));
                func_00338720(temp_v0_2, 5);
                func_00338A60(temp_v0_2, arg0);
            }
            func_003387D0(arg0, (s32) &func_0034A5F0);
            return 1;
        }
        return 0;
    }
    return 0;
}
