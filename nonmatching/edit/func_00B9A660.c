/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002210F0(u8);                              /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002D78E0(s32);                             /* extern */
s32 func_00B94DF0(u8);                              /* extern */
void *func_00B9C490();                              /* extern */
M2C_UNK func_00BC6B70(u8);                          /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
extern char D_00CE3F28[];
extern char D_00CE3F2C[];
extern char D_00CE3F30[];
extern char D_00CE3F31[];

s32 func_00B9A660(void) {
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_s2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_5;

    temp_v0 = func_00B9C490();
    temp_s0 = M2C_FIELD(temp_v0, s32 *, 0x30);
    temp_s1 = temp_v0;
    var_s2 = 0;
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(0x80) == 0) {
                if (func_00BCF3A0(0x400) != 0) {
                    func_0026E840(0x8400F803);
                    do {
                        temp_v0_2 = M2C_FIELD(temp_s1, s32 *, 0x34) + 1;
                        temp_hi = temp_v0_2 % temp_s0;
                        M2C_FIELD(temp_s1, s32 *, 0x34) = temp_v0_2;
                        M2C_FIELD(temp_s1, s32 *, 0x34) = temp_hi;
                    } while (func_002D78E0(temp_hi) != 0);
                    temp_v0_3 = func_00B9C490();
                    (*(s8 *)D_00CE3F31) = 1;
                    (*(u8 *)D_00CE3F30) = (u8) M2C_FIELD(temp_v0_3, s32 *, 0x34);
                    (*(s32 *)D_00CE3F28) = func_00B94DF0((*(u8 *)D_00CE3F30));
                    (*(s32 *)D_00CE3F2C) = func_002210F0((*(u8 *)D_00CE3F30));
                    func_00BC6B70((*(u8 *)D_00CE3F30));
                }
            } else {
                func_0026E840(0x8400F803);
                do {
                    temp_v0_4 = M2C_FIELD(temp_s1, s32 *, 0x34) + (temp_s0 - 1);
                    temp_hi_2 = temp_v0_4 % temp_s0;
                    M2C_FIELD(temp_s1, s32 *, 0x34) = temp_v0_4;
                    M2C_FIELD(temp_s1, s32 *, 0x34) = temp_hi_2;
                } while (func_002D78E0(temp_hi_2) != 0);
                temp_v0_5 = func_00B9C490();
                (*(s8 *)D_00CE3F31) = 1;
                (*(u8 *)D_00CE3F30) = (u8) M2C_FIELD(temp_v0_5, s32 *, 0x34);
                (*(s32 *)D_00CE3F28) = func_00B94DF0((*(u8 *)D_00CE3F30));
                (*(s32 *)D_00CE3F2C) = func_002210F0((*(u8 *)D_00CE3F30));
                func_00BC6B70((*(u8 *)D_00CE3F30));
            }
        } else {
            func_0026E840(0x84008401);
            var_s2 = 2;
        }
    } else if ((M2C_FIELD(temp_s1, s32 *, 0x14) != 0) || (M2C_FIELD(temp_s1, s32 *, 0x20) != 2)) {
        func_0026E840(0x84028400);
        var_s2 = 1;
    }
    return var_s2;
}
