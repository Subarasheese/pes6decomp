/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    f32 current[3];
    f32 reserved[3];
    f32 previous[3];
} BallSegment;
extern s32 func_009B0460(f32 *crossing, const BallSegment *segment);
void func_009B03C0(s8 *state, const BallSegment *segment) {
    s32 event;
    s8 previous = *state;
    f32 crossing[3];
    if (segment->current[0] < 13437.0f) {
        *state = 0;
    } else {
        event = func_009B0460(crossing, segment);
        switch (event) {
        case 0:
            *state = 0;
            break;
        case 1:
            *state = 1;
            break;
        case 2:
            *state = -1;
            break;
        case 3:
            *state = 0;
            break;
        case 4:
            *state = previous;
            break;
        }
    }
}
