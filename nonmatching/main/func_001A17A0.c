/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58D0(int);
extern void func_0019F4B0(int);
extern void func_00182B20(int);
extern void func_00187450(int);
extern void func_00186330(void);
extern void func_00182AE0(s32);
M2C_UNK func_00182B80();                            /* extern */
M2C_UNK func_00182D20();                            /* extern */
M2C_UNK func_002D6E50();                            /* extern */
extern char D_00591C09[];
extern M2C_UNK func_0020E3A0;
extern M2C_UNK func_002D70D0;

void func_001A17A0(void) {
    func_00182D20();
    func_00182B80();
    func_0019F4B0(0);
    func_001A58D0((s32) &func_0020E3A0);
    func_002D6E50();
    func_00187450((s32) &func_002D70D0);
    func_00186330();
    func_00182B20(1);
    if ((*(u8 *)D_00591C09) != 0xA) {
        func_00182AE0(1);
    }
}
