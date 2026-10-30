/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A72E0(void);
extern void func_001A9A10(void);
M2C_UNK func_001C4730(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_0026EEA0(M2C_UNK *, u16, u8);          /* extern */
extern char D_00591730[];
extern char Pes6MatchSquads[];

void func_00BC85D0(void *arg0, s32 arg1) {
    u16 temp_a1;
    u8 temp_a2;
    void *temp_s0;

    if ((M2C_FIELD(arg0, u8 *, 0x66) & 3) == 1) {
        M2C_FIELD(((void *)D_00591730), u8 *, 0x12) = 1U;
        M2C_FIELD(((void *)D_00591730), u8 *, 0x11) = 0x16U;
        temp_s0 = (M2C_FIELD(((void *)D_00591730), u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(((void *)D_00591730), u8 *, 0x12) * 0x6900)) + 0x1C;
        func_001C4730(temp_s0, arg0 + 0x34 + 0x24, 0x24, M2C_FIELD(((void *)D_00591730), u8 *, 0x12) * 0x69);
        temp_a2 = M2C_FIELD(temp_s0, u8 *, 0xE);
        M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) ((temp_a2 & ~3) | 2);
        temp_a1 = M2C_FIELD(temp_s0, u16 *, 0xC);
        M2C_FIELD(temp_s0, u16 *, 0xC) = (u16) ((temp_a1 & 0xFFFF001F) | ((arg1 & 0x7FF) << 5));
        func_0026EEA0(((void *)D_00591730), temp_a1, temp_a2);
        func_001A72E0();
        func_001A9A10();
    }
}
