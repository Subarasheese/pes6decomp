/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/match_objects.h"

/* Places match object 28 from coordinates in another frame: scaled by 5 with
 * the x axis mirrored. */
void Pes6MatchObj28_SetPositionScaled(float x, float y, float z) {
    Pes6MatchObj28_Position[0] = 5.0f * -x;
    Pes6MatchObj28_Position[1] = 5.0f * y;
    Pes6MatchObj28_Position[2] = 5.0f * z;
    Pes6MatchObj28_Position[3] = 1.0f;
}
