/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, ADX_GetCoefficient, from crashbashash/DW4_Decomp, src/cri/adxdcd.c. See
 * THIRD_PARTY.md. */

extern float cosf(float);
extern float sqrtf(float);
void func_00159EC8(int highpass_frequency, int sample_rate, short *coef1_ptr, short *coef2_ptr) {
    float a;
    float b;
    float r;
    float s;
    float c;
    s = sqrtf(2.0f);
    c = cosf((((float)highpass_frequency) * 6.2831851f) / ((float)sample_rate));
    a = s - c;
    b = sqrtf(2.0f) - 1.0f;
    r = (a - sqrtf((a + b) * (a - b))) / b;
    *coef1_ptr = (short)((int)((2.0f * r) * 4096.0f));
    *coef2_ptr = (short)((int)(((-r) * r) * 4096.0f));
}
