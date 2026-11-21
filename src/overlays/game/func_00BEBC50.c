/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00152130(s32, s32);
extern void func_001A58E0(void *, s32);
extern s32 func_00BF6270(void);
s32 func_00209A00(void **, s32, s32);
s32 func_009E1CB0(s32);
void *func_00B2A420(s32);
extern char D_00591BE4[];

void func_00BEBC50(void) {
    void **value;
    s32 value2;
    s32 value3;
    s8 *entry;
    void *entry2;
    void *entry3;
    char *entry4;
    void **value4;
    s8 *entry5;
    if (func_00152130(1, ((0x3C / ((s32)(*((u8 *)D_00591BE4)))) << 5) & 0xFF) == 1) {
        entry4 = (char *)func_00B2A420(0);
        value2 = 0;
        do {
            entry2 = *((void **)(((s8 *)entry4) + 0));
            value3 = *((u8 *)(((s8 *)entry2) + 0));
            if (value3 != func_00BF6270()) {
                *((s8 *)(((s8 *)(*((void **)(((s8 *)entry4) + 4)))) + 0x4D)) = 0;
                entry5 = (s8 *)(*((void **)(((s8 *)entry4) + 4)));
                *((s8 *)(entry5 + 0x4C)) = 0;
                value4 = *((void ***)(((s8 *)(*((void **)(((s8 *)entry4) + 0)))) + 4));
                value = (void **)(((s8 *)entry4) + 0);
                if (((s32)(*((u16 *)(((s8 *)value4) + 0x30)))) > (0x59A - 1)) {
                    func_00209A00(value4, 0x1BF, 0);
                    *((s8 *)(((s8 *)(*((void ***)(((s8 *)(*value)) + 4)))) + 0x50)) = 0;
                }
                *((s8 *)((entry = (s8 *)(*((void ***)(((s8 *)(*value)) + 4)))) + 0x2C)) = 0;
                func_001A58E0(*(*((void ***)(((s8 *)(*((void **)(((s8 *)entry4) + 0)))) + 4))), 0);
            } else {
                *((s8 *)(((s8 *)(*((void **)(((s8 *)entry2) + 4)))) + 0x2C)) = 1;
                entry3 = *((void **)(((s8 *)entry4) + 0));
                func_001A58E0(*(*((void ***)(((s8 *)entry3) + 4))), 1);
            }
            value2 = (value2 + 1) & 0xFF;
            entry4 += 8;
        } while (value2 < 0x17);
        func_009E1CB0(3);
    }
}
