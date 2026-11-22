/* compiler: ee-gcc-2.96-G0 */
/* func_0032AA30 adapted from LucasPicoli/god-hand-decomp, src/cod/00328fa0.c. See THIRD_PARTY.md.
 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    void *decoder;
    u8 reserved08[4];
    void *output;
    u8 reserved10[0x30];
    s16 volume;
    u8 reserved42[0x6b];
    s8 mode;
} AdxVolumeHandle;
extern const char D_003C8BC0[];
extern void func_0015B478(const char *message);
extern s32 func_00162B88(void *decoder);
extern void func_001614D8(void *output, s32 volume);
void adxt_SetOutVol(AdxVolumeHandle *stream, s32 volume) {
    s32 base;
    if (!stream) {
        func_0015B478(D_003C8BC0);
        return;
    }
    stream->volume = volume;
    if (stream->mode == 1)
        base = func_00162B88(stream->decoder);
    else
        base = 0;
    func_001614D8(stream->output, stream->volume + base);
}
