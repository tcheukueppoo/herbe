static const char *background_color = "#282828";
static const char *border_color = "#d79921";
static const char *font_color = "#ebdbb2";
static const char *font_pattern = "UbuntuMono Nerd Font:size=11";
static const unsigned line_spacing = 5;
static const unsigned int padding = 15;

static const unsigned int width = 450;
static const unsigned int border_size = 2;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 30;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_RIGHT;

static const unsigned int duration = 7; /* in seconds */

#define DISMISS_BUTTON Button1
#define ACTION_BUTTON Button3
