/* compiler: mwcc-3.0.1b210 */
extern float __floatdisf(unsigned long);
float __floatundisf(unsigned long a) {
    if ((long)a > 0)
        return __floatdisf(a);
    {
        float r = __floatdisf((a >> 1) | (a & 1));
        return r + r;
    }
}
