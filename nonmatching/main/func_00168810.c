/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00165968(int);
extern void func_0015B478(void *);
extern int func_001765A8(int, int);
extern void func_00159E88(void);
extern void func_00159EA0(void);
extern int func_00167C18(int, int);
M2C_UNK func_00165608(s32, s32);                    /* extern */
extern char D_003C9168[];

void func_00168810(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    if ((arg0 == 0) || (arg1 == NULL) || (arg2 < 0)) {
        func_0015B478((void *)0x3C9138);
        return;
    }
    func_00165968(arg0);
    temp_v1 = M2C_FIELD(arg1, s32 *, 4);
    if (arg2 >= (((u32) temp_v1 >> 0x18) | (temp_v1 << 0x18) | (((temp_v1 << 8) & 0xFF0000) | ((temp_v1 >> 8) & 0xFF00)))) {
        return;
    }
    if (arg2 < 0) {
        return;
    }
    func_00159E88();
    temp_v1_2 = M2C_FIELD(((arg2 * 8) + arg1), s32 *, 8);
    temp_v0 = func_001765A8((s32) (arg1 + (((u32) temp_v1_2 >> 0x18) | (temp_v1_2 << 0x18) | (((temp_v1_2 << 8) & 0xFF0000) | ((temp_v1_2 >> 8) & 0xFF00)))), 0x40000000);
    if (temp_v0 == 0) {
        func_00159EA0();
        func_0015B478(((void *)D_003C9168));
        return;
    }
    func_00165608(arg0, temp_v0);
    M2C_FIELD(arg0, s8 *, 2) = 2;
    func_00167C18(arg0, 0);
    func_00159EA0();
}
