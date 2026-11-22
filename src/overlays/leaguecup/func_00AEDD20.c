/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00AEE570(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00AEDAD0(void);
extern void func_00AED8C0(void);
extern void func_00AED6E0(void);
extern void func_00AECCD0(void);

void func_00AEDD20(void) {
    void **state = func_00AEE570();
    if (state != 0) {
        void *asset = func_001D5A10(0x10307);
        state[0] = asset;
        func_00AEDAD0();
        func_00AED8C0();
        func_00AED6E0();
        func_00AECCD0();
    }
}
