/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00145BB0(int);
extern void func_002CE1C0(void);
extern void func_001BBCA0(void);
extern void func_0017A370(void);
extern void func_001CDBC0(void);
extern void func_00154110(void);
extern void func_002D7590(s32);
extern void func_0026E950(void);
extern u32 func_0017A670(s32);
M2C_UNK func_0021D3D0();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern s32 D_003E744C;

void func_00153E20(void) {
    s32 temp_s0;

    if (func_0017A670(0) == 8) {
        temp_s0 = func_009E1C90(1) & 0xFF;
        if ((D_003E744C == 1) && (temp_s0 != 1)) {
            func_00145BB0(1);
            func_002D7590(0);
        } else if ((D_003E744C != 1) && (temp_s0 == 1)) {
            func_00145BB0(0);
            func_002D7590(1);
        }
        D_003E744C = temp_s0;
    } else {
        func_00145BB0(1);
        func_002D7590(0);
    }
    func_001CDBC0();
    func_002CE1C0();
    func_0026E950();
    func_0017A370();
    func_00154110();
    func_0021D3D0();
    func_001BBCA0();
}
