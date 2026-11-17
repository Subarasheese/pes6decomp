/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_002D4BE0(s32);
void func_00305E60(char *, void (*)(void));
s32 func_009E1C90(s32);
s32 func_00BF6280();
extern char D_003B4F00[];
void func_00301A90(void);

s32 func_00301A00(char *arg0) {
    char *temp_s1;

    temp_s1 = *(char **)(arg0 + 0x18);
    if (((func_009E1C90(1) & 0xFF) == 0xC) && (func_00BF6280() != 2)) {
        func_002D4BE0(*(s32 *)(D_003B4F00 + *(s32 *)(temp_s1 + 0x24) * 4));
        func_00305E60(arg0, func_00301A90);
        return 1;
    }
    return 0;
}
