/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002EBEF0(void *);
s32 func_002EBF80(void *, s32);                     /* extern */
M2C_UNK func_00CE67B0();                            /* extern */
M2C_UNK func_00CEA910(s32);                         /* extern */
extern char D_00CFFCEC[];
extern void *D_00CFFCFC;
extern char D_00CFFD04[];

void func_00CEB660(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;

    var_a1 = arg1;
    if ((*(s32 *)D_00CFFCEC) != 0) {
        if ((D_00CFFCFC == NULL) && (var_a1 = 0x126, ((*(u16 *)D_00CFFD04) == 0x126))) {
            var_v1 = 1;
        } else if ((D_00CFFCFC != NULL) && ((func_002EBF80(D_00CFFCFC, var_a1) & 0xFFFF) == 0x126)) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            if (D_00CFFCFC == NULL) {
                goto block_13;
            }
            if (func_002EBEF0(D_00CFFCFC) == 0) {
                var_v1_2 = 1;
            } else {
block_13:
                var_v1_2 = 0;
            }
            if (var_v1_2 != 0) {
                return;
            }
            func_00CEA910(M2C_FIELD(arg0, s32 *, 4));
            func_00CE67B0();
        }
    }
}
