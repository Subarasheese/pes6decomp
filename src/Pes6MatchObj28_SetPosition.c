/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/match_objects.h"

/* Places match object 28 at a world position. */
void Pes6MatchObj28_SetPosition(float x, float y, float z) {
    Pes6MatchObj28_Position[0] = x;
    Pes6MatchObj28_Position[1] = y;
    Pes6MatchObj28_Position[2] = z;
    Pes6MatchObj28_Position[3] = 1.0f;
}
