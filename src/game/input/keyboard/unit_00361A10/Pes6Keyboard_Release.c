/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Process_Destroy(s32);                         /* extern */
M2C_UNK Pes6Process_Unlink(s32);                         /* extern */
M2C_UNK func_00362AF0();                            /* extern */
M2C_UNK func_003637D0(M2C_UNK);                     /* extern */
extern s32 Pes6Keyboard_Process;
extern s32 Pes6Keyboard_RefCount;

void Pes6Keyboard_Release(void) {
    s32 temp_v1;

    if (Pes6Keyboard_Process != 0) {
        temp_v1 = Pes6Keyboard_RefCount - 1;
        Pes6Keyboard_RefCount = temp_v1;
        if (temp_v1 == 0) {
            func_003637D0(0);
            func_00362AF0();
            Pes6Process_Unlink(Pes6Keyboard_Process);
            Pes6Process_Destroy(Pes6Keyboard_Process);
            Pes6Keyboard_Process = 0;
        }
    }
}
