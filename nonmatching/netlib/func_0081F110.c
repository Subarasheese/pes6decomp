/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern void func_001BC040(s32);
M2C_UNK func_001BBFD0(s32);                         /* extern */
M2C_UNK func_0081EF20();                            /* extern */
extern char D_00887070[];
extern char D_008870D0[];
extern char D_008A4250[];
extern char D_008A4258[];
extern char D_008A4268[];

s32 func_0081F110(void) {
    s32 *temp_s3;
    s32 var_s1;
    s32 var_s2;

    (*(s32 *)D_008A4258) = 1;
    if ((*(s32 *)D_008A4268) != 0) {
        func_001BC040((*(s32 *)D_008A4268));
        func_001BBFD0((*(s32 *)D_008A4268));
        (*(s32 *)D_008A4268) = 0;
    }
    func_001BC360();
    (*(s32 *)D_00887070) = -1;
    var_s2 = 0;
    do {
        var_s1 = 0;
loop_4:
        temp_s3 = ((void *)D_008870D0) + (var_s2 * 0x10) + (var_s1 * 4);
        if (*temp_s3 != -1) {
            func_001BC360();
            *temp_s3 = -1;
        }
        var_s1 += 1;
        if (var_s1 < 4) {
            goto loop_4;
        }
        var_s2 += 1;
    } while (var_s2 < 0xE);
    if ((*(s32 *)D_008A4250) == 1) {
        func_0081EF20();
    }
    return 1;
}
