#ifndef PES6_MATCH_WEATHER_H
#define PES6_MATCH_WEATHER_H

#include "types.h"
typedef struct {
    f32 temperature, humidity;
    u8 precipitation, reserved09;
    u16 airPressure;
    u8 strength, reserved0d[3];
    f32 windX, windZ;
    u8 seasonFlag;
} MatchWeather;
typedef struct {
    u8 stadium, weather, month, time, seed, region, variation;
} WeatherOptions;
typedef struct {
    u8 stadium, weather, chance, month, time, seed, variation;
} StadiumWeatherInput;
typedef union {
    struct {
        u8 kind, altitude;
        s16 temperature, windType, precipitationType;
    } values;
    s16 words[4];
} StadiumClimate;
typedef struct {
    s8 annualTemp, daily, annualHumidity, hemisphere;
    u32 humidity;
    f32 hour;
} WeatherClimate;
enum { WEATHER_CLEAR = 0, WEATHER_RAIN = 1, WEATHER_SNOW = 2, WEATHER_RANDOM = 3 };
#define WEATHER_FULL_TURN 6.2831855f
#define WEATHER_QUARTER_TURN 1.5707964f
extern WeatherClimate D_005A2490[];
extern u8 D_003E9CD0;
extern f32 func_0011D468(f32 angle);
static inline f32 weatherRandom(void) {
    s32 next = (D_003E9CD0 ^ (D_003E9CD0 << 5)) & 255;
    next = (next ^ (next >> 3)) & 255;
    next ^= next << 5;
    D_003E9CD0 = next;
    return (f32)((s32)(u8)next - 1) / 254.0f;
}
extern void func_00351F30(s32 stadium);
extern const StadiumClimate *func_00351F20(void);
extern s32 func_00293840(MatchWeather *weather, const WeatherOptions *options);
extern WeatherOptions *func_00295280(void);
extern void func_00294C60(const WeatherOptions *, const StadiumClimate *);
extern void func_00294A40(MatchWeather *, const WeatherOptions *, const StadiumClimate *);
extern void func_00294720(MatchWeather *, const WeatherOptions *);
extern void func_002941E0(MatchWeather *, const WeatherOptions *, const StadiumClimate *);
extern void func_00293E80(MatchWeather *, const WeatherOptions *, const StadiumClimate *);
extern void func_00293DE0(MatchWeather *, const WeatherOptions *);
extern void func_00293960(MatchWeather *, const WeatherOptions *, const StadiumClimate *);
extern s32 func_00295170(WeatherOptions *, StadiumWeatherInput *, const u8 *);
extern void func_00295610(void), func_00295650(StadiumWeatherInput *, const u8 *);
typedef char check_stadium_climate_size[sizeof(StadiumClimate) == 8 ? 1 : -1];

#endif
