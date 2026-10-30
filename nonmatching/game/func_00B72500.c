/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208210(s32);
extern void * func_00B2A420(u32);
extern s32 func_001A5F20(s32);
extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char D_00591E14[];
extern char Pes6MatchSquads[];
extern char D_00CBBE00[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_00CBBE08[];
extern char D_00CBBE09[];

void func_00B72500(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    u8 temp_a3;
    u8 temp_a3_2;
    void **temp_v0;
    void **temp_v0_2;
    void **var_s2;
    void **var_s2_2;
    void **var_s3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;

    var_s0 = 0;
    if (func_00208210(func_001A5F20(5)) != 0xB3) {
        if ((*(u8 *)D_00CBBE00) == 1) {
            var_s3 = func_00B2A420((u32) (*(u8 *)D_00CBBE04));
        } else {
            temp_v0 = func_00B2A420((u32) (*(u8 *)D_00CBBE05));
            var_s3 = temp_v0;
            M2C_FIELD(*temp_v0, u8 *, 0x13) = (u8) M2C_FIELD(*temp_v0, u8 *, 0x13);
        }
        M2C_FIELD(M2C_FIELD(*var_s3, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*var_s3, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*var_s3, void ***, 4), func_00BB1310(0x14C) & 0xFFFF, 0);
        M2C_FIELD(*var_s3, s8 *, 0x66) = 0xFF;
        M2C_FIELD(*var_s3, s8 *, 0x16) = 0x4A;
        M2C_FIELD(*var_s3, s16 *, 0x18) = 0xB;
        (*(u8 *)D_00CBBE09) = M2C_FIELD(*var_s3, u8 *, 0);
        var_s2 = func_00B2A420(1U);
        var_s1 = 0;
        do {
            temp_a0 = *var_s3;
            temp_v1 = *var_s2;
            if ((M2C_FIELD(temp_v1, u8 *, 0x13) != M2C_FIELD(temp_a0, u8 *, 0x13)) && (M2C_FIELD(temp_v1, u8 *, 0) != M2C_FIELD(temp_a0, u8 *, 0))) {
                M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 0);
            } else if ((M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900))), u8 *, 0xD4) != 0) && (temp_a3 = M2C_FIELD(temp_v1, u8 *, 0), (temp_a3 != 1)) && (temp_a3 != 0xC) && (temp_a3 != M2C_FIELD(temp_a0, u8 *, 0)) && (var_s0 < 4)) {
                switch (var_s0) {                   /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*var_s3, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2, void ***, 4), func_00BB1310(0x14D) & 0xFFFF, 0);
                    func_00B347F0(var_s2, var_s3, 0xB4, 0, 0x3EFCED91, 0x3F641893);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2, s16 *, 0x18) = 0xB;
                    break;
                case 3:                             /* switch 1 */
                    M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*var_s3, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2, void ***, 4), func_00BB1310(0x150) & 0xFFFF, 0);
                    func_00B347F0(var_s2, var_s3, 0xB4, 0, 0x3E978D50, 0x418349BA);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2, s16 *, 0x18) = 0xB;
                    break;
                case 1:                             /* switch 1 */
                    M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*var_s3, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2, void ***, 4), func_00BB1310(0x14E) & 0xFFFF, 0);
                    func_00B347F0(var_s2, var_s3, 0xB4, 0, 0xBF48F5C3, 0x3ED4FDF4);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2, s16 *, 0x18) = 0xB;
                    break;
                case 2:                             /* switch 1 */
                    M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*var_s3, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2, void ***, 4), func_00BB1310(0x14F) & 0xFFFF, 0);
                    func_00B347F0(var_s2, var_s3, 0xB4, 0, 0x3E25E354, 0x407E76C9);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2, s16 *, 0x18) = 0xB;
                    break;
                }
            } else if (M2C_FIELD(temp_v1, u8 *, 0) != M2C_FIELD(temp_a0, u8 *, 0)) {
                M2C_FIELD(M2C_FIELD(temp_v1, void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(*var_s2, void ***, 4), 0);
            }
            var_s1 += 1;
            var_s2 += 8;
        } while (var_s1 < 0x16);
    } else {
        temp_v0_2 = func_00B2A420((u32) (*(u8 *)D_00CBBE04));
        M2C_FIELD(M2C_FIELD(*temp_v0_2, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_v0_2, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_v0_2, void ***, 4), func_00BB1310(0x147) & 0xFFFF, 0);
        M2C_FIELD(*temp_v0_2, s8 *, 0x66) = 0xFF;
        M2C_FIELD(*temp_v0_2, s8 *, 0x16) = 0x4A;
        M2C_FIELD(*temp_v0_2, s16 *, 0x18) = 0xB;
        (*(u8 *)D_00CBBE09) = M2C_FIELD(*temp_v0_2, u8 *, 0);
        var_s2_2 = func_00B2A420(1U);
        var_s1_2 = 0;
        do {
            temp_a0_2 = *temp_v0_2;
            temp_v1_2 = *var_s2_2;
            if ((M2C_FIELD(temp_v1_2, u8 *, 0x13) != M2C_FIELD(temp_a0_2, u8 *, 0x13)) && (M2C_FIELD(temp_v1_2, u8 *, 0) != M2C_FIELD(temp_a0_2, u8 *, 0))) {
                M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 0);
            } else if ((M2C_FIELD(((M2C_FIELD(temp_v1_2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1_2, u8 *, 0x12) * 0x6900))), u8 *, 0xD4) != 0) && (temp_a3_2 = M2C_FIELD(temp_v1_2, u8 *, 0), (temp_a3_2 != 1)) && (temp_a3_2 != 0xC) && (temp_a3_2 != M2C_FIELD(temp_a0_2, u8 *, 0)) && (var_s0 < 4)) {
                switch (var_s0) {                   /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2_2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_v0_2, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2_2, void ***, 4), func_00BB1310(0x148) & 0xFFFF, 0);
                    func_00B347F0(var_s2_2, temp_v0_2, 0xB4, 0, 0xBCE56042, 0x3F589375);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2_2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2_2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2_2, s16 *, 0x18) = 0xB;
                    break;
                case 3:                             /* switch 2 */
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2_2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_v0_2, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2_2, void ***, 4), func_00BB1310(0x14B) & 0xFFFF, 0);
                    func_00B347F0(var_s2_2, temp_v0_2, 0xB4, 0, 0x40048B44, 0xBF956042);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2_2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2_2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2_2, s16 *, 0x18) = 0xB;
                    break;
                case 1:                             /* switch 2 */
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2_2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_v0_2, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2_2, void ***, 4), func_00BB1310(0x149) & 0xFFFF, 0);
                    func_00B347F0(var_s2_2, temp_v0_2, 0xB4, 0, 0x3FA020C5, 0xBE0C49BA);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2_2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2_2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2_2, s16 *, 0x18) = 0xB;
                    break;
                case 2:                             /* switch 2 */
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 1;
                    M2C_FIELD(M2C_FIELD(*var_s2_2, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_v0_2, void ***, 4), u8 *, 0x2D);
                    func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 1);
                    func_00209A00(M2C_FIELD(*var_s2_2, void ***, 4), func_00BB1310(0x14A) & 0xFFFF, 0);
                    func_00B347F0(var_s2_2, temp_v0_2, 0xAA, 0, 0xBFB81062, 0xBE072B02);
                    var_s0 += 1;
                    M2C_FIELD(*var_s2_2, s8 *, 0x66) = 0xFF;
                    M2C_FIELD(*var_s2_2, s8 *, 0x16) = 0x4A;
                    M2C_FIELD(*var_s2_2, s16 *, 0x18) = 0xB;
                    break;
                }
            } else if (M2C_FIELD(temp_v1_2, u8 *, 0) != M2C_FIELD(temp_a0_2, u8 *, 0)) {
                M2C_FIELD(M2C_FIELD(temp_v1_2, void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(*var_s2_2, void ***, 4), 0);
            }
            var_s1_2 += 1;
            var_s2_2 += 8;
        } while (var_s1_2 < 0x16);
    }
    (*(s32 *)D_00591E14) = 0;
    (*(u8 *)D_00CBBE08) += 1;
}
