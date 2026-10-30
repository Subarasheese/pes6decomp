/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363BD0(void);
extern void func_001BC2B0(void);
extern void func_001BA3C0(void);
extern char D_008F5880[];
extern char D_008F5884[];
extern char D_008F5888[];
extern char D_008F588C[];
extern char D_008F5890[];
extern char D_008F5894[];
extern char D_008F5898[];
extern char D_008F589C[];

void func_008D8D30(void) {
    s32 var_s0;
    s32 var_s3;

    func_00363BD0();
    (*(s32 *)D_008F5880) = 0;
    (*(s32 *)D_008F5884) = 0;
    (*(s32 *)D_008F5888) = 0;
    (*(s32 *)D_008F588C) = 0;
    (*(s32 *)D_008F5890) = 0;
    (*(s32 *)D_008F5894) = 0;
    (*(s32 *)D_008F5898) = 0;
    var_s0 = 0;
    (*(s32 *)D_008F589C) = 0;
    do {
        var_s3 = 0;
loop_2:
        func_001BA3C0();
        var_s3 += 1;
        if (var_s3 < 0x16) {
            goto loop_2;
        }
        var_s0 += 1;
    } while (var_s0 < 2);
    func_001BC2B0();
}
