/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
extern u32 func_00B447A0(void);
extern s32 func_00B445F0(s32, s32);
M2C_UNK func_002F46F0(s32, M2C_UNK *);              /* extern */
s32 func_002F4E90(M2C_UNK);                         /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(u16);                             /* extern */
M2C_UNK func_0095EA70(M2C_UNK);                     /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00B3DD20(s32, s32);                    /* extern */
M2C_UNK func_00B3E440(u8);                          /* extern */
M2C_UNK func_00B3E5F0(u8);                          /* extern */
M2C_UNK func_00B3EA20(s32, u8);                     /* extern */
M2C_UNK func_00B3EC90(s32, u8);                     /* extern */
M2C_UNK func_00B3EF00(s32, u8);                     /* extern */
M2C_UNK func_00B3F070(s32, u8);                     /* extern */
M2C_UNK func_00B3F260(s32);                         /* extern */
M2C_UNK func_00B3F910();                            /* extern */
extern char D_00B800E0[];

void func_00B40030(void) {
    s32 temp_s2;
    s32 temp_v0_3;
    s32 var_s2;
    u16 temp_a0;
    u16 temp_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_6;
    u32 var_s1;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x1033F);
        M2C_FIELD(temp_v0, void **, 4) = func_001D5A10(0x10344);
        func_00B3F910();
        temp_v0_2 = func_00B447A0();
        if ((temp_v0_2 != 0) && (M2C_FIELD(temp_v0_2, s32 *, 0x6C4) == 0)) {
            temp_v0_3 = func_002F4E90(0x17);
            M2C_FIELD(temp_v0_2, s32 *, 0x6C4) = temp_v0_3;
            func_002F46F0(temp_v0_3, ((void *)D_00B800E0));
        }
        func_00B3F260(M2C_FIELD(temp_v0, s32 *, 0x6B4));
        func_00B3EA20(M2C_FIELD(temp_v0, s32 *, 0x6B4), M2C_FIELD(temp_v0, u8 *, 0x610));
        func_00B3F070(M2C_FIELD(temp_v0, s32 *, 0x6B4), M2C_FIELD(temp_v0, u8 *, 0x60C));
        temp_s3 = func_00B445F0((s32) M2C_FIELD(temp_v0, u8 *, 0x610), (s32) M2C_FIELD(temp_v0, u8 *, 0x60C)) & 0xFFFF;
        temp_v0_4 = func_00B447A0();
        if (temp_v0_4 != 0) {
            temp_v0_5 = func_00B447A0();
            if (temp_v0_5 != 0) {
                M2C_FIELD(temp_v0_5, u16 *, 8) = temp_s3;
            }
            temp_s2 = temp_s3 & 0xFFFF;
            if (temp_s2 != 0xFFFF) {
                func_009737E0(M2C_FIELD(temp_v0_4, s32 *, 0x1C), 4, func_0095C4A0(temp_s3));
                func_009737C0(M2C_FIELD(temp_v0_4, s32 *, 0x1C), 1);
                func_00956A80(M2C_FIELD(temp_v0_4, s32 *, 0x20), 1);
                func_00956A90(M2C_FIELD(temp_v0_4, s32 *, 0x20), 4, temp_s2, 0);
            } else {
                func_009737C0(M2C_FIELD(temp_v0_4, s32 *, 0x1C), 0);
                func_00956A80(M2C_FIELD(temp_v0_4, s32 *, 0x20), 0);
            }
        }
        func_00B3E5F0(M2C_FIELD(temp_v0, u8 *, 0x612));
        func_00B3E440(M2C_FIELD(temp_v0, u8 *, 0x612));
        temp_v0_6 = func_00B447A0();
        if (temp_v0_6 != 0) {
            var_s1 = temp_v0_6;
            var_s2 = 0;
            do {
                temp_a0 = M2C_FIELD(var_s1, u16 *, 0x6A0);
                if (temp_a0 != 0xFFFF) {
                    func_0095C4A0(temp_a0);
                }
                var_s2 += 1;
                var_s1 += 2;
            } while (var_s2 < 8);
        }
        func_00B3EF00(M2C_FIELD(temp_v0, s32 *, 0x6B4), M2C_FIELD(temp_v0, u8 *, 0x60E));
        func_00B3EC90(M2C_FIELD(temp_v0, s32 *, 0x6B4), M2C_FIELD(temp_v0, u8 *, 0x60F));
        func_00B3F070(M2C_FIELD(temp_v0, s32 *, 0x6B8), M2C_FIELD(temp_v0, u8 *, 0x60D));
        func_00B3DD20(M2C_FIELD(temp_v0, s32 *, 0x6B4), M2C_FIELD(temp_v0, s32 *, 0x6B8));
        func_00B3EA20(M2C_FIELD(temp_v0, s32 *, 0x6B8), M2C_FIELD(temp_v0, u8 *, 0x610));
        func_0095EA70(0x21001A);
    }
}
