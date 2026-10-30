/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BBFD0(s32);                         /* extern */
M2C_UNK func_001BC040(s32);                         /* extern */
M2C_UNK func_001BC360(s32);                         /* extern */
extern s32 D_003EA3F8;
extern s32 D_003EA3FC;
extern char D_008DBF50[];
extern char D_008DC230[];
extern char D_008DC234[];
extern char D_008DC238[];
extern char D_008DC23C[];
extern char D_008DC240[];
extern char D_008DC244[];
extern char D_008DC248[];
extern char D_008DC24C[];
extern char D_008DC250[];
extern char D_008DC254[];
extern char D_008DC258[];
extern char D_008DC25C[];
extern char D_008DC260[];
extern char D_008DC264[];
extern char D_008DC268[];
extern char D_008DC26C[];
extern char D_008DC270[];
extern char D_008DC274[];
extern char D_008DC278[];
extern char D_008DC27C[];
extern char D_008DC280[];
extern char D_008DC284[];
extern char D_008DC288[];
extern char D_008DC28C[];

void func_008B34C0(void) {
    s32 *var_s1;
    s32 *var_s2;
    s32 var_s0;
    s32 var_s3;

    if (D_003EA3F8 == 1) {
        var_s0 = 0;
        var_s2 = ((void *)D_008DBF50);
        do {
            var_s3 = 0;
            var_s1 = var_s2;
loop_3:
            func_001BC360(*var_s1);
            var_s3 += 1;
            *var_s1 = 0;
            var_s1 += 4;
            if (var_s3 < 0x17) {
                goto loop_3;
            }
            var_s0 += 1;
            var_s2 += 0x5C;
        } while (var_s0 < 8);
        func_001BC040(D_003EA3FC);
        func_001BBFD0(D_003EA3FC);
        (*(s32 *)D_008DC230) = 0;
        (*(s32 *)D_008DC250) = 0;
        (*(s32 *)D_008DC270) = 0;
        (*(s32 *)D_008DC234) = 0;
        (*(s32 *)D_008DC254) = 0;
        (*(s32 *)D_008DC274) = 0;
        (*(s32 *)D_008DC238) = 0;
        (*(s32 *)D_008DC258) = 0;
        (*(s32 *)D_008DC278) = 0;
        (*(s32 *)D_008DC23C) = 0;
        (*(s32 *)D_008DC25C) = 0;
        (*(s32 *)D_008DC27C) = 0;
        (*(s32 *)D_008DC240) = 0;
        (*(s32 *)D_008DC260) = 0;
        (*(s32 *)D_008DC280) = 0;
        (*(s32 *)D_008DC244) = 0;
        (*(s32 *)D_008DC264) = 0;
        (*(s32 *)D_008DC284) = 0;
        (*(s32 *)D_008DC248) = 0;
        (*(s32 *)D_008DC268) = 0;
        (*(s32 *)D_008DC288) = 0;
        (*(s32 *)D_008DC24C) = 0;
        (*(s32 *)D_008DC26C) = 0;
        (*(s32 *)D_008DC28C) = 0;
    }
    D_003EA3F8 = 0;
}
