/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_0030EA90(u8, u8);
extern int func_003387D0(void *, void (*)(void), char *);
extern s32 func_003389F0(void *, s32, s32);
extern s32 func_00341910(s32, s32, s32);
extern char D_003E1510[];
extern void func_00319D50(void);
extern void func_0031B230(void);

s32 func_0031B0E0(void *arg0) {
    u8 *p;

    p = M2C_FIELD(arg0, u8 **, 0x3C);
    if (func_0030EA90(p[0], p[2]) != 0) {
        return 0;
    }
    p[2] = 0xAB;
    if (func_00341910(1, 5, 0xA) != 0) {
        func_003387D0(arg0, func_0031B230, D_003E1510);
    } else {
        func_003387D0(arg0, func_00319D50, D_003E1510);
        func_003389F0(arg0, 0, 0xFF);
        func_003389F0(arg0, 1, 0xFF);
    }
    return 1;
}
