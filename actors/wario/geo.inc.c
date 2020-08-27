#include "src/game/envfx_snow.h"

const GeoLayout wario_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 32, 0, wario_Hips_mesh),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 21, -2, 0, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Left_leg_1_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 10, 0, wario_Left_leg_2_mesh),
						GEO_OPEN_NODE(),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, -1, -92, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Left_foot_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -21, -2, 0, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Right_leg_1_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 10, 0, wario_Right_leg_2_mesh),
						GEO_OPEN_NODE(),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, -1, -92, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Right_foot_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ANIMATED_PART(LAYER_ALPHA, 0, 30, 0, wario_Torso_mesh),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 9, 25, -90, 0, -180),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, wario_Buttons_mesh),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 44, 0, wario_Head_mesh),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 39, 24, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Left_arm_1_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 22, 0, wario_Left_arm_2_mesh),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 1, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Left_hand_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -39, 24, 0, -90, 0, 90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Right_arm_1_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 22, 0, wario_Right_arm_2_mesh),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 1, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wario_Right_hand_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wario_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wario_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
