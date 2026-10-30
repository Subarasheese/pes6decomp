/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
extern s32 func_002F3A00(void *);
extern void func_002F3C30(void *);
extern void func_002F4E10(void *);
extern void func_001B7B20(void);
extern void func_002F3C70(void *);
extern void func_002F4D60(s32);
M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_002F4980(void *, s32 *);               /* extern */
M2C_UNK func_002F4DA0(void *, M2C_UNK);             /* extern */
void *func_002F4E90(M2C_UNK);                       /* extern */
extern s32 D_003EA3A4;
extern void *D_003EA3AC;
extern s32 D_003EA3B4;
extern u8 D_003EA3B8;

s32 func_00883480(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp50;
    s32 sp5C;
    s32 sp64;
    s32 spBC;
    s32 spC4;
    s32 spC8;
    s32 spD0;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    void *temp_v0;

    if (D_003EA3AC != NULL) {
        func_002F4E10(D_003EA3AC);
        D_003EA3AC = NULL;
    }
    temp_v0 = func_002F4E90(0x17);
    D_003EA3AC = temp_v0;
    if (temp_v0 == NULL) {
        return 3;
    }
    D_003EA3B4 = arg3;
    func_001C48E8(&sp50, 0, 0xF0);
    sp5C = 2;
    spBC = 2;
    spC8 = 2;
    sp138 = 0x41000000;
    sp134 = 0x40800000;
    sp13C = 0x40800000;
    sp64 = arg0;
    spC4 = arg1;
    spD0 = arg2;
    sp50 = 0;
    func_002F3C70(D_003EA3AC);
    func_002F4980(D_003EA3AC, &sp50);
    func_002F4DA0(D_003EA3AC, 0);
    func_002F3C30(D_003EA3AC);
    func_002F4D60((s32) D_003EA3AC);
    func_002F4CE0(D_003EA3AC, (s8) D_003EA3B4);
    func_002F3A00(D_003EA3AC);
    func_001B79C0();
    func_001B7B20();
    D_003EA3A4 = 1;
    D_003EA3B8 += 1;
    return 0;
}
