/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208210(s32);
extern void * func_00B2A420(u32);
extern s32 func_001A5F20(s32);
extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_00B347F0(void **, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char D_00591E14[];
extern char Pes6MatchSquads[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_00CBBE08[];
extern char D_00CBBE09[];

void func_00B72050(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    u8 temp_a3;
    u8 temp_v1;
    void **temp_s2;
    void **var_s1;
    void **var_s1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v1_2;

    var_s3 = 0;
    if (func_00208210(func_001A5F20(5)) != 0xB3) {
        if (func_00208210(func_001A5F20(5)) != 0xB4) {
            temp_v0 = func_00B2A420((u32) (*(u8 *)D_00CBBE04));
            temp_a0 = M2C_FIELD(temp_v0, void **, 0);
            temp_v1 = M2C_FIELD(temp_a0, u8 *, 0);
            if ((temp_v1 == 1) || (temp_v1 == 0xC)) {
                M2C_FIELD(temp_a0, u8 *, 0x13) = (u8) M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), u8 *, 0x13);
            }
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), s8 *, 0x2C) = 1;
            func_001A58E0(*M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), 1);
            func_00209A00(M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), func_00BB1310(0x13E) & 0xFFFF, 0);
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s8 *, 0x66) = 0xFF;
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s16 *, 0x26) = 0x8000;
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s8 *, 0x16) = 0x4A;
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s16 *, 0x18) = 0xB;
            (*(u8 *)D_00CBBE09) = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u8 *, 0);
            var_s1 = func_00B2A420(1U);
            var_s0 = 0;
            do {
                temp_a0_2 = M2C_FIELD(temp_v0, void **, 0);
                temp_v1_2 = *var_s1;
                if ((M2C_FIELD(temp_v1_2, u8 *, 0x13) != M2C_FIELD(temp_a0_2, u8 *, 0x13)) && (M2C_FIELD(temp_v1_2, u8 *, 0) != M2C_FIELD(temp_a0_2, u8 *, 0))) {
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 0;
                    func_001A58E0(*M2C_FIELD(*var_s1, void ***, 4), 0);
                } else if ((M2C_FIELD(((M2C_FIELD(temp_v1_2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1_2, u8 *, 0x12) * 0x6900))), u8 *, 0xD4) != 0) && (temp_a3 = M2C_FIELD(temp_v1_2, u8 *, 0), (temp_a3 != 1)) && (temp_a3 != 0xC) && (temp_a3 != M2C_FIELD(temp_a0_2, u8 *, 0)) && (var_s3 < 2)) {
                    switch (var_s3) {               /* irregular */
                    case 0:
                        M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                        M2C_FIELD(M2C_FIELD(*var_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), u8 *, 0x2D);
                        func_001A58E0(*M2C_FIELD(*var_s1, void ***, 4), 1);
                        func_00209A00(M2C_FIELD(*var_s1, void ***, 4), func_00BB1310(0x13F) & 0xFFFF, 0);
                        func_00B347F0(var_s1, temp_v0, 0, 0, 0x3FA5A1CB, 0xBFDF3B64);
                        var_s3 += 1;
                        M2C_FIELD(*var_s1, s8 *, 0x66) = 0xFF;
                        M2C_FIELD(*var_s1, s8 *, 0x16) = 0x4A;
                        M2C_FIELD(*var_s1, s16 *, 0x18) = 0xB;
                        break;
                    case 1:
                        M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                        M2C_FIELD(M2C_FIELD(*var_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), u8 *, 0x2D);
                        func_001A58E0(*M2C_FIELD(*var_s1, void ***, 4), 1);
                        func_00209A00(M2C_FIELD(*var_s1, void ***, 4), func_00BB1310(0x140) & 0xFFFF, 0);
                        func_00B347F0(var_s1, temp_v0, 0, 0, 0xBFEFBE77, 0xC0AC49BA);
                        var_s3 += 1;
                        M2C_FIELD(*var_s1, s8 *, 0x66) = 0xFF;
                        M2C_FIELD(*var_s1, s8 *, 0x16) = 0x4A;
                        M2C_FIELD(*var_s1, s16 *, 0x18) = 0xB;
                        break;
                    }
                } else if (M2C_FIELD(temp_v1_2, u8 *, 0) != M2C_FIELD(temp_a0_2, u8 *, 0)) {
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 0;
                    func_001A58E0(*M2C_FIELD(*var_s1, void ***, 4), 0);
                }
                var_s0 += 1;
                var_s1 += 8;
            } while (var_s0 < 0x16);
        } else {
            goto block_3;
        }
    } else {
block_3:
        temp_s2 = func_00B2A420((u32) (*(u8 *)D_00CBBE05));
        var_s1_2 = func_00B2A420(1U);
        var_s0_2 = 0;
        do {
            temp_a0_3 = *var_s1_2;
            if (M2C_FIELD(temp_a0_3, u8 *, 0) != M2C_FIELD(*temp_s2, u8 *, 0)) {
                M2C_FIELD(M2C_FIELD(temp_a0_3, void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(*var_s1_2, void ***, 4), 0);
            }
            var_s0_2 += 1;
            var_s1_2 += 8;
        } while (var_s0_2 < 0x16);
        M2C_FIELD(M2C_FIELD(*temp_s2, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s2, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s2, void ***, 4), func_00BB1310(0x141) & 0xFFFF, 0);
        M2C_FIELD(*temp_s2, s8 *, 0x66) = 0xFF;
        M2C_FIELD(*temp_s2, s8 *, 0x16) = 0x4A;
        M2C_FIELD(*temp_s2, s16 *, 0x18) = 0xB;
        (*(u8 *)D_00CBBE09) = M2C_FIELD(*temp_s2, u8 *, 0);
    }
    (*(s32 *)D_00591E14) = 0;
    (*(u8 *)D_00CBBE08) += 1;
}
