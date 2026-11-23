/* compiler: mwcc-3.0.1b198 */
#include "types.h"
#include "pes6/slot_table.h"
extern void func_00181BC0(s32), func_00181F20(s32, s32, s32), func_00181FA0(s32, s32, s8),
    func_001864B0(s32);
extern s32 func_001888A0(void);
extern float func_001A4980(void), func_001A4AF0(void), func_001A55A0(void);
extern u16 func_002A8780(void);
extern u32 func_002A87C0(void);
extern u8 D_0051FF40[];
static inline void updateSlots(void) {
    func_00181BC0(8);
    func_00181BC0(9);
    func_00181BC0(10);
    func_00181BC0(11);
    func_00181BC0(12);
    func_00181BC0(14);
    func_00181BC0(15);
    func_00181BC0(16);
    func_00181BC0(17);
}
void func_002105F0(void) {
    s32 slot;
    func_00181FE0(2, 0);
    func_00181FA0(3, 1, 0);
    func_00181F20(6, 1, 0);
    switch (func_002A8780()) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 39: {
        func_00181FE0(11, 0);
        func_00181F20(26, 1, 0);
        func_00181F20(21, 8, 0);
    } break;
    case 12:
    case 13:
    case 16: {
        func_00181FE0(9, 0);
        func_00181F20(24, 1, 0);
        func_00181F20(21, 4, 0);
    } break;
    case 14:
    case 15:
    case 17:
    case 18:
        if (func_001A4980() > 0.17453292f && func_001A4980() < 2.9670596f) {
            func_00181FE0(9, 0);
            func_00181F20(24, 1, 0);
            func_00181F20(21, 4, 0);
        }
        break;
    case 19:
    case 20:
    case 23: {
        func_00181FE0(8, 0);
        func_00181F20(23, 1, 0);
        func_00181F20(21, 1, 0);
    } break;
    case 21:
    case 22:
    case 24:
    case 25:
        if (func_001A4980() < -0.17453292f && func_001A4980() > -2.9670596f) {
            func_00181FE0(8, 0);
            func_00181F20(23, 1, 0);
            func_00181F20(21, 1, 0);
        }
        break;
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 40: {
        func_00181FE0(10, 0);
        func_00181F20(25, 1, 0);
        func_00181F20(21, 6, 0);
    } break;
    case 42:
        func_00181FE0(11, 0);
        func_00181F20(21, 8, 0);
        break;
    }
    if (func_001A4AF0() < -0.10471976f || (D_0051FF40[0] == 22 && func_001A55A0() < -3000.0f)) {
        func_00181FE0(0, 0);
        if (func_001888A0() < 3)
            func_00181FE0(12, 0);
        func_00181FA0(13, 1, 0);
        slot = 14;
        do {
            func_00181F20(slot, 1, 0);
            slot++;
        } while (slot <= 17);
        func_00181FE0(22, 0);
        func_001864B0(64);
    }
    if (func_002A87C0() & 0x1000) {
        updateSlots();
        func_00181BC0(23);
        func_00181BC0(24);
        func_00181BC0(25);
        func_00181BC0(26);
    } else
        updateSlots();
}
