#include "actors/group0.h"
#include "actors/mario/texscroll.inc.c"
#include "actors/mario_swim/texscroll.inc.c"
#include "actors/peach2/texscroll.inc.c"
#include "actors/shell2/texscroll.inc.c"
#include "actors/luigi2/texscroll.inc.c"
#include "actors/wario/texscroll.inc.c"
#include "actors/yellow_key/texscroll.inc.c"
#include "actors/mario_swim_board/texscroll.inc.c"
void scroll_textures_group0() {
	scroll_actor_geo_mario();

	scroll_actor_geo_mario_swim();

	scroll_actor_geo_peach2();

	scroll_actor_geo_shell2();

	scroll_actor_geo_luigi2();

	scroll_actor_geo_wario();

	scroll_actor_geo_yellow_key();

	scroll_actor_geo_mario_swim_board();

}
