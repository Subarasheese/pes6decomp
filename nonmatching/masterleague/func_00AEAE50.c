/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern s32 func_001F08B0(s32);
extern void * func_001D5A10(s32);
M2C_UNK func_009737E0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00973AA0(void *, M2C_UNK, s32);            /* extern */
void *func_00973CD0(void *, M2C_UNK);               /* extern */
extern s32 D_003E7CE8;
extern s32 D_003E7CEC;
extern void *D_003EADB4;
extern void *D_003EADB8;
extern s32 D_003EADBC;
extern s32 D_003EADC0;

void func_00AEAE50(void) {
    void *temp_v0;
    void *temp_v0_2;

    if (D_003EADB4 == NULL) {
        D_003E7CE8 = -1;
        D_003E7CEC = -1;
        D_003EADB8 = NULL;
        D_003EADC0 = 0;
        D_003EADBC = 0;
        temp_v0 = func_001D5A10(0x1032B);
        D_003EADB4 = temp_v0;
        if (temp_v0 != NULL) {
            temp_v0_2 = func_00973CD0(temp_v0, 0);
            D_003EADB8 = temp_v0_2;
            if (temp_v0_2 != NULL) {
                D_003EADBC = func_00973AA0(D_003EADB8, 0, func_001F08B0(0x1D00BC));
                D_003EADC0 = func_00973AA0(D_003EADB8, 1, 0);
                if ((D_003EADB4 != NULL) && (D_003E7CEC != 5)) {
                    func_001D7D80(D_003EADB8, 0);
                    D_003E7CEC = 5;
                }
                if ((D_003EADB4 != NULL) && (D_003E7CE8 != 0)) {
                    func_009737E0(D_003EADC0, 1, 0);
                    D_003E7CE8 = 0;
                }
                if (D_003EADB4 != NULL) {
                    func_001D7D60(D_003EADB8, 0);
                }
            }
        }
    }
}
