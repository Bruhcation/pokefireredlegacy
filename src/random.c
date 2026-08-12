#include "global.h"
#include "random.h"

// The number 1103515245 comes from the example implementation
// of rand and srand in the ISO C standard.

COMMON_DATA u32 gRngValue = 0;
COMMON_DATA u32 gRng2Value = 0;


u16 Random(void)
{
    gRngValue = ISO_RANDOMIZE1(gRngValue);
    return gRngValue >> 16;
}

void SeedRng(u16 seed)
{
    gRngValue = seed;
}

void SeedRng2(u16 seed)
{
    gRng2Value = seed;
}

u16 Random2(void)
{
    gRng2Value = ISO_RANDOMIZE1(gRng2Value);
    return gRng2Value >> 16;
}

// Returns a random index according to a list of weights
u8 RandomWeightedIndex(u8 *weights, u8 length) {
    u32 i;
    u16 randomValue;
    u16 weightSum = 0;
    for (i = 0; i < length; i++)
        weightSum += weights[i];
    randomValue = weightSum > 0 ? Random() % weightSum : 0;
    weightSum = 0;
    for (i = 0; i < length; i++) {
        weightSum += weights[i];
        if (randomValue <= weightSum)
            return i;
    }
}
