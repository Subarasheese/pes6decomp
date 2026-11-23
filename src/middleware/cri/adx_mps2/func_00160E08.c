/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, ADXM_SetCbVsyncFrame, from crashbashash/DW4_Decomp, src/cri/adxps2.c. See
 * THIRD_PARTY.md. */

typedef struct AdxmCallback {
    void (*func)(void *arg);
    void *arg;
} AdxmCallback;
extern AdxmCallback D_0050E310;
extern AdxmCallback D_0050E318;
void func_00160E08(void (*vsync_func)(void *), void *vsync_obj, void (*sleep_func)(void *),
                   void *sleep_obj) {
    D_0050E310.func = vsync_func;
    D_0050E310.arg = vsync_obj;
    D_0050E318.func = sleep_func;
    D_0050E318.arg = sleep_obj;
}
