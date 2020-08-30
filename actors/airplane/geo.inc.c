#include "src/game/envfx_snow.h"

const GeoLayout airplane_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, airplane_Airplane_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_EngineA_Cylinder_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_EngineB_Cylinder_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_Engine_Support_Cube_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_TailFin_Cube_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_WingA_Cube_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1, 108, -185, airplane_WingB_Cube_001_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, airplane_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
