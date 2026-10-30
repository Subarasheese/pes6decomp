/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
extern s32 func_00266730(void);
extern void func_001ED8F0(void *, s32);
extern void func_001D7F10(void *);
extern void func_00342BD0(s32);
extern void func_001EEDA0(void *, u8);
s32 func_001BEE60(void *, s32 *);                   /* extern */
M2C_UNK func_001BF780(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00342E30(u8, s32, u8);                 /* extern */
M2C_UNK func_00342F70();                            /* extern */
extern char D_00591BBA[];
extern char D_00591C09[];

void func_001BEF50(void *arg0) {
    s32 sp5C;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 var_s1;
    u8 temp_a0_4;
    u8 temp_a2;
    void *temp_a0;
    void *var_s0;

    sp5C = M2C_FIELD(arg0, s32 *, 0x28);
    var_s2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x70) - M2C_FIELD(arg0, s32 *, 0x78);
        if (var_v0 <= 0) {
            var_v0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x70) = var_v0;
        func_001ED8F0(M2C_FIELD(arg0, void **, 0x64), (s32) (u8) M2C_FIELD(arg0, s32 *, 0x70));
        if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
            func_00342BD0(M2C_FIELD(arg0, s32 *, 0x70));
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x44);
        if (temp_a0 != NULL) {
            func_001D6E40(temp_a0);
            M2C_FIELD(arg0, void **, 0x44) = NULL;
        }
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_001D7F10(M2C_FIELD(var_s0, void **, 0x34));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4U);
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        func_001C48E8(arg0 + 0x34, 0, 0x10);
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x5C);
        if (temp_a0_2 != 0) {
            func_001EDD90(temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        }
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x84);
    switch (temp_a0_3) {                            /* irregular */
    case 1:
        var_s2 = func_001BEE60(arg0, &sp5C);
        break;
    case 0:
        var_v1 = M2C_FIELD(arg0, s32 *, 0x6C);
        var_s2 = 0;
        var_s1_2 = 0;
        if (var_v1 == 0) {
            var_v1 = 0x20;
        }
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x70) - var_v1;
        if (var_v0_2 < 0) {
            var_v0_2 = 0;
            var_s1_2 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x70) = var_v0_2;
        func_001EEDA0(M2C_FIELD(arg0, void **, 0x68), var_v0_2 & 0xFF);
        if ((var_s1_2 != 0) || (temp_v1 = M2C_FIELD(arg0, s32 *, 0x7C) + 1, M2C_FIELD(arg0, s32 *, 0x7C) = temp_v1, ((temp_v1 < 0x41) == 0))) {
            var_s2 = 1;
        }
        break;
    }
    if (var_s2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 7;
        temp_s0 = ~M2C_FIELD(arg0, s32 *, 8) != 0;
        func_001BF780(arg0 + 0x64);
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x88);
        temp_a1 = (0 & 1) * 8;
        temp_a0_4 = (temp_a2 & ~8) | temp_a1;
        M2C_FIELD(arg0, u8 *, 0x88) = temp_a0_4;
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        M2C_FIELD(arg0, s8 *, 0x80) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s8 *, 0x18) = 0;
        if ((temp_s0 != 0) && ((func_00342E30(temp_a0_4, temp_a1, temp_a2), ((*(u8 *)D_00591BBA) == 0)) || ((*(u8 *)D_00591C09) == 7))) {
            func_00266730();
            func_00342F70();
        }
        M2C_FIELD(arg0, u8 *, 0x88) = (u8) ((M2C_FIELD(arg0, u8 *, 0x88) & ~4) | 4);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = sp5C;
}
