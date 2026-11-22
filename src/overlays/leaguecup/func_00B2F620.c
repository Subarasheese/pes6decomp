/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00B30600(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00B2ED30(void);
extern void func_00B2E9A0(void);

void func_00B2F620(void) {
    void **state = func_00B30600();
    if (state != 0) {
        void *asset = func_001D5A10(0x10315);
        state[0] = asset;
        func_00B2ED30();
        func_00B2E9A0();
    }
}
