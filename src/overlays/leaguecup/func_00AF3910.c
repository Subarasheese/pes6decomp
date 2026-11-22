/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00AF3B30(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00AF3570(void);
extern void func_00AF33A0(void);

void func_00AF3910(void) {
    void **state = func_00AF3B30();
    if (state != 0) {
        void *asset = func_001D5A10(0x102B5);
        state[0] = asset;
        func_00AF3570();
        func_00AF33A0();
    }
}
