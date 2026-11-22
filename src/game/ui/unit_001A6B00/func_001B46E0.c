/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 Pes6File_AllChannelsIdle(void);
extern void Pes6Module_Load(s32);
extern void func_001FC780(s32);
extern void func_001BD0A0(void);
extern void func_002CB730(s8);
extern void func_001AC610(void), func_001B06B0(void), func_001F9150(void), func_002F7A90(void);
extern s32 func_00930540(void);
extern s32 func_0021DF90(s32);
extern s32 func_001F0210(s32);
extern void func_00147F90(s32, s32, s32);
extern void func_001B7750(void);
extern u32 D_00522890[];
s32 func_001B46E0(void) {
    s32 ready = 0;
    switch (D_00522890[0]) {
    case 0:
        ++D_00522890[0];
        break;
    case 1:
        func_001FC780(6);
        Pes6Module_Load(0x14);
        ++D_00522890[0]; /* fall through */
    case 2:
        func_001BD0A0();
        ++D_00522890[0]; /* fall through */
    case 3:
        if (!Pes6File_AllChannelsIdle())
            break;
        func_002CB730(13);
        func_001AC610();
        func_001B06B0();
        func_002CB730(1);
        func_001F9150();
        func_002F7A90();
        ++D_00522890[0]; /* fall through */
    case 4:
        if (!func_00930540())
            break;
        func_001F0210(func_0021DF90(0));
        ++D_00522890[0]; /* fall through */
    case 5:
        func_00147F90(0, 21, 35);
        func_00147F90(1, 0, 0);
        func_001B7750();
        ++D_00522890[0]; /* fall through */
    case 6:
        ready = 1;
        D_00522890[0] = 0;
        break;
    }
    return ready;
}
