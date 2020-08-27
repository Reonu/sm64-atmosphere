#include "src/game/envfx_snow.h"

const GeoLayout luigi2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_mesh),
						GEO_OPEN_NODE(),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, luigi2_000_offset_001_mesh),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_OPAQUE, luigi2_000_displaylist_mesh),
											GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -69, -126, 15, -33, -133),
											GEO_OPEN_NODE(),
												GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_ALPHA, luigi2_000_displaylist_001_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -69, 126, -15, 33, -133),
											GEO_OPEN_NODE(),
												GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_ALPHA, luigi2_000_displaylist_002_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 79, NULL),
									GEO_OPEN_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 180, -85, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_003_mesh),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, luigi2_000_offset_004_mesh),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_OPAQUE, luigi2_000_displaylist_003_mesh),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -79, NULL),
									GEO_OPEN_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 180, 85, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_006_mesh),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, luigi2_000_offset_007_mesh),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_OPAQUE, luigi2_000_displaylist_004_mesh),
														GEO_CLOSE_NODE(),
														GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 42, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_009_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 89, -38, 0, luigi2_000_offset_010_mesh),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 67, 0, 0, 0, 0, -80),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_011_mesh),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, luigi2_000_offset_012_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 89, -38, 0, luigi2_000_offset_013_mesh),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 67, 9, 0, 0, 0, -79),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_OPAQUE, luigi2_000_displaylist_005_mesh),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, luigi2_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, luigi2_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
