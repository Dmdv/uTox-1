enum {
    THEME_DEFAULT,
    THEME_LIGHT,
    THEME_DARK,
    THEME_HIGHCONTRAST
    // @TODO
    // THEME_XRESOURCE
};

uint32_t COLOR_MAIN_BACKGROUND;
uint32_t COLOR_MAIN_TEXT;
uint32_t COLOR_MAIN_CHATTEXT;
uint32_t COLOR_MAIN_SUBTEXT;
uint32_t COLOR_MAIN_ACTIONTEXT;
uint32_t COLOR_MAIN_QUOTETEXT;
uint32_t COLOR_MAIN_URLTEXT;
uint32_t COLOR_MAIN_HINTTEXT;
uint32_t COLOR_MENU_BACKGROUND;
uint32_t COLOR_MENU_TEXT;
uint32_t COLOR_MENU_SUBTEXT;
uint32_t COLOR_MENU_HOVER_BACKGROUND;
uint32_t COLOR_MENU_ACTIVE_BACKGROUND;
uint32_t COLOR_MENU_ACTIVE_TEXT;
uint32_t COLOR_LIST_BACKGROUND;
uint32_t COLOR_LIST_HOVER_BACKGROUND;
uint32_t COLOR_LIST_TEXT;
uint32_t COLOR_LIST_SUBTEXT;
uint32_t COLOR_SELECTION_BACKGROUND;
uint32_t COLOR_SELECTION_TEXT;
uint32_t COLOR_GROUP_UNUSUAL;
uint32_t COLOR_EDGE_NORMAL;
uint32_t COLOR_EDGE_ACTIVE;
uint32_t COLOR_EDGE_HOVER;
uint32_t COLOR_ACTIVEOPTION_BACKGROUND;
uint32_t COLOR_ACTIVEOPTION_TEXT;
uint32_t COLOR_STATUS_ONLINE;
uint32_t COLOR_STATUS_AWAY;
uint32_t COLOR_STATUS_BUSY;
uint32_t COLOR_BUTTON_SUCCESS_BACKGROUND;
uint32_t COLOR_BUTTON_WARNING_BACKGROUND;
uint32_t COLOR_BUTTON_DANGER_BACKGROUND;
uint32_t COLOR_BUTTON_DISABLED_BACKGROUND;
uint32_t COLOR_BUTTON_SUCCESS_TEXT;
uint32_t COLOR_BUTTON_WARNING_TEXT;
uint32_t COLOR_BUTTON_DANGER_TEXT;
uint32_t COLOR_BUTTON_DISABLED_TEXT;
uint32_t COLOR_BUTTON_SUCCESS_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_WARNING_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_DANGER_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_DISABLED_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_SUCCESS_HOVER_TEXT;
uint32_t COLOR_BUTTON_WARNING_HOVER_TEXT;
uint32_t COLOR_BUTTON_DANGER_HOVER_TEXT;
uint32_t COLOR_BUTTON_DISABLED_HOVER_TEXT;

void theme_load(char loadtheme);

uint32_t status_color[4];

char theme;
