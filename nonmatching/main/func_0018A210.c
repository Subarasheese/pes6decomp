/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00181A60(s32, s32, s32, s32);
extern char D_00520118[];
extern char D_00520119[];
extern char D_0052011A[];
extern char D_0052011B[];
extern char D_0052011C[];
extern char D_0052011D[];
extern char D_0052011E[];
extern char D_0052011F[];

void func_0018A210(void) {
    s32 i;
    s32 a;
    s32 b;

    (*(s8 *)D_00520118) = 0;
    (*(s8 *)D_00520119) = 0;
    (*(s8 *)D_0052011C) = 0xFF;
    (*(s8 *)D_0052011A) = 0;
    (*(s8 *)D_0052011D) = 0xFF;
    (*(s8 *)D_0052011B) = 0;
    (*(s8 *)D_0052011E) = 0xFF;
    (*(s8 *)D_0052011F) = 0xFF;
    for (i = 0; i < 2; i++) {
        a = i + 0x2774;
        func_00181A60(0xF, a, 0x2905, i + 0x2928);
        func_00181A60(0x11, a, 0x2905, i + 0x292C);
        func_00181A60(0x10, a, 0x2905, i + 0x292E);
        func_00181A60(0xE, i + 0x2776, 0x2905, i + 0x292A);
    }
    for (i = 0; i < 2; i++) {
        a = i + 0x2779;
        b = i + 0x2930;
        func_00181A60(0xF, a, b, 0x2929);
        func_00181A60(0x11, a, b, 0x292D);
        func_00181A60(0x10, a, b, 0x292F);
        func_00181A60(0xE, a, b, 0x292B);
    }
    for (i = 0xE; i < 0x12; i++) {
        func_00181A60(i, 0x2778, 0x2904, 0x2904);
    }
}
