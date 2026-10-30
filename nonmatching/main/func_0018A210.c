/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00181A60(s32);
extern char D_00520118[];
extern char D_00520119[];
extern char D_0052011A[];
extern char D_0052011B[];
extern char D_0052011C[];
extern char D_0052011D[];
extern char D_0052011E[];
extern char D_0052011F[];

void func_0018A210(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    (*(s8 *)D_00520118) = 0;
    (*(s8 *)D_00520119) = 0;
    (*(s8 *)D_0052011C) = 0xFF;
    (*(s8 *)D_0052011A) = 0;
    (*(s8 *)D_0052011D) = 0xFF;
    (*(s8 *)D_0052011B) = 0;
    (*(s8 *)D_0052011E) = 0xFF;
    (*(s8 *)D_0052011F) = 0xFF;
    do {
        func_00181A60(0xF);
        func_00181A60(0x11);
        func_00181A60(0x10);
        func_00181A60(0xE);
        var_s1 += 1;
    } while (var_s1 < 2);
    var_s1_2 = 0;
    do {
        func_00181A60(0xF);
        func_00181A60(0x11);
        func_00181A60(0x10);
        func_00181A60(0xE);
        var_s1_2 += 1;
    } while (var_s1_2 < 2);
    var_s0 = 0xE;
    do {
        func_00181A60(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0x12);
}
