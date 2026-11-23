/* compiler: ee-gcc-2.96-G0 */
/* func_00338710 adapted from LucasPicoli/god-hand-decomp, src/cod/00323a00.c. See THIRD_PARTY.md.
 */
#include "types.h"
typedef struct {
    u8 reserved00[0x30];
    s32 samplingFrequency;
} RnaOutput;
extern int D_0038DBD0;
extern int D_0038DBD8;
extern const char D_003CBFD8[];
extern void func_00161038(const char *format, ...);
void func_00175E90(RnaOutput *output, s32 frequency) {
    if (D_0038DBD8 == 1 && D_0038DBD0 <= 0)
        return;
    if (48000 % frequency != 0)
        func_00161038(D_003CBFD8, frequency);
    output->samplingFrequency = frequency;
}
