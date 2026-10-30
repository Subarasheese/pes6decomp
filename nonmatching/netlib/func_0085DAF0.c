/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern u16 func_002DCE70(u16);
extern s32 func_0084A790(s32);
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_008119A0(M2C_UNK);                     /* extern */
void *func_008472C0();                              /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00859020(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00884200(M2C_UNK);                     /* extern */
extern u16 D_003EA354;
extern char D_008B21C0[];

s32 func_0085DAF0(M2C_UNK arg0, void *arg1) {
    s16 temp_s0_2;
    s32 var_s2;
    s8 temp_v1_3;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1_2;
    void *var_s3;

    var_s3 = func_008472C0();
    if (func_002DCA40() == 0) {
        temp_v1 = M2C_FIELD(arg1, u16 *, 2);
        if ((s32) D_003EA354 < (s32) temp_v1) {
            D_003EA354 = temp_v1;
            var_s2 = 0;
            do {
                temp_s1 = arg1 + var_s2;
                temp_v1_2 = arg1 + (var_s2 * 4);
                temp_s0 = arg1 + (var_s2 * 2);
                M2C_FIELD(var_s3, s16 *, 0) = (s16) M2C_FIELD(temp_s1, s8 *, 0x138);
                M2C_FIELD(var_s3, s32 *, 4) = (s32) M2C_FIELD(temp_v1_2, s32 *, 0x140);
                M2C_FIELD(var_s3, s32 *, 8) = (s32) M2C_FIELD(temp_v1_2, s32 *, 0x108);
                M2C_FIELD(var_s3, s32 *, 0x10) = (s32) M2C_FIELD(temp_v1_2, s32 *, 0x108);
                M2C_FIELD(var_s3, u16 *, 0xE) = func_002DCE70(M2C_FIELD(temp_s0, u16 *, 0x128));
                M2C_FIELD(var_s3, s16 *, 0xC) = 0;
                M2C_FIELD(var_s3, u8 *, 0x51) = (u8) M2C_FIELD(temp_s1, u8 *, 0x160);
                M2C_FIELD(var_s3, u8 *, 0x52) = (u8) M2C_FIELD(temp_s1, u8 *, 0x168);
                M2C_FIELD(var_s3, s32 *, 0x40) = (s32) M2C_FIELD(temp_s0, s16 *, 0x178);
                temp_v1_3 = M2C_FIELD(temp_s1, s8 *, 0x170);
                M2C_FIELD(var_s3, s8 *, 0x50) = temp_v1_3;
                if (temp_v1_3 == 4) {
                    temp_s0_2 = M2C_FIELD(var_s3, s16 *, 0);
                    if (temp_s0_2 != *func_008472D0()) {
                        if (M2C_FIELD(var_s3, u8 *, 0x51) == 1) {
                            if (M2C_FIELD(func_008472D0(), u8 *, 2) != 1) {
                                func_0084A790(3);
                                func_00884200(5);
                            } else {
                                func_0084A790(1);
                            }
                        }
                    } else {
                        func_0084A790(1);
                    }
                }
                func_001C8590(var_s3 + 0x1C, arg1 + (var_s2 << 5) + 5, 0x20);
                var_s2 += 1;
                var_s3 += 0x88;
            } while (var_s2 < 8);
            if (M2C_FIELD(arg1, u8 *, 4) != 0) {
                func_008119A0(2);
            }
            func_00859020(((void *)D_008B21C0), 0);
            return 0;
        }
        return -1;
    }
    return -1;
}
