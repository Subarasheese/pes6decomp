/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_001A4800(int);
extern void func_002A8830(s32);
extern void func_002A8F50(float, float, float);
M2C_UNK func_002A7A30(M2C_UNK);                     /* extern */
M2C_UNK func_002A8940(f32);                         /* extern */
M2C_UNK func_002A8C00(M2C_UNK);                     /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00592740[];
extern char D_00CBBE04[];

void func_00C98780(void) {
    s32 temp_v0;

    temp_v0 = func_00BBB8C0(3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_002A9470((*(u8 *)D_00CBBE04));
        func_002A7A30(0x1C);
        func_002A8940((f32) func_00BBB8C0(0x1F4));
        break;
    case 1:
        func_002A9470((*(u8 *)D_00CBBE04));
        func_002A7A30(0xD);
        func_002A8940((f32) func_00BBB8C0(0x320));
        break;
    case 2:
        func_002A9470((*(u8 *)D_00CBBE04));
        func_002A7A30(0x15);
        func_002A8940((f32) func_00BBB8C0(0x3E8));
        func_002A8F50(-100.0f, 0.0f, 0.0f);
        break;
    }
    func_002A8C00(0x3E4CCCCD);
    func_001A4800(3);
    func_002A8830(3);
    (*(s8 *)D_00592740) = 3;
}
