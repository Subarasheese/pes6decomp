/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00161478(void);
extern void func_00159E88(void);
extern void func_00162820(void);
extern void func_00159EA0(void);
extern int func_00169CC8(int);
extern char D_0037ACA8[];
extern char D_00384C60[];
extern char D_00384C68[];

void func_001671B8(void) {
    s32 var_s1;
    s8 *var_s0;

    func_00159E88();
    if (M2C_FIELD(((void *)D_00384C60), s32 *, 0) != 0) {
        func_00159EA0();
        return;
    }
    M2C_FIELD(((void *)D_00384C60), s32 *, 0) = 1;
    var_s1 = 0xF;
    func_00159EA0();
    func_00159E88();
    func_00162820();
    M2C_FIELD(((void *)D_00384C60), s32 *, 0) = 2;
    var_s0 = ((void *)D_0037ACA8);
    do {
        if (*var_s0 == 1) {
            func_00169CC8((s32) var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0xC8;
    } while (var_s1 >= 0);
    M2C_FIELD(((void *)D_00384C60), s32 *, 0x4C60) = 3;
    func_00161478();
    if ((*(s32 *)D_00384C68) < 0x33) {
        func_00161478();
    }
    M2C_FIELD(((void *)D_00384C60), s32 *, 0x4C60) = 0;
    func_00159EA0();
}
