/* compiler: mwcc-3.0.1b210 */
struct TransitionState {
    unsigned char unknown00[0x34];
    void (*update)(void);
};
extern struct TransitionState *D_003E7614;
extern char D_0092F0FC[];
extern char D_0092F0FF[];

extern char D_00591BE4[];
extern void func_002D33D0(int, int);
extern void func_002D5F50(void);
void func_002D5C30(void) {
    unsigned char status = ((unsigned char *)D_0092F0FF)[*(unsigned char *)D_0092F0FC];
    if (status != 2 && status != 1) {
        func_002D33D0(1, 10000 / *(unsigned char *)D_00591BE4);
        if (D_003E7614->update != 0 && func_002D5C30 == D_003E7614->update) {
            D_003E7614->update = 0;
        }
        if (D_003E7614->update == 0) {
            D_003E7614->update = func_002D5F50;
        }
    }
}
