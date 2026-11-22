/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern void Pes6MemRegion_Release(s32);
extern s32 Pes6Module_GetRegion(s32);
extern s32 Pes6Module_Load(s32);
extern s32 func_002E8C60(void);
extern s32 func_002E8CB0(s32, s8);
extern s32 func_002E9310(void);
extern s32 func_0030CF40(void);
extern void func_00349900(void);
extern void func_00AEE690(void);

s32 func_00930080(s32);
extern char D_00B02B44[];
extern char D_00B02B60[];

s32 func_00AEBF60(void) {
    s32 value;
    u32 value2;
    s32 value3;
    func_0030CF40();
    value2 = *((u32 *)D_00B02B44);
    value = 0;
    switch (value2) {
    case 0:
        func_00349900();
        func_002E8CB0(0x2D, 0);
        value2 += 1;
        break;

    case 1:
        if (func_002E8C60() == 1) {
            value3 = func_002E9310();
            value2 += 1;
            *((s32 *)D_00B02B60) = value3;
        case 2:
            Pes6MemRegion_Release(Pes6Module_GetRegion(0x14));

            Pes6Module_Load(0x14);
            value2 += 1;
        }
        break;

    case 3:
        if (Pes6File_AllChannelsIdle() != 0) {
            value2 += 1;
        case 4:
            if (func_00930080(0) == 1) {
                value2 += 1;
            case 5:
                Pes6MemRegion_Release(Pes6Module_GetRegion(0x1A));

                Pes6Module_Load(0x1A);
                value2 += 1;
            }
        }
        break;

    case 6:
        if (Pes6File_AllChannelsIdle() != 0) {
            value2 += 1;
        case 7:
            value = 1;
        }
        break;
    }

    *((u32 *)D_00B02B44) = value2;
    if (value != 0) {
        func_00AEE690();
    }
    return value;
}
