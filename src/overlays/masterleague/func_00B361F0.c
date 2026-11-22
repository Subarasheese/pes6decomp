/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00955FA0(s32);
extern s32 func_00958000(s32);
extern void func_00B35F80(void);
extern void func_00B360D0(void);
extern void **func_00B36410(void);

void func_00B361F0(s32 screen) {
    void **resource;

    resource = func_00B36410();
    if (resource != 0) {
        *resource = func_001D5A10(0x10341);
        switch (screen) {
        case 0:
            func_00B360D0();
            break;
        case 1:
            func_00B35F80();
            break;
        }
        func_00955FA0(0);
        func_00958000(3);
    }
}
