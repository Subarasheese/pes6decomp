/* compiler: mwcc-3.0.1b210 */
struct CallbackState {
    unsigned char unknown00[0x4C];
    void (*callbacks[3])(int);
    int remaining;
    int selected;
};
extern char D_005E5D90[];
extern char D_005E5DEC[];
void func_002D59A0(void) {
    struct CallbackState *state = (struct CallbackState *)D_005E5D90;
    if (*(int *)D_005E5DEC != 3 && state->remaining != 0) {
        if (--state->remaining == 0) {
            void (*callback)(int) = state->callbacks[state->selected];
            if (callback != 0) {
                callback(3);
                state->selected = 3;
            }
        }
    }
}
