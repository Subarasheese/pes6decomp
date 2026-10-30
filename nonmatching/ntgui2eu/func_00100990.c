/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00602058[];

void func_00100990(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xE0D) = 1;
    M2C_FIELD(arg0, u8 *, 0xD00) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, s32 *, 0xE08) = 0x258;
    M2C_FIELD(arg0, u8 *, 0) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x100) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x200) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x300) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x400) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x500) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x600) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x700) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x800) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0x900) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0xA00) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0xB00) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, u8 *, 0xC00) = (u8) (*(u8 *)D_00602058);
    M2C_FIELD(arg0, s32 *, 0xE00) = 0;
    M2C_FIELD(arg0, s32 *, 0xE04) = 1;
    M2C_FIELD(arg0, s8 *, 0xE0C) = 1;
}
