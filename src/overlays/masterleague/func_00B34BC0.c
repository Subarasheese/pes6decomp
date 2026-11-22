/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *func_00970870(u16);

s32 func_00B34BC0(s8 *arg0, s8 *arg1) {
    u8 *value1;
    u8 *value2;
    if (*(u16 *)(arg0) == 0) {
        return 1;
    } else {
        if (*(u16 *)(arg1) == 0) {
            return -1;
        } else {
            value1 = func_00970870(*(u16 *)(arg0));
            value2 = func_00970870(*(u16 *)(arg1));
            if ((((u16 *)(value1))[0x1E] & 0x1FF) < (((u16 *)(value2))[0x1E] & 0x1FF)) {
                return -1;
            } else {
                if ((((u16 *)(value1))[0x1E] & 0x1FF) == (((u16 *)(value2))[0x1E] & 0x1FF)) {
                    if (*(u16 *)(arg0) < *(u16 *)(arg1)) {
                        return -1;
                    } else {
                        return (*(u16 *)(arg1) < *(u16 *)(arg0));
                    }
                } else {
                    return 1;
                }
            }
        }
    }
}
