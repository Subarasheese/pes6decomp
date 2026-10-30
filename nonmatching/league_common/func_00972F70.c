/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001D6820(s32, s32);
extern void func_001EDA30(void *, s32);
extern s32 func_001D67E0(void *);
extern void func_001D67B0(void *);
extern void func_001ED840(void *, s8);
extern f32 func_001D79A0(void *, u16);
extern void * func_001E6E10(s32);
extern void func_001EF860(void *, void *);
extern void func_001ED880(void *, f32);
extern void func_001EEE60(void *, void *);
extern s32 func_001D7820(void *);
M2C_UNK func_001EE790(s32, s16 *);                  /* extern */
M2C_UNK func_001EEAC0(s32, void *, s32);            /* extern */
M2C_UNK func_001EF370(s32, s32 *);                  /* extern */
extern f32 D_003E7B1C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
void *func_00972F70(s32 arg0, u16 arg1, s32 arg2, void *arg3) {
    s16 sp80;
    s16 sp82;
    s16 sp84;
    s16 sp86;
    s16 sp88;
    s16 sp8A;
    s16 sp8C;
    s16 sp8E;
    s32 sp90;
    s32 sp94;
    f32 sp98;
    f32 sp9C;
    s8 spA0;
    f32 spBC;
    f32 temp_f20;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f0_4;
    s32 temp_s0;
    s32 var_v0;
    s8 *var_v1;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 0x10;
    var_v1 = &spA0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    spBC = D_003E7B1C;
    temp_v0_2 = func_001E6E10(arg2);
    if (temp_v0_2 != NULL) {
        temp_v0 = func_001D6820(arg0, arg1 & 0xFFFF);
        if (temp_v0 != NULL) {
            temp_s5 = M2C_FIELD(temp_v0, void **, 0xC);
            func_001EDA30(temp_s5, 3);
            temp_f20 = func_001D79A0((void *) arg0, arg1);
            func_001ED840(temp_s5, func_001D7820((void *) arg0) & 0xFF);
            func_001ED880(temp_s5, temp_f20);
            temp_s0 = func_001D67E0(temp_v0);
            if (temp_v0 == NULL) {
                func_001D67B0(temp_v0);
                return NULL;
            }
            sp90 = 0;
            sp94 = 0;
            sp98 = M2C_FIELD(arg3, f32 *, 8);
            sp9C = M2C_FIELD(arg3, f32 *, 0xC);
            func_001EF900((void *) temp_s0, 1);
            func_001EF860((void *) temp_s0, &spA0);
            func_001EF370(temp_s0, &sp90);
            func_001EEE60((void *) temp_s0, &spBC);
            temp_f0 = (s32) M2C_FIELD(arg3, f32 *, 0);
            sp80 = (s16) temp_f0;
            temp_f0_2 = (s32) M2C_FIELD(arg3, f32 *, 4);
            sp82 = (s16) temp_f0_2;
            sp86 = (s16) temp_f0_2;
            sp88 = (s16) temp_f0;
            temp_f0_3 = (s32) ((f32) ((s64) ((s64) temp_f0 << 0x30) >> 0x30) + M2C_FIELD(arg3, f32 *, 8));
            sp84 = (s16) temp_f0_3;
            sp8C = (s16) temp_f0_3;
            temp_f0_4 = (s32) ((f32) ((s64) ((s64) temp_f0_2 << 0x30) >> 0x30) + M2C_FIELD(arg3, f32 *, 0xC));
            sp8A = (s16) temp_f0_4;
            sp8E = (s16) temp_f0_4;
            func_001EEAC0(temp_s0, temp_v0_2, temp_f0);
            func_001EE790(temp_s0, &sp80);
            return temp_v0;
        }
        return NULL;
    }
    return NULL;
}
