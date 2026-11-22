/* compiler: mwcc-3.0.1b151 */
/* Dorgengoa/RGDecomp, src/main/movie/AudioDecPcmCallback_1d4ca0.c (AudioDecBeginPut_1d2550). See
 * THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    s32 state;
    u8 header[40];
    s32 headerBytes;
    u8 *data;
    s32 writeIndex, count, capacity;
} MovieAudio;
void func_00136600(MovieAudio *audio, u8 **first, s32 *firstLength, u8 **second,
                   s32 *secondLength) {
    s32 capacity;
    s32 freeBytes;
    s32 writeIndex;
    if (audio->state == 0) {
        *first = (u8 *)((audio->headerBytes + ((s32)audio)) + 4);
        *firstLength = 0x28 - audio->headerBytes;
        *second = audio->data;
        *secondLength = audio->capacity;
        return;
    }
    capacity = audio->capacity;
    freeBytes = capacity - audio->count;
    writeIndex = audio->writeIndex;
    if ((capacity - writeIndex) >= freeBytes) {
        *first = audio->data + writeIndex;
        *firstLength = freeBytes;
        *second = 0;
        *secondLength = 0;
    } else {
        *first = audio->data + writeIndex;
        *firstLength = audio->capacity - audio->writeIndex;
        *second = audio->data;
        *secondLength = freeBytes - (audio->capacity - audio->writeIndex);
    }
}
