/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00B5F200(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00B60290(void);
extern void func_00B5FDF0(void);
extern void func_009BF230(void);

void func_00B60900(void) {
    void **state = func_00B5F200();
    if (state != 0) {
        void *asset = func_001D5A10(0x102AE);
        state[0] = asset;
        if (asset != 0) {
            func_00B60290();
            func_00B5FDF0();
            func_009BF230();
        }
    }
}
