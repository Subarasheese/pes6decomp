/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"

void func_0027D650(u8 action)
{
    u8 i;

    if (Pes6Ball_Current->touchActors[0] != Pes6MatchState_Current.touchActors[0]) {
        for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH - 1; i++) {
            Pes6Ball_Current->actorActions[9 - i] = Pes6Ball_Current->actorActions[8 - i];
        }
        Pes6Ball_Current->actorActions[0] = action;
    }

    if (Pes6Ball_Current->touchActors[0] != Pes6MatchState_Current.touchActors[0] ||
        Pes6Ball_Current->action != action) {
        for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH - 1; i++) {
            Pes6Ball_Current->touchActions[9 - i] = Pes6Ball_Current->touchActions[8 - i];
            Pes6Ball_Current->touchActors[9 - i] = Pes6Ball_Current->touchActors[8 - i];
        }
        Pes6Ball_Current->touchActions[0] = action;
        Pes6Ball_Current->touchActors[0] = Pes6MatchState_Current.touchActors[0];
    }

    if (Pes6Ball_Current->action != action) {
        if (Pes6Ball_Current->actionFrames != 0) {
            for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH - 1; i++) {
                Pes6Ball_Current->previousActions[9 - i] = Pes6Ball_Current->previousActions[8 - i];
                Pes6Ball_Current->previousActionFrames[9 - i] = Pes6Ball_Current->previousActionFrames[8 - i];
            }
            Pes6Ball_Current->previousActions[0] = (u8)Pes6Ball_Current->action;
            Pes6Ball_Current->previousActionFrames[0] = Pes6Ball_Current->actionFrames;
            Pes6Ball_Current->action = action;
            Pes6Ball_Current->actionFrames = 0;
        } else {
            Pes6Ball_Current->action = action;
        }
    }
}
