/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00B0A9F0(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00B09090(void);
extern void func_00B089A0(void);
extern void func_009BF230(void);

void func_00B097A0(void) {
    void **state = func_00B0A9F0();
    if (state != 0) {
        void *asset = func_001D5A10(0x10300);
        state[0] = asset;
        if (asset != 0) {
            func_00B09090();
            func_00B089A0();
            func_009BF230();
        }
    }
}
