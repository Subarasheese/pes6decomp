/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
s32 func_0099AF50(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0099B690(s32, M2C_UNK, M2C_UNK *);         /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */
s32 func_0099D2C0(M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */
s32 func_0099D570(M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_009D9090(void *, s32);                 /* extern */
extern char D_00A03130[];

void func_009D93F0(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_v0;

    func_001D7F10(M2C_FIELD(arg1, s32 *, 0));
    func_001D7F10(M2C_FIELD(arg1, s32 *, 4));
    func_001D7F10(M2C_FIELD(arg1, s32 *, 0x10));
    func_0099D280(M2C_FIELD(arg1, s32 *, 8));
    func_0099D530(M2C_FIELD(arg1, s32 *, 0xC));
    func_001C48E8(arg1, 0, 0x28);
    M2C_FIELD(arg1, s32 *, 0) = func_0099AF50(arg0, 0xE, 1);
    temp_v0 = func_0099AF50(arg0, 0xF, 1);
    M2C_FIELD(arg1, s32 *, 4) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0x10) = func_0099AF50(arg0, 0, 1);
    M2C_FIELD(arg1, s32 *, 8) = func_0099D2C0(0, 0, temp_v0, 0x43, 1);
    M2C_FIELD(arg1, s32 *, 0xC) = func_0099D570(4, 0, temp_v0, 0x44, 1);
    M2C_FIELD(arg1, s32 *, 0x14) = func_0099B690(temp_v0, 0x10, ((void *)D_00A03130));
    M2C_FIELD(arg1, s32 *, 0x18) = func_0099B690(temp_v0, 0x11, ((void *)D_00A03130));
    M2C_FIELD(arg1, s32 *, 0x1C) = func_0099B690(temp_v0, 0x12, NULL);
    M2C_FIELD(arg1, s32 *, 0x20) = func_0099B690(temp_v0, 0x13, ((void *)D_00A03130));
    func_009D9090(arg1, arg2);
}
