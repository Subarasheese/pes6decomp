/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00911560(void);
extern s32 func_00342AF0(void);
extern void func_00359F60(void);
extern void func_00255EF0(void);
extern void func_002D6340(void);
M2C_UNK func_009089C0();                            /* extern */
M2C_UNK func_0090B290();                            /* extern */
M2C_UNK func_0090B330();                            /* extern */
M2C_UNK func_0090D640();                            /* extern */
M2C_UNK func_009176A0();                            /* extern */
M2C_UNK func_009176F0();                            /* extern */
extern char D_0092F0D0[];
extern char D_0092F0DC[];

s32 func_0090EB30(void) {
    s32 var_s0;

    var_s0 = 0;
    if (!((*(s32 *)D_0092F0D0) & 0x20)) {
        func_009176F0();
        func_009176A0();
        func_00911560();
    }
    func_009089C0();
    if (!((*(s32 *)D_0092F0D0) & 4)) {
        func_0090D640();
    }
    func_0090B330();
    func_0090B290();
    func_00359F60();
    func_00342AF0();
    func_00255EF0();
    func_002D6340();
    if ((*(s32 *)D_0092F0DC) == 0) {
        var_s0 = 1;
    }
    return var_s0 & 0xFF;
}
