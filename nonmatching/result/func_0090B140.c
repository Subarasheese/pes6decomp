/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_0017F900(void);
extern void func_002F4D80(s32);
extern void func_001D7D60(void *, s8);
extern void func_001BC300(void);
extern void func_002EC160(int, int);
M2C_UNK func_001C4730(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_00244AB0(u8);                          /* extern */
M2C_UNK func_008B36F0();                            /* extern */
M2C_UNK func_008CA300(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CA810(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_0090B030(u16);                         /* extern */
M2C_UNK func_0090F8E0(M2C_UNK);                     /* extern */
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char Pes6MatchSquads[];
extern void *D_00921DE0;
extern void *D_00921DE4;
extern void *D_00921DE8;
extern void *D_00923FC8;

s32 func_0090B140(void) {
    if (func_0017F900() == 0) {
        return 0;
    }
    func_0090B030(M2C_FIELD(D_00923FC8, u16 *, 8));
    func_0090B030(M2C_FIELD(D_00923FC8, u16 *, 0xA));
    if (func_0017F900() == 0) {
        return 0;
    }
    func_001C4730(D_00923FC8 + 0xE18, ((void *)Pes6MatchSquads), 0xD200);
    func_001BC300();
    func_001D7D80(D_00921DE8, 1);
    func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x34), 0);
    func_001D7D60(D_00921DE0, 0);
    func_001D7D60(D_00921DE4, 0);
    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0xC0), 0);
    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0x75C), 0);
    func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x34), 0);
    func_008CA300(M2C_FIELD(D_00923FC8, s32 *, 0xE04), 0);
    func_002F4D80(M2C_FIELD(D_00923FC8, s32 *, 0xE08));
    func_0090F8E0(0);
    M2C_FIELD(D_00923FC8, u8 *, 0xA0) = (u8) D_003E9E88;
    M2C_FIELD(D_00923FC8, u8 *, 0xA1) = (u8) D_003E9E89;
    func_00244AB0(D_003E9E88);
    func_008B36F0();
    func_008CA810(M2C_FIELD(D_00923FC8, s32 *, 0xE04), (*(u16 *)D_00591BB0), 0);
    func_008CA810(M2C_FIELD(D_00923FC8, s32 *, 0xE04), (*(u16 *)D_00591BB2), 1);
    return 1;
}
