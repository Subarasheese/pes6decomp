/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00985C60(u32);
extern s32 func_00985C70(void);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
void *func_009E84F0();                              /* extern */
u32 func_009F4A40();                                /* extern */
extern void *D_00A68D40;
extern char D_00A68D48[];
extern M2C_UNK func_00976920;
extern M2C_UNK func_00976970;
extern M2C_UNK func_00976BA0;
extern M2C_UNK func_00976BE0;
extern M2C_UNK func_00976BF0;
extern M2C_UNK func_00976C20;
extern M2C_UNK func_00976C30;
extern M2C_UNK func_00976CE0;
extern M2C_UNK func_00976CF0;
extern M2C_UNK func_00976D30;
extern M2C_UNK func_00976DC0;

void func_00976E50(s32 arg0) {
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;

    temp_s0 = func_009E84F0();
    func_0099C760();
    func_0099C730(0x01F70099);
    func_001C48E8(&D_00A68D40, 0, 0xC);
    D_00A68D40 = temp_s0;
    temp_s2 = temp_s0 + 0x10;
    (*(s32 *)D_00A68D48) = arg0;
    M2C_FIELD(temp_s0, void ***, 0x58) = &D_00A68D40;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x78) = &func_00976DC0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x7C) = &func_00976D30;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x80) = &func_00976CF0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x84) = &func_00976CE0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x88) = &func_00976C30;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x8C) = &func_00976C20;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x90) = &func_00976BF0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x94) = &func_00976BE0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x98) = &func_00976BA0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x9C) = &func_00976970;
    M2C_FIELD(temp_s0, M2C_UNK **, 0xA0) = &func_00976920;
    temp_v0 = func_0082C2A0();
    M2C_FIELD(temp_s0, s32 *, 0) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x30) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x3C) = (s32) M2C_FIELD(temp_v0, s32 *, 0x37D8);
    M2C_FIELD(temp_s2, s32 *, 0x40) = arg0;
    if (func_00985C70() == 0) {
        func_00985C60(func_009F4A40());
    }
    func_009717C0(3);
}
