/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void (*D_003E9968)(void);
extern void (*D_003E996C)(void);
extern s32 D_003E9970;
void func_001EB3E0(void);
void func_001EB380(void);
void func_001EB490(void);
void func_001EB420(void);

void func_001EB320(s32 mode) {
    switch (mode) {
    default:
        mode = 0;
    case 0:
        D_003E9968 = func_001EB490;
        D_003E996C = func_001EB420;
        break;
    case 1:
        D_003E9968 = func_001EB3E0;
        D_003E996C = func_001EB380;
        break;
    }
    D_003E9970 = mode;
}
