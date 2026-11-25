/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void *D_003EADB4, *D_003EADB8, *D_003EADBC, *D_003EADC0;
extern s32 D_003E7CE8, D_003E7CEC;
extern void *func_001D5A10(s32 id), *func_00973CD0(void *resource, s32 index);
extern const char *func_001F08B0(s32 id);
extern void *func_00973AA0(void *group, s32 index, const char *label);
extern void func_001D7D80(void *group, s16 frame),
    func_009737E0(void *widget, s32 field, s32 value), func_001D7D60(void *group, u8 visible);
void func_00AEAE50(void) {
    if (D_003EADB4 == 0) {
        D_003EADB8 = 0;
        D_003EADC0 = 0;
        D_003E7CE8 = -1;
        D_003E7CEC = -1;
        D_003EADBC = 0;
        D_003EADB4 = func_001D5A10(0x1032B);
        if (D_003EADB4 == 0)
            return;
        D_003EADB8 = func_00973CD0(D_003EADB4, 0);
        if (D_003EADB8 == 0)
            return;
        D_003EADBC = func_00973AA0(D_003EADB8, 0, func_001F08B0(0x1D00BC));
        D_003EADC0 = func_00973AA0(D_003EADB8, 1, 0);
        if (D_003EADB4 && D_003E7CEC != 5) {
            func_001D7D80(D_003EADB8, 0);
            D_003E7CEC = 5;
        }
        if (D_003EADB4 && D_003E7CE8 != 0) {
            func_009737E0(D_003EADC0, 1, 0);
            D_003E7CE8 = 0;
        }
        if (D_003EADB4)
            func_001D7D60(D_003EADB8, 0);
    }
}
