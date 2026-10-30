/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00141C30(void);
extern void func_00141C40(void);
extern void func_00142EC0(s32, s32, s32, s32, s32);
extern void func_00142DB0(s32);
extern void func_00141DC0(int, int);
extern void * func_00129C20(void);
extern void func_00142E00(s32);
void func_00182620(void *arg0) {
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x50) & 1) {
        func_00141C40();
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x50) & 2)) {
        func_00141DC0(1, 0);
    } else {
        func_00141DC0(1, 1);
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x52);
    switch (temp_v1) {                              /* irregular */
    case 0xFF:
        break;
    case 0xFE:
        func_00142E00(1);
        break;
    default:
        func_00142E00(0);
        func_00142DB0(M2C_FIELD(arg0, u8 *, 0x52) * 0x10);
        break;
    }
    func_00142EC0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), (s32) (arg0 + 0x10), func_00129C20(), 0);
    func_00141C30();
}
