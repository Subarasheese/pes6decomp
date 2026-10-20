#ifndef PES6_MATCH_OBJECTS_H
#define PES6_MATCH_OBJECTS_H

#include "types.h"

/* Match objects are addressed by an 8-bit id (func_002A11B0 returns the world
 * position of one, func_002A1110 its 16-bit heading): ids 0-0x16 live in a
 * 0x240-byte array at 0x58E5B0, 0x17-0x1A come from func_00299FE0, 0x1B from a
 * pointer in small data and 0x1C (28) is a free-standing object whose state
 * is these globals. Observed in a live match: ids 1-22 are the players and
 * 0x1B is the ball. Positions are world coordinates, about 255 units per
 * metre, with height as NEGATIVE y (a ball resting on the grass has
 * y = -28, its radius). */
extern float Pes6MatchObj28_Position[4]; /* x, y, z, w = 1 */
extern u16 Pes6MatchObj28_Heading[];

void Pes6MatchObj28_SetPosition(float x, float y, float z);
void Pes6MatchObj28_SetPositionScaled(float x, float y, float z);
#endif
