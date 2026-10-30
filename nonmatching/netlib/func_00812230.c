/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002DCDE0(s32);                             /* extern */
M2C_UNK func_00811A80(M2C_UNK, void *);             /* extern */
s32 func_008225B0();                                /* extern */
s32 func_00822870();                                /* extern */
s32 func_00828160();                                /* extern */
void *func_00836ED0(s32);                           /* extern */
s32 func_00840680(s32);                             /* extern */
s32 *func_00840AA0(s32);                            /* extern */
M2C_UNK func_00846A00(s32, s32);                    /* extern */
M2C_UNK func_00846BB0(s32, s32);                    /* extern */
M2C_UNK func_00846D60(u16);                         /* extern */
M2C_UNK func_00846D70(u16);                         /* extern */
M2C_UNK func_008472F0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_00847360(M2C_UNK *);                   /* extern */
M2C_UNK func_00857F50();                            /* extern */
void *func_008580D0();                              /* extern */
extern M2C_UNK func_008118A0;
extern M2C_UNK func_0085CE40;
extern M2C_UNK func_0085CEC0;

s32 func_00812230(void *arg0) {
    s32 sp6C;
    s32 *temp_v0;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s8 temp_v1;
    u16 var_s3;
    void *temp_s1;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s8 *, 3) != 0) {
        var_s2 = 0;
        var_s3 = 0;
        temp_s1 = func_008580D0();
        func_00857F50();
        var_s4 = 0;
        do {
            if (func_00840680(var_s4) & 0xFF) {
                var_s2 = var_s4;
            }
            var_s4 += 1;
        } while (var_s4 < 8);
        func_00846D70(M2C_FIELD(temp_s1, u16 *, 0x14));
        temp_v1 = M2C_FIELD(arg0, s8 *, 1);
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_00846BB0(0, func_008225B0());
            func_00847360(&func_008118A0);
            func_008472F0(&func_0085CE40, &func_0085CEC0);
            temp_s1_2 = func_00828160();
            func_00846A00(temp_s1_2, func_00822870());
            break;
        case 0:
        case 2:
            temp_v0 = func_00840AA0(var_s2);
            if (temp_v0 != NULL) {
                var_s2_2 = 0;
loop_17:
                if (var_s2_2 < 8) {
                    temp_v0_2 = func_00836ED0(var_s2_2);
                    if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, s32 *, 0) == *temp_v0)) {
                        var_s3 = M2C_FIELD(temp_v0_2, u16 *, 0x18);
                        sp6C = M2C_FIELD(temp_v0_2, s32 *, 0x14);
                    } else {
                        var_s3 = 0xE4A;
                        sp6C = -1;
                        var_s2_2 += 1;
                        goto loop_17;
                    }
                }
            } else {
                var_s3 = 0xE4A;
                sp6C = -1;
            }
            func_00846D60(var_s3);
            temp_s1_3 = func_002DCDE0(sp6C);
            func_00846BB0(temp_s1_3, func_008225B0());
            func_002DCDE0(sp6C);
            func_008472F0(&func_0085CE40, &func_0085CEC0);
            break;
        }
    }
    func_00811A80(3, arg0);
    return 0;
}
