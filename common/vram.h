#pragma once

#define TOP_VRAM    (400*240*4)
#define BOTTOM_VRAM (320*240*4)

#define VRAM_START  (0x18300000)

#define VRAM_TOP_LA (VRAM_START)
#define VRAM_BOT_A  (VRAM_TOP_LA + TOP_VRAM)

#define VRAM_END    (VRAM_BOT_A + BOTTOM_VRAM)
