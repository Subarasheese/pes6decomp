/* compiler: mwcc-3.0.1b210 */
#include "types.h"

/* An animated 2D sprite/layout instance. Its position is added to the
 * 12.4 fixed-point offsets of every element of the current frame when the
 * frame is laid out (func_001D97E0). */
typedef struct Pes6Sprite {
    u8 pad00[0x70];
    float x, y, z, w;
    u8 pad80[0x26];
    u8 flags; /* bit 0: position changed, relayout needed */
} Pes6Sprite;

/* Sets the z (depth) component of a sprite's position, flagging the sprite
 * for relayout when it changes. Called from overlay code. */
void Pes6Sprite_SetPositionZ(Pes6Sprite *sprite, float z) {
    if (sprite != 0 && sprite->z != z) {
        sprite->z = z;
        sprite->flags |= 1;
    }
}
