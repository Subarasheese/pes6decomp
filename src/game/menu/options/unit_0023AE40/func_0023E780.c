/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern u8 D_00591C09[];
extern s32 Pes6SceneStack[];
extern void func_001B8380(s32), func_001B9030(s32 scene, s32 field, s32 value);
extern s32 func_002DCA30(void);

void func_0023E780(s32 field) {
    func_001B8380(1);
    if (func_002DCA30() != 0) {
        func_001B9030(5, field, 1);
        return;
    }
    switch (D_00591C09[0]) {
    case 1:
        if (Pes6SceneStack[0] == 7) {
            func_001B9030(4, field, 1);
        } else {
            func_001B9030(6, field, 1);
        }
        break;
    case 2:
        if (Pes6SceneStack[0] == 7) {
            func_001B9030(4, field, 1);
        } else {
            func_001B9030(6, field, 1);
        }
        break;
    case 4:
        if (Pes6SceneStack[0] == 7) {
            func_001B9030(3, field, 1);
        } else {
            func_001B9030(6, field, 1);
        }
        break;
    case 5:
        if (Pes6SceneStack[0] == 4) {
            func_001B9030(6, field, 1);
        } else {
            func_001B9030(0, field, 1);
        }
        break;
    case 0:
    case 7:
        if (Pes6SceneStack[0] == 4) {
            func_001B9030(6, field, 1);
        } else {
            func_001B9030(0, field, 1);
        }
        break;
    case 12:
        if (Pes6SceneStack[0] == 4) {
            func_001B9030(6, field, 1);
        } else {
            func_001B9030(0, field, 1);
        }
        break;
    case 14:
        if (Pes6SceneStack[0] == 4) {
            func_001B9030(6, field, 1);
        } else {
            func_001B9030(8, field, 1);
        }
        break;
    case 6:
        func_001B9030(6, field, 1);
        break;
    default:
        func_001B9030(6, field, 1);
    }
}
