/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001D5C40(s32);
s32 func_001E7140(s32);
s32 func_0021E000(s32);
s32 func_0026DA40(s32);
s32 func_002D3490(s32);
s32 func_0095EA40(s32);
extern void func_00974080(void);
extern void func_00974CD0(void);
extern s32 func_009753A0(void);
extern s32 func_009755E0(void);
extern s32 D_003E7B24;
extern s32 D_003E7B28;
extern s32 D_003E7B2C;

void func_009757B0(void) {
    func_00974CD0();
    func_00974080();
    D_003E7B24 = func_009755E0();
    D_003E7B28 = func_009753A0();
    if (func_0026DA40(3) != 0) {
        func_002D3490(D_003E7B2C);
    }
    if (D_003E7B28 != 0x1DEB9) {
        func_001D5C40(D_003E7B28);
    }
    func_001D5C40(0x102A4);
    if (D_003E7B24 != 0x188) {
        func_001E7140(func_0021E000(D_003E7B24));
    }
    D_003E7B24 = 0x188;
    D_003E7B28 = 0x1DEB9;
    D_003E7B2C = -1;
    func_0095EA40(1);
}
