/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void *Pes6Heap_Alloc(M2C_UNK, M2C_UNK);              /* extern */
s32 func_001EB1D0(void *, M2C_UNK *);               /* extern */
s8 func_001EC0F0(s64, s64, s64, s64, s64);          /* extern */
M2C_UNK func_001EC4C0(s32, void *, M2C_UNK *);      /* extern */
M2C_UNK func_001EC500(s32, M2C_UNK);                /* extern */
s32 func_001EC540();                                /* extern */
extern char D_0052B0C8[];
extern char D_0052B0D0[];
extern char D_0052B0D8[];
extern char D_0052B0E0[];
extern char D_0052B0E8[];
extern char D_0052B0F0[];
extern M2C_UNK func_001E5970;
extern M2C_UNK func_001E5990;

void *func_001E6020(void) {
    void *temp_v0;

    temp_v0 = Pes6Heap_Alloc(1, 0x40);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x3D) = 1;
    }
    M2C_FIELD(temp_v0, s64 *, 0) = (s64) (*(s64 *)D_0052B0C8);
    M2C_FIELD(temp_v0, s64 *, 8) = (s64) (*(s64 *)D_0052B0D0);
    M2C_FIELD(temp_v0, s64 *, 0x10) = (s64) (*(s64 *)D_0052B0D8);
    M2C_FIELD(temp_v0, s64 *, 0x18) = (s64) (*(s64 *)D_0052B0E0);
    M2C_FIELD(temp_v0, s64 *, 0x20) = (s64) (*(s64 *)D_0052B0E8);
    M2C_FIELD(temp_v0, s64 *, 0x28) = (s64) (*(s64 *)D_0052B0F0);
    M2C_FIELD(temp_v0, s8 *, 0x3E) = func_001EC0F0((*(s64 *)D_0052B0E8), (*(s64 *)D_0052B0E0), (*(s64 *)D_0052B0D8), (*(s64 *)D_0052B0D0), (*(s64 *)D_0052B0C8));
    M2C_FIELD(temp_v0, s32 *, 0x34) = func_001EC540();
    func_001EC4C0(M2C_FIELD(temp_v0, s32 *, 0x34), temp_v0, &func_001E5970);
    func_001EC500(M2C_FIELD(temp_v0, s32 *, 0x34), 0x90);
    M2C_FIELD(temp_v0, s32 *, 0x30) = func_001EB1D0(temp_v0, &func_001E5990);
    return temp_v0;
}
