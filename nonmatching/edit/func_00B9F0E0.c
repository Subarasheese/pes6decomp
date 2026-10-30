/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B3C0(u32);
extern void * func_00B9C490(void);
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE3680[];
extern char D_00CE3683[];
extern char D_00CE3687[];
extern char D_00CE38DE[];
extern char D_00CE38DF[];
extern char D_00CE391E[];
extern char D_00CE391F[];

void func_00B9F0E0(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B9C490();
    M2C_FIELD(temp_v0, s32 *, 0x30) = 4;
    M2C_FIELD(temp_v0, u32 *, 0x34) = (u32) M2C_FIELD(temp_v0, u32 *, 0x1C);
    (*(s8 *)D_00CE3687) = 1;
    temp_v0_2 = func_00B9C490();
    if (((*(u8 *)D_00CE3683) != M2C_FIELD(temp_v0_2, s32 *, 0x34)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 1) != M2C_FIELD(temp_v0_2, s32 *, 0x40)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35) != M2C_FIELD(temp_v0_2, s32 *, 0x44)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34) != M2C_FIELD(temp_v0_2, s32 *, 0x48))) {
        M2C_FIELD(((void *)D_00CE3680), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_00CE3680), s8 *, 3) = (s8) M2C_FIELD(temp_v0_2, s32 *, 0x34);
        M2C_FIELD(((void *)D_00CE3680), u8 *, 1) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x40);
        M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x44);
        M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x48);
        (*(u8 *)D_00CE391E) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
        (*(u8 *)D_00CE38DE) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
        (*(u8 *)D_00CE391F) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
        (*(u8 *)D_00CE38DF) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
    }
    func_00BC7390(0xE);
    func_00C1B3C0(M2C_FIELD(temp_v0, u32 *, 0x34));
    func_00C1B440(0, M2C_FIELD(temp_v0, u16 *, 0x3A));
}
