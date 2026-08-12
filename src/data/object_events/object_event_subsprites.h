#define SUBSPRITE_TABLE_ENTRY(x) {ARRAY_COUNT(x), x}
#define SUBSPRITE_SHAPE(w, h) .shape = SPRITE_SHAPE(w##x##h), .size = SPRITE_SIZE(w##x##h)

const struct Subsprite gObjectEventSpriteOamTable_16x16_0[] = {
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x16_1[] = {
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x16_2[] = {
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8,
        .y = 0,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 2,
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x16_3[] = {
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x16_4[] = {
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 3
    }
};

const struct SubspriteTable gObjectEventSpriteOamTables_16x16[] = {
    {0, NULL},
    {1, gObjectEventSpriteOamTable_16x16_0},
    {1, gObjectEventSpriteOamTable_16x16_1},
    {2, gObjectEventSpriteOamTable_16x16_2},
    {2, gObjectEventSpriteOamTable_16x16_3},
    {2, gObjectEventSpriteOamTable_16x16_4},
};

const struct Subsprite gObjectEventSpriteOamTable_16x32_0[] = {
    {
        .x = -8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x32),
        .size = SPRITE_SIZE(16x32),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x32_1[] = {
    {
        .x = -8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x32),
        .size = SPRITE_SIZE(16x32),
        .tileOffset = 0,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x32_2[] = {
    {
        .x = -8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8,
        .y = 0,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = -8,
        .y = 8,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 6,
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x32_3[] = {
    {
        .x = -8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8,
        .y = 0,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 4,
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_16x32_4[] = {
    {
        .x = -8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -8,
        .y = 0,
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .tileOffset = 4,
        .priority = 3
    }
};

const struct SubspriteTable gObjectEventSpriteOamTables_16x32[] = {
    {0, NULL},
    {1, gObjectEventSpriteOamTable_16x32_0},
    {1, gObjectEventSpriteOamTable_16x32_1},
    {3, gObjectEventSpriteOamTable_16x32_2},
    {2, gObjectEventSpriteOamTable_16x32_3},
    {2, gObjectEventSpriteOamTable_16x32_4},
};

const struct Subsprite gObjectEventSpriteOamTable_32x32_0[] = {
    {
        .x = -16,
        .y = -16,
        .shape = SPRITE_SHAPE(32x32),
        .size = SPRITE_SIZE(32x32),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_32x32_1[] = {
    {
        .x = -16,
        .y = -16,
        .shape = SPRITE_SHAPE(32x32),
        .size = SPRITE_SIZE(32x32),
        .tileOffset = 0,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_32x32_2[] = {
    {
        .x = -16,
        .y = -16,
        .shape = SPRITE_SHAPE(32x16),
        .size = SPRITE_SIZE(32x16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = -16, 
        .y = 8, 
        .shape = SPRITE_SHAPE(32x8), 
        .size = SPRITE_SIZE(32x8), 
        .tileOffset = 12, 
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_32x32_3[] = {
    {
        .x = -16,
        .y = -16,
        .shape = SPRITE_SHAPE(32x16),
        .size = SPRITE_SIZE(32x16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x16),
        .size = SPRITE_SIZE(32x16),
        .tileOffset = 8,
        .priority = 3
    }
};

const struct Subsprite gObjectEventSpriteOamTable_32x32_4[] = {
    {
        .x = -16,
        .y = -16,
        .shape = SPRITE_SHAPE(32x16),
        .size = SPRITE_SIZE(32x16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x16),
        .size = SPRITE_SIZE(32x16),
        .tileOffset = 8,
        .priority = 3
    }
};

const struct SubspriteTable gObjectEventSpriteOamTables_32x32[] = {
    {0, NULL},
    {1, gObjectEventSpriteOamTable_32x32_0},
    {1, gObjectEventSpriteOamTable_32x32_1},
    {3, gObjectEventSpriteOamTable_32x32_2},
    {2, gObjectEventSpriteOamTable_32x32_3},
    {2, gObjectEventSpriteOamTable_32x32_4},
};

/* const struct Subsprite gObjectEventSpriteOamTable_48x48[] = {
    {
        .x = -24,
        .y = -24,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 8,
        .y = -24,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = -24,
        .y = -16,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x = 8,
        .y = -16,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 10,
        .priority = 2
    },
    {
        .x = -24,
        .y = -8,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x = 8,
        .y = -8,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = -24,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 18,
        .priority = 2
    },
    {
        .x = 8,
        .y = 0,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -24,
        .y = 8,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x = 8,
        .y = 8,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = -24,
        .y = 16,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 30,
        .priority = 2
    },
    {
        .x = 8,
        .y = 16,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 34,
        .priority = 2
    }
};

// Unused. Used by the moving truck in RS
const struct SubspriteTable gObjectEventSpriteOamTables_48x48[] = {
    {12, gObjectEventSpriteOamTable_48x48},
    {12, gObjectEventSpriteOamTable_48x48},
    {12, gObjectEventSpriteOamTable_48x48},
    {12, gObjectEventSpriteOamTable_48x48},
    {12, gObjectEventSpriteOamTable_48x48},
    {12, gObjectEventSpriteOamTable_48x48},
}; */

const struct Subsprite gObjectEventSpriteOamTable_64x32_0[] = {
    {
        .x = -32,
        .y = -16,
		SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x32_1[] = {
    {
        .x = -32,
        .y = -16,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x32_2[] = {
    {
        .x = -32,
        .y = -16,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x32_3[] = {
    {
        .x = -32,
        .y = -16,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    }
};

// Unused
const struct SubspriteTable gObjectEventSpriteOamTables_64x32[] = {
    {0, NULL},
    {1, gObjectEventSpriteOamTable_64x32_0},
    {1, gObjectEventSpriteOamTable_64x32_1},
    {1, gObjectEventSpriteOamTable_64x32_2},
    {1, gObjectEventSpriteOamTable_64x32_3},
    {1, gObjectEventSpriteOamTable_64x32_3},
};

const struct Subsprite gObjectEventSpriteOamTable_64x64_0[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 64),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x64_1[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 64),
        .tileOffset = 0,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x64_2[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 64),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_64x64_3[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 64),
        .tileOffset = 0,
        .priority = 2
    }
};

const struct SubspriteTable gObjectEventSpriteOamTables_64x64[] = {
    {0, NULL},
    {1, gObjectEventSpriteOamTable_64x64_0},
    {1, gObjectEventSpriteOamTable_64x64_1},
    {1, gObjectEventSpriteOamTable_64x64_2},
    {1, gObjectEventSpriteOamTable_64x64_3},
    {1, gObjectEventSpriteOamTable_64x64_3},
};

const struct Subsprite gObjectEventSpriteOamTable_96x40_0[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 20,
        .priority = 2
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 36,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 40,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 44,
        .priority = 2
    },
    {
        .x = -48,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 48,
        .priority = 2
    },
    {
        .x = -16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 52,
        .priority = 2
    },
    {
        .x = 16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 56,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_96x40_1[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 12,
        .priority = 1
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 16,
        .priority = 1
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 20,
        .priority = 1
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 24,
        .priority = 1
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 28,
        .priority = 1
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 32,
        .priority = 1
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 36,
        .priority = 1
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 40,
        .priority = 1
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 44,
        .priority = 1
    },
    {
        .x = -48,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 48,
        .priority = 1
    },
    {
        .x = -16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 52,
        .priority = 1
    },
    {
        .x = 16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 56,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_96x40_2[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 20,
        .priority = 2
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 36,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 40,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 44,
        .priority = 2
    },
    {
        .x = -48,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 48,
        .priority = 2
    },
    {
        .x = -16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 52,
        .priority = 2
    },
    {
        .x = 16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 56,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_96x40_3[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 12,
        .priority = 1
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 16,
        .priority = 1
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 20,
        .priority = 1
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 36,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 40,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 44,
        .priority = 2
    },
    {
        .x = -48,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 48,
        .priority = 2
    },
    {
        .x = -16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 52,
        .priority = 2
    },
    {
        .x = 16,
        .y = 12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 56,
        .priority = 2
    }
};

// Unused. Used by the SS Tidal in RS
const struct SubspriteTable gObjectEventSpriteOamTables_96x40[] = {
    {15, gObjectEventSpriteOamTable_96x40_0},
    {15, gObjectEventSpriteOamTable_96x40_0},
    {15, gObjectEventSpriteOamTable_96x40_1},
    {15, gObjectEventSpriteOamTable_96x40_2},
    {15, gObjectEventSpriteOamTable_96x40_3},
    {15, gObjectEventSpriteOamTable_96x40_3},
};

const struct Subsprite gObjectEventSpriteOamTable_128x64_0[] = {
    {
        .x = -32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 64,
        .priority = 2
    },
    {
        .x = 32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 96,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_128x64_1[] = {
    {
        .x = -32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 32,
        .priority = 1
    },
    {
        .x = -32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 64,
        .priority = 1
    },
    {
        .x = 32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 96,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_128x64_2[] = {
    {
        .x = -32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 32,
        .y = -16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 32,
        .priority = 1
    },
    {
        .x = -32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 64,
        .priority = 2
    },
    {
        .x = 32,
        .y = 16,
        .shape = SPRITE_SHAPE(64x32),
        .size = SPRITE_SIZE(64x32),
        .tileOffset = 96,
        .priority = 2
    }
};

const struct SubspriteTable gObjectEventSpriteOamTables_128x64[] = {
    {4, gObjectEventSpriteOamTable_128x64_0},
    {4, gObjectEventSpriteOamTable_128x64_0},
    {4, gObjectEventSpriteOamTable_128x64_1},
    {4, gObjectEventSpriteOamTable_128x64_2},
    {4, gObjectEventSpriteOamTable_128x64_2},
    {4, gObjectEventSpriteOamTable_128x64_2},
};

const struct Subsprite gObjectEventSpriteOamTable_88x32_0[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = 32,
        .y = -20,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 10,
        .priority = 2
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 11,
        .priority = 2
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 15,
        .priority = 2
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 19,
        .priority = 2
    },
    {
        .x = 32,
        .y = -12,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 21,
        .priority = 2
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 26,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 30,
        .priority = 2
    },
    {
        .x = 32,
        .y = -4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 33,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 37,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 41,
        .priority = 2
    },
    {
        .x = 32,
        .y = 4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 43,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_88x32_1[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = 32,
        .y = -20,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 10,
        .priority = 1
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 11,
        .priority = 1
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 15,
        .priority = 1
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 19,
        .priority = 1
    },
    {
        .x = 32,
        .y = -12,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 21,
        .priority = 1
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 22,
        .priority = 1
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 26,
        .priority = 1
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 30,
        .priority = 1
    },
    {
        .x = 32,
        .y = -4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 32,
        .priority = 1
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 33,
        .priority = 1
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 37,
        .priority = 1
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 41,
        .priority = 1
    },
    {
        .x = 32,
        .y = 4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 43,
        .priority = 1
    }
};

const struct Subsprite gObjectEventSpriteOamTable_88x32_2[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = 32,
        .y = -20,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 10,
        .priority = 2
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 11,
        .priority = 2
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 15,
        .priority = 2
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 19,
        .priority = 2
    },
    {
        .x = 32,
        .y = -12,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 21,
        .priority = 2
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 26,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 30,
        .priority = 2
    },
    {
        .x = 32,
        .y = -4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 33,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 37,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 41,
        .priority = 2
    },
    {
        .x = 32,
        .y = 4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 43,
        .priority = 2
    }
};

const struct Subsprite gObjectEventSpriteOamTable_88x32_3[] = {
    {
        .x = -48,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16,
        .y = -20,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = 16,
        .y = -20,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = 32,
        .y = -20,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 10,
        .priority = 1
    },
    {
        .x = -48,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 11,
        .priority = 1
    },
    {
        .x = -16,
        .y = -12,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 15,
        .priority = 1
    },
    {
        .x = 16,
        .y = -12,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 19,
        .priority = 1
    },
    {
        .x = 32,
        .y = -12,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 21,
        .priority = 1
    },
    {
        .x = -48,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -16,
        .y = -4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 26,
        .priority = 2
    },
    {
        .x = 16,
        .y = -4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 30,
        .priority = 2
    },
    {
        .x = 32,
        .y = -4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = -48,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 33,
        .priority = 2
    },
    {
        .x = -16,
        .y = 4,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 37,
        .priority = 2
    },
    {
        .x = 16,
        .y = 4,
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .tileOffset = 41,
        .priority = 2
    },
    {
        .x = 32,
        .y = 4,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = 43,
        .priority = 2
    }
};

/* // Unused. Used by the submarine shadow in RS
const struct SubspriteTable gObjectEventSpriteOamTables_88x32[] = {
    {16, gObjectEventSpriteOamTable_88x32_0},
    {16, gObjectEventSpriteOamTable_88x32_0},
    {16, gObjectEventSpriteOamTable_88x32_1},
    {16, gObjectEventSpriteOamTable_88x32_2},
    {16, gObjectEventSpriteOamTable_88x32_3},
    {16, gObjectEventSpriteOamTable_88x32_3},
}; */

#if LARGE_OW_SUPPORT
// These tables allow (virtual) sprite sizes so that
// some space can be saved by making graphics smaller.
// Note: When using these for followers, the minimum
// `size` you must set in GraphicsInfo is 512.

static const struct Subsprite gObjectEventSpriteOamTable_16x24_0[] = {
    {
        .x = -8, .y = -12,
        SUBSPRITE_SHAPE(16, 16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 2
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_16x24_1[] = {
    {
        .x = -8, .y = -12,
        SUBSPRITE_SHAPE(16, 16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -8, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 1
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_16x24_2[] = {
    {
        .x = -8, .y = -12,
        SUBSPRITE_SHAPE(16, 16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_16x24_3[] = {
    {
        .x = -8, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -8, .y = -4,
        SUBSPRITE_SHAPE(16, 16),
        .tileOffset = 2,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_16x24_4[] = {
    {
        .x = -8, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -8, .y = -4,
        SUBSPRITE_SHAPE(16, 16),
        .tileOffset = 2,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_32x24_0[] = {
    {
        .x = -16, .y = -12,
        SUBSPRITE_SHAPE(32, 16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16, .y = 4,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 8,
        .priority = 2
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_32x24_1[] = {
    {
        .x = -16, .y = -12,
        SUBSPRITE_SHAPE(32, 16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16, .y = 4,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 8,
        .priority = 1
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_32x24_2[] = {
    {
        .x = -16, .y = -12,
        SUBSPRITE_SHAPE(32, 16),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16, .y = 4,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 8,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_32x24_3[] = {
    {
        .x = -16, .y = -12,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -16, .y = -4,
        SUBSPRITE_SHAPE(32, 16),
        .tileOffset = 4,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_32x24_4[] = {
    {
        .x = -16, .y = -12,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -16, .y = -4,
        SUBSPRITE_SHAPE(32, 16),
        .tileOffset = 4,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x16_0[] = {
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x16_1[] = {
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 1
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 1
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 1
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x16_2[] = {
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 3
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x16_3[] = {
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 3
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 3
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 3
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x24_0[] = {
    {
        .x = -12, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -12,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = -4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
    {
        .x = -12, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x = 4, .y = 4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 2
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x24_1[] = {
    {
        .x = -12, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 4, .y = -12,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 1
    },
    {
        .x = -12, .y = -4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 1
    },
    {
        .x = 4, .y = -4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 1
    },
    {
        .x = -12, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 1
    },
    {
        .x = 4, .y = 4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 1
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x24_2[] = {
    {
        .x = -12, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -12,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = -4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
    {
        .x = -12, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 3
    },
    {
        .x = 4, .y = 4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x24_3[] = {
    {
        .x = -12, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -12,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 3
    },
    {
        .x = 4, .y = -4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 3
    },
    {
        .x = -12, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 3
    },
    {
        .x = 4, .y = 4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x24_4[] = {
    {
        .x = -12, .y = -12,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 4, .y = -12,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 1
    },
    {
        .x = -12, .y = -4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 3
    },
    {
        .x = 4, .y = -4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 3
    },
    {
        .x = -12, .y = 4,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 3
    },
    {
        .x = 4, .y = 4,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x32_0[] = {
    {
        .x = -12, .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -16,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = -12, .y = 8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 9,
        .priority = 2
    },
    {
        .x = 4, .y = 8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 11,
        .priority = 2
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x32_1[] = {
    {
        .x = -12, .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 4, .y = -16,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 1
    },
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 1
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 1
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 1
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = -12, .y = 8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 9,
        .priority = 1
    },
    {
        .x = 4, .y = 8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 11,
        .priority = 1
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x32_2[] = {
    {
        .x = -12, .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -16,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 2
    },
    {
        .x = -12, .y = 8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 9,
        .priority = 3
    },
    {
        .x = 4, .y = 8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 11,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x32_3[] = {
    {
        .x = -12, .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = 4, .y = -16,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 2
    },
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 2
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 2
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 3
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 3
    },
    {
        .x = -12, .y = 8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 9,
        .priority = 3
    },
    {
        .x = 4, .y = 8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 11,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_24x32_4[] = {
    {
        .x = -12, .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 4, .y = -16,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 2,
        .priority = 1
    },
    {
        .x = -12, .y = -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 3,
        .priority = 1
    },
    {
        .x = 4, .y = -8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 5,
        .priority = 1
    },
    {
        .x = -12, .y = 0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 6,
        .priority = 3
    },
    {
        .x = 4, .y = 0,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 8,
        .priority = 3
    },
    {
        .x = -12, .y = 8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 9,
        .priority = 3
    },
    {
        .x = 4, .y = 8,
        SUBSPRITE_SHAPE(8, 8),
        .tileOffset = 11,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_Follower[] = {
    {
        .x = -32, .y = -32,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -32, .y = 0,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 32,
        .priority = 2
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_HotSprings[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -32,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = 0,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 36,
        .priority = 2
    },
    {
        .x = -32,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 40,
        .priority = 2
    },
    {
        .x = 0,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 44,
        .priority = 2
    },
    {
        .x = -32,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 48,
        .priority = 2
    },
    {
        .x = 0,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 52,
        .priority = 2
    },
    {
        .x = -32,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 56,
        .priority = 3
    },
    {
        .x = 0,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 60,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_Grass2[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -32,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 32,
        .priority = 2
    },
    {
        .x = 0,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 36,
        .priority = 2
    },
    {
        .x = -32,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 40,
        .priority = 2
    },
    {
        .x = 0,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 44,
        .priority = 2
    },
    {
        .x = -32,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 48,
        .priority = 3
    },
    {
        .x = 0,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 52,
        .priority = 3
    },
    {
        .x = -32,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 56,
        .priority = 3
    },
    {
        .x = 0,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 60,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_Grass1[] = {
    {
        .x = -32,
        .y = -32,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -32,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 32,
        .priority = 1
    },
    {
        .x = 0,
        .y = 0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 36,
        .priority = 1
    },
    {
        .x = -32,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 40,
        .priority = 1
    },
    {
        .x = 0,
        .y = 8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 44,
        .priority = 1
    },
    {
        .x = -32,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 48,
        .priority = 3
    },
    {
        .x = 0,
        .y = 16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 52,
        .priority = 3
    },
    {
        .x = -32,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 56,
        .priority = 3
    },
    {
        .x = 0,
        .y = 24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 60,
        .priority = 3
    },
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_Grass3[] = {
    {
        .x = -32,
        .y = -24,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x = -32,
        .y = 8,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 32,
        .priority = 3
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_64x64_Grass4[] = {
    {
        .x = -32,
        .y = -24,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = -32,
        .y = 8,
        SUBSPRITE_SHAPE(64, 32),
        .tileOffset = 32,
        .priority = 3
    }
};


static const struct SubspriteTable gObjectEventSpriteOamTables_16x24[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_1),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_2),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_3),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_16x24_4),
};


static const struct SubspriteTable gObjectEventSpriteOamTables_24x16[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_1),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_2),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_3),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x16_3),
};

static const struct SubspriteTable gObjectEventSpriteOamTables_24x24[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_0), // reflections
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_0), // all 2
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_1), // all 1
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_2), // bottom 8 3
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_3), // bottom 16 3
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x24_4), // top 1, bottom 16 3
};

static const struct SubspriteTable gObjectEventSpriteOamTables_24x32[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_1),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_2),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_3),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_24x32_4),
};


static const struct SubspriteTable gObjectEventSpriteOamTables_32x24[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_0),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_1),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_2),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_3),
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_32x24_4),
};


// For following pokemon
// Makes the top 32 pixels priority 1,
// so that very tall pokemon's heads
// will appear on top of buildings, etc.
static const struct SubspriteTable gObjectEventSpriteOamTables_64x64_Tall[] = {
    {}, // unused
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Follower), // elevation 3
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_1), // elevation 4
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_HotSprings), // hot springs
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Grass2), // long grass
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Grass1) // long grass priority 1
};

// Like gObjectEventSpriteOamTables_64x64_Tall, but fewer pixels visible in long grass
// Meant for pokemon that are more long than tall like Wailord
static const struct SubspriteTable gObjectEventSpriteOamTables_64x64_Long[] = {
    {}, // unused
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Follower), // elevation 3
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_1), // elevation 4
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_HotSprings), // hot springs
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Grass3), // long grass
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_64x64_Grass4) // long grass priority 1
};
#endif

static const struct Subsprite gObjectEventSpriteOamTable_48x48[] = {
    {
        .x = -24,
        .y = -24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x =   8,
        .y = -24,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = -24,
        .y = -16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 6,
        .priority = 1
    },
    {
        .x =   8,
        .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 10,
        .priority = 1
    },
    {
        .x = -24,
        .y =  -8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x =   8,
        .y =  -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = -24,
        .y =   0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 18,
        .priority = 2
    },
    {
        .x =   8,
        .y =   0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -24,
        .y =   8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x =   8,
        .y =   8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = -24,
        .y =  16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 30,
        .priority = 2
    },
    {
        .x =   8,
        .y =  16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 34,
        .priority = 2
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_48x48_4[] = {
    {
        .x = -24,
        .y = -24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x =   8,
        .y = -24,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = -24,
        .y = -16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 6,
        .priority = 1
    },
    {
        .x =   8,
        .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 10,
        .priority = 1
    },
    {
        .x = -24,
        .y =  -8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 12,
        .priority = 1
    },
    {
        .x =   8,
        .y =  -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 16,
        .priority = 1
    },
    {
        .x = -24,
        .y =   0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 18,
        .priority = 1
    },
    {
        .x =   8,
        .y =   0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 22,
        .priority = 1
    },
    {
        .x = -24,
        .y =   8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 24,
        .priority = 1
    },
    {
        .x =   8,
        .y =   8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 28,
        .priority = 1
    },
    {
        .x = -24,
        .y =  16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 30,
        .priority = 1
    },
    {
        .x =   8,
        .y =  16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 34,
        .priority = 1
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_48x48_HotSprings[] = {
    {
        .x = -24,
        .y = -24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x =   8,
        .y = -24,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = -24,
        .y = -16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x =   8,
        .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 10,
        .priority = 2
    },
    {
        .x = -24,
        .y =  -8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x =   8,
        .y =  -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = -24,
        .y =   0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 18,
        .priority = 2
    },
    {
        .x =   8,
        .y =   0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -24,
        .y =   8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 24,
        .priority = 2
    },
    {
        .x =   8,
        .y =   8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 28,
        .priority = 2
    },
    {
        .x = -24,
        .y =  16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 30,
        .priority = 3
    },
    {
        .x =   8,
        .y =  16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 34,
        .priority = 3
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_48x48_Grass2[] = {
    {
        .x = -24,
        .y = -24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 2
    },
    {
        .x =   8,
        .y = -24,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 2
    },
    {
        .x = -24,
        .y = -16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 6,
        .priority = 2
    },
    {
        .x =   8,
        .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 10,
        .priority = 2
    },
    {
        .x = -24,
        .y =  -8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 12,
        .priority = 2
    },
    {
        .x =   8,
        .y =  -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 16,
        .priority = 2
    },
    {
        .x = -24,
        .y =   0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 18,
        .priority = 2
    },
    {
        .x =   8,
        .y =   0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 22,
        .priority = 2
    },
    {
        .x = -24,
        .y =   8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 24,
        .priority = 3
    },
    {
        .x =   8,
        .y =   8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 28,
        .priority = 3
    },
    {
        .x = -24,
        .y =  16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 30,
        .priority = 3
    },
    {
        .x =   8,
        .y =  16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 34,
        .priority = 3
    }
};

static const struct Subsprite gObjectEventSpriteOamTable_48x48_Grass1[] = {
    {
        .x = -24,
        .y = -24,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x =   8,
        .y = -24,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 4,
        .priority = 1
    },
    {
        .x = -24,
        .y = -16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 6,
        .priority = 1
    },
    {
        .x =   8,
        .y = -16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 10,
        .priority = 1
    },
    {
        .x = -24,
        .y =  -8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 12,
        .priority = 1
    },
    {
        .x =   8,
        .y =  -8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 16,
        .priority = 1
    },
    {
        .x = -24,
        .y =   0,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 18,
        .priority = 1
    },
    {
        .x =   8,
        .y =   0,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 22,
        .priority = 1
    },
    {
        .x = -24,
        .y =   8,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 24,
        .priority = 3
    },
    {
        .x =   8,
        .y =   8,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 28,
        .priority = 3
    },
    {
        .x = -24,
        .y =  16,
        SUBSPRITE_SHAPE(32, 8),
        .tileOffset = 30,
        .priority = 3
    },
    {
        .x =   8,
        .y =  16,
        SUBSPRITE_SHAPE(16, 8),
        .tileOffset = 34,
        .priority = 3
    }
};
// Usually unused. Used for truck and the submarine shadow in RS
static const struct SubspriteTable gObjectEventSpriteOamTables_48x48[] = {
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48), // reflections
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48), // elevation 3
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48_4), // elevation 4
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48_HotSprings), // hot springs
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48_Grass2), // long grass
    SUBSPRITE_TABLE_ENTRY(gObjectEventSpriteOamTable_48x48_Grass1) // long grass priority 1
};