/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_002D4C40(s32);
extern void func_00305E60(char *, void *);
extern s32 func_009E1C90(s32);
extern char D_003B4F80[];
extern char D_0058E5C2[];
extern char D_00591E4D[];
extern void func_003001B0(void);

s32 func_00300270(char *arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;
    char *temp_s0;

    temp_s0 = M2C_FIELD(arg0, char **, 0x18);
    var_v1 = 0xFF;
    if ((func_009E1C90(0) & 0xFF) == 4) {
        if ((func_009E1C90(1) & 0xFF) == 5) {
            temp_v1 = func_009E1C90(2) & 0xFF;
            if ((temp_v1 == 9) || (temp_v1 == 8)) {
                if ((*(u8 *)D_00591E4D) == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
                }
                if (*(((char *)D_0058E5C2) + (var_a0 * 0x240)) != 0) {
                    var_v1 = 0xA;
                } else {
                    var_v1 = 8;
                }
            }
        }
    }
    M2C_FIELD(temp_s0, s32 *, 0x24) = var_v1;
    if (var_v1 != 0xFF) {
        func_002D4C40(*(s32 *)(D_003B4F80 + (var_v1 * 4)));
        func_00305E60(arg0, (void *)func_003001B0);
        return 1;
    }
    return 0;
}
