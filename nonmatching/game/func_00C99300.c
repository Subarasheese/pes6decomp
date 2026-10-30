/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002BB820(int, int);
extern int func_002DCA30(void);
extern void func_00BBB960(u32);
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BBC290(M2C_UNK, M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */
extern char D_003B9320[];
extern char D_008B145C[];
extern char D_00CA92B0[];
extern char D_00CA9300[];

void func_00C99300(void *arg0) {
    f32 temp_f2;
    s32 var_a0;

    if (func_002DCA30() != 0) {
        func_00BBB960((*(u32 *)D_008B145C));
    }
    if ((func_00BBB8C0(2) == 0) && (M2C_FIELD(arg0, u8 *, 0x24) == 1)) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xE0);
        if ((temp_f2 < 0.0f) && (M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_a0 = 0;
        } else if ((temp_f2 < 0.0f) && !(M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_a0 = 1;
        } else if (!(temp_f2 < 0.0f) && (M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_a0 = 2;
        } else {
            var_a0 = 3;
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) != 0x5A1) {
            func_00BBC290(0, ((void *)D_00CA9300), 0, var_a0 & 0xFF, 0x40400000);
            return;
        }
        func_00BBC290(0, ((void *)D_00CA92B0), 0, var_a0 & 0xFF, 0x40400000);
        return;
    }
    func_002BB820((s32) M2C_FIELD(arg0, u8 *, 0), 0x1D);
    func_002BBF20(((void *)D_003B9320));
}
