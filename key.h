#ifndef KEY_H
#define KEY_H

enum xci_key {
   TITLE = 0,
   AUTHOR,
   PALETTE,
   TILES_HEX,
   SPRITES_HEX,
   MENU_XCI,
   TITLE_SCREEN,
   INIT_CURSOR,
   ZONE,
   MENU_BG,
   MENU_FG,
   MENU_LC,
   MENU_SP,
   MENU_RC,
   MENU_DIV,
   MENU_CHECK,
   MENU_UNCHECK,
   MENU,
   MENU_ITEM,
   CONTROLS,
   ABOUT,
   TEXT1_BG,
   TEXT1_FG,
   TEXT2_BG,
   TEXT2_FG,
   TEXT3_BG,
   TEXT3_FG,
   TB_HEIGHT,
   TB_WIDTH,
   TOOL,
   TOOL_TILES,
   INVENTORY,
   WALK,
   RUN,
   LOOK,
   USE,
   TALK,
   STRIKE,
   DURATION,
   BITMAP,
   MUSIC,
   SPRITE_FRAMES,
   SPRITE,
   TILES,
   WAIT,
   SPRITE_MOVE,
   INV_DIM,
   INV_ITEM_DIM,
   INV_EMPTY,
   INV_LEFT_MARGIN,
   INV_RIGHT_MARGIN,
   INV_QUANT,
   INV_QUANT_MARGIN,
   INV_SCROLL,
   INV_SCROLL_MARGIN,
   INV_ITEM,


   NUM_XCI_KEYS
};
typedef enum xci_key xci_key_t;

#define MAX_KEY_LENGTH 31

xci_key_t key2idx(const char* key);
const char* idx2key(xci_key_t index);

#endif // KEY_H