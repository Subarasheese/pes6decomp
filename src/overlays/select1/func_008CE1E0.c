/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_008CC830(void);
extern void *func_001D5A10(s32 assetId);
extern void func_008CDBC0(void);
extern void func_008CDAC0(void);

void func_008CE1E0(void) {
    void **state = func_008CC830();
    if (state != 0) {
        void *asset = func_001D5A10(0x10386);
        state[0] = asset;
        if (asset != 0) {
            func_008CDBC0();
            func_008CDAC0();
        }
    }
}
