/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F27D0(void *, s8);
extern void func_001F2770(void *, f32);
extern s32 func_001F3D10(s32, u8);
extern void * func_001F1F10(void);
extern void func_001F0A60(void *, s8);
extern void func_001F3C80(void *, f32);
extern void func_001F0A40(void *, s8);
void *func_001F0AF0(void *);                        /* extern */
M2C_UNK func_001F2530(void *, M2C_UNK, s32 *);      /* extern */
void *func_001F2880(void *);                        /* extern */
M2C_UNK func_001F3D80(void *, s32 *, void *);       /* extern */
extern char D_003D2A60[];

s32 func_00820CB0(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp38;
    s32 sp3C;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (arg0 == NULL) {
        return 1;
    }
    temp_v0 = func_001F1F10();
    M2C_FIELD(arg0, void **, 0) = temp_v0;
    if (temp_v0 == NULL) {
        return 1;
    }
    func_001F3D10((s32) temp_v0, 1U);
    func_001F3C80(M2C_FIELD(arg0, void **, 0), 0.0f);
    sp20 = 0;
    sp24 = 0;
    sp28 = 0;
    sp2C = 0;
    func_001F3D80(M2C_FIELD(arg0, void **, 0), &sp20, NULL);
    temp_v0_2 = func_001F0AF0(M2C_FIELD(arg0, void **, 0));
    M2C_FIELD(arg0, void **, 4) = temp_v0_2;
    if (temp_v0_2 == NULL) {
        return 1;
    }
    sp20 = 0;
    sp24 = 0;
    sp28 = 0;
    sp2C = 0;
    func_001F0A60(temp_v0_2, 1);
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    func_001F3D80(temp_a0, &sp20, ((void *)D_003D2A60) + (M2C_FIELD(temp_a0, u8 *, 0x48) * 8));
    func_001F3D10((s32) M2C_FIELD(arg0, void **, 4), 1U);
    func_001F0A40(M2C_FIELD(arg0, void **, 4), 0);
    func_001F3C80(M2C_FIELD(arg0, void **, 4), 0.0f);
    temp_v0_3 = func_001F2880(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(arg0, void **, 8) = temp_v0_3;
    if (temp_v0_3 == NULL) {
        return 1;
    }
    sp20 = 0;
    sp28 = 0x41000000;
    sp24 = 0;
    sp2C = 0;
    func_001F27D0(temp_v0_3, 0);
    sp3C = 0;
    sp38 = 0x41000000;
    func_001F2530(M2C_FIELD(arg0, void **, 8), 0, &sp38);
    sp3C = 0;
    sp38 = 0x41000000;
    func_001F2530(M2C_FIELD(arg0, void **, 8), 1, &sp38);
    func_001F2770(M2C_FIELD(arg0, void **, 8), 0.0f);
    func_001F3D80(M2C_FIELD(arg0, void **, 8), &sp20, NULL);
    return 0;
}
