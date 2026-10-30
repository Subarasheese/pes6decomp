/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int func_003258F0(int, int);
extern s32 func_003389D0(s32, s32);
extern int func_00335370(void);
void *func_00325730(void *, s32);                   /* extern */
extern char D_00591C09[];

s32 func_0033BCC0(void *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_s0_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s3;
    u8 temp_s6;
    u8 temp_s6_2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;

    temp_s3 = M2C_FIELD(arg1, void **, 0x44);
    temp_s0 = func_003389D0(arg1, 0) & 0xFF;
    temp_s2 = func_003389D0(arg1, 1);
    if (M2C_FIELD(temp_s3, s32 *, 0) == 6) {
        temp_v1 = M2C_FIELD(temp_s3, s32 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 2:
            return 0;
        case 3:
            return 0;
        default:
            if ((*(u8 *)D_00591C09) != 0xE) {
                temp_v0 = func_00325730(temp_s3, func_003258F0((s32) temp_s3, temp_s0 & 0xFF) & 0xFFFF);
                if (temp_v0 == NULL) {
                    return 0;
                }
                if (M2C_FIELD(temp_s3, u8 *, 0x8FB) != 0) {
                    if (M2C_FIELD(temp_v0, u8 *, 0xE) == 0) {
                        temp_s0_2 = M2C_FIELD(temp_v0, s16 *, 4);
                        temp_v0_2 = ((temp_s0 & 0xFF) * 0x10) + (temp_s3 + 0x8F8);
                        temp_a0 = M2C_FIELD(temp_v0_2, s16 *, 0x148);
                        var_s3 = 0;
                        if ((temp_a0 == temp_s0_2) && (M2C_FIELD(temp_v0, u8 *, 0xC) != M2C_FIELD(temp_v0_2, u8 *, 0x150))) {
                            var_s3 = 1;
                        }
                        temp_s4 = temp_s0_2 < temp_a0;
                        if ((s32) M2C_FIELD(temp_v0, u8 *, 0xC) >= 0x10) {
                            return 0;
                        }
                        M2C_FIELD(func_00335370(), s32 *, 0x102C) = (s32) temp_s0_2;
                        temp_s6 = M2C_FIELD(temp_v0, u8 *, 0xC);
                        M2C_FIELD(func_00335370(), s32 *, 0x1028) = (s32) temp_s6;
                        temp_s6_2 = M2C_FIELD(temp_v0, u8 *, 0xC);
                        M2C_FIELD(func_00335370(), s32 *, 0x1024) = (s32) temp_s6_2;
                        Pes6BitSet_Write(arg0, 0x97, temp_s2 != 1);
                        Pes6BitSet_Write(arg0, 0x98, M2C_FIELD(temp_v0, u8 *, 0xC) != 0);
                        Pes6BitSet_Write(arg0, 0x99, temp_s0_2 == 1);
                        Pes6BitSet_Write(arg0, 0x9A, temp_s4);
                        Pes6BitSet_Write(arg0, 0x9B, var_s3);
                        Pes6BitSet_Write(arg0, 0x9C, temp_s0_2 == 2);
                        Pes6BitSet_Write(arg0, 0x9D, temp_s4);
                        Pes6BitSet_Write(arg0, 0x9E, var_s3);
                        Pes6BitSet_Write(arg0, 0x9F, temp_s0_2 == 3);
                        Pes6BitSet_Write(arg0, 0xA0, temp_s4);
                        Pes6BitSet_Write(arg0, 0xA1, var_s3);
                        Pes6BitSet_Write(arg0, 0xA2, temp_s0_2 == 4);
                        Pes6BitSet_Write(arg0, 0xA3, temp_s4);
                        Pes6BitSet_Write(arg0, 0xA4, var_s3);
                        Pes6BitSet_Write(arg0, 0xA5, temp_s0_2 == 5);
                        Pes6BitSet_Write(arg0, 0xA6, temp_s4);
                        Pes6BitSet_Write(arg0, 0xA7, var_s3);
                        Pes6BitSet_Write(arg0, 0xA8, temp_s0_2 == 0xF);
                        Pes6BitSet_Write(arg0, 0xA9, temp_s4);
                        Pes6BitSet_Write(arg0, 0xAA, var_s3);
                        Pes6BitSet_Write(arg0, 0xAB, temp_s0_2 == 0x10);
                        Pes6BitSet_Write(arg0, 0xAC, temp_s4);
                        Pes6BitSet_Write(arg0, 0xAD, var_s3);
                        Pes6BitSet_Write(arg0, 0xAE, temp_s0_2 == 0x11);
                        Pes6BitSet_Write(arg0, 0xAF, temp_s4);
                        Pes6BitSet_Write(arg0, 0xB0, var_s3);
                        Pes6BitSet_Write(arg0, 0xB1, temp_s0_2 == 0x12);
                        Pes6BitSet_Write(arg0, 0xB2, temp_s4);
                        Pes6BitSet_Write(arg0, 0xB3, var_s3);
                        Pes6BitSet_Write(arg0, 0xB4, temp_s0_2 == 0x13);
                        Pes6BitSet_Write(arg0, 0xB5, temp_s4);
                        Pes6BitSet_Write(arg0, 0xB6, var_s3);
                        Pes6BitSet_Write(arg0, 0xB7, temp_s0_2 == 0x14);
                        Pes6BitSet_Write(arg0, 0xB8, temp_s4);
                        Pes6BitSet_Write(arg0, 0xB9, var_s3);
                        Pes6BitSet_Write(arg0, 0xBA, (s32) M2C_FIELD(temp_v0, u8 *, 0xB));
                        Pes6BitSet_Write(arg0, 0x196, temp_s2 != 1);
                        return 1;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
    } else {
        return 0;
    }
}
