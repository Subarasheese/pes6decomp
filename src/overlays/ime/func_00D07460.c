/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_00D07460(void *arg0) {
    char value;
    int value2;

    if (arg0 == 0) {
        value2 = 0;
    } else {
        if (arg0 == 0) {
            value = '\x03';
        } else {
            value = *(char *)((int)arg0 + 0x3f);
        }
        if (value == '\x02') {
            *(u32 *)((int)arg0 + 0x30) = 0;
        } else {
            if (arg0 == 0) {
                value = '\x03';
            } else {
                value = *(char *)((int)arg0 + 0x3f);
            }
            if (value == '\x02') {
                *(u32 *)((int)arg0 + 0x30) = 0;
            } else {
                *(u32 *)((int)arg0 + 0x30) = 0xf0;
                if (arg0 != 0) {
                    *(u8 *)((int)arg0 + 0x3f) = 1;
                    *(u8 *)((int)arg0 + 0x3b) = 1;
                }
            }
        }
        value2 = 1;
    }
    return value2;
}
