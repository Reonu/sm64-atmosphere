#include "src/game/envfx_snow.h"

const GeoLayout window_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, window_Map_001_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, window_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
