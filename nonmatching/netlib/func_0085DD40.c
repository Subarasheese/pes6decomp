/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern u32 func_00847FA0(void);
extern u16 func_002DCE70(u16);
extern u32 func_008469F0(void);
extern u16 func_002DCE40(u16);
M2C_UNK printf(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
s32 func_002DCDE0(s32);                             /* extern */
M2C_UNK func_00843D30(u32, void *, s8 *, M2C_UNK);  /* extern */
M2C_UNK func_00844100();                            /* extern */
s16 *func_00846DA0(s32, s32, void *, u16, void *);  /* extern */
s16 *func_00846F70(s32);                            /* extern */
void *func_00847280(s16);                           /* extern */
void *func_008472C0();                              /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_008472E0();                                /* extern */
extern char D_00889580[];

s32 func_0085DD40(M2C_UNK arg0, void *arg1, void *arg2) {
    s8 sp70;
    s8 sp71;
    s32 sp74;
    s16 sp78;
    s16 *temp_v0;
    s16 var_v0;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 var_s5;
    s8 *temp_s0;
    s8 *temp_v1;
    u16 temp_s2;
    u32 temp_v0_3;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_v0_2;
    void *var_s4;

    temp_s2 = M2C_FIELD(arg1, u16 *, 2);
    temp_s0 = &sp70 + 0x10;
    if (temp_s2 != func_008469F0()) {
        goto block_25;
    }
    if (func_002DCA40() != 0) {
        temp_s2_2 = M2C_FIELD(arg2, s32 *, 4);
        func_001C48E8(temp_s0, 0, 0x170);
        M2C_FIELD(&sp70, s16 *, 0x10) = 5;
        M2C_FIELD(temp_s0, s16 *, 4) = 1;
        temp_s4 = M2C_FIELD(arg1, s32 *, 0xC);
        if (temp_s4 == func_008472E0()) {
            temp_v0 = func_00846F70(temp_s2_2);
            if (temp_v0 == NULL) {
                if (func_00847280(0) != NULL) {
                    var_v0 = *func_00846DA0(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), arg1 + 0x1A, M2C_FIELD(arg1, u16 *, 2), arg2);
                    goto block_19;
                }
                M2C_FIELD(temp_s0, s16 *, 4) = 3;
                M2C_FIELD(temp_s0, s16 *, 6) = 0;
            } else {
                M2C_FIELD(temp_s0, s16 *, 4) = 2;
                var_v0 = *temp_v0;
block_19:
                M2C_FIELD(temp_s0, s16 *, 6) = var_v0;
            }
        } else {
            M2C_FIELD(temp_s0, s16 *, 4) = 4;
            M2C_FIELD(temp_s0, s16 *, 6) = 0;
            printf(((void *)D_00889580), func_002DCDE0(M2C_FIELD(arg2, s32 *, 4)), M2C_FIELD(arg1, s32 *, 0xC));
        }
        temp_v0_2 = func_00847280(*func_008472D0());
        M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
        M2C_FIELD(temp_v0_2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
        M2C_FIELD(temp_v0_2, u16 *, 0xE) = func_002DCE70(M2C_FIELD(arg1, u16 *, 0x18));
        var_s4 = func_008472C0();
        var_s5 = 0;
        do {
            func_001C8590(temp_s0 + (var_s5 << 5) + 8, var_s4 + 0x1C, 0x20);
            temp_s3 = temp_s0 + (var_s5 * 4);
            M2C_FIELD(temp_s3, s32 *, 0x108) = (s32) M2C_FIELD(var_s4, s32 *, 0x10);
            temp_s2_3 = temp_s0 + (var_s5 * 2);
            M2C_FIELD(temp_s2_3, u16 *, 0x128) = func_002DCE40(M2C_FIELD(var_s4, u16 *, 0xE));
            temp_v1 = &temp_s0[var_s5];
            var_s5 += 1;
            M2C_FIELD(temp_s2_3, s16 *, 0x138) = (s16) M2C_FIELD(var_s4, s16 *, 0);
            M2C_FIELD(temp_s3, s32 *, 0x148) = (s32) M2C_FIELD(var_s4, s32 *, 4);
            M2C_FIELD(temp_v1, u8 *, 0x168) = (u8) M2C_FIELD(var_s4, u8 *, 0x51);
            var_s4 += 0x88;
        } while (var_s5 < 4);
        temp_v0_3 = func_00847FA0();
        sp71 = 1;
        sp70 = (s8) M2C_FIELD(temp_s0, s16 *, 6);
        sp74 = 0;
        sp78 = 0x170;
        if (temp_v0_3 != -1U) {
            func_00843D30(temp_v0_3, arg2, &sp70, 0x180);
        }
        func_00844100();
block_25:
        return 0;
    }
    return -1;
}
